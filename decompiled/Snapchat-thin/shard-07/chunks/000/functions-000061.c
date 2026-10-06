/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105123e44; end: 105123e4b; -[SCFeatureSettingsService CC_ENROLLMENT_TAKEOVER_SKIP_COUNT_client_value:] */

void FUN_105123e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105123e4c; end: 105123e53; -[SCFeatureSettingsService CC_ENROLLMENT_TAKEOVER_SKIP_COUNT_server_value:] */

void FUN_105123e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105123e54; end: 105123e63; -[SCFeatureSettingsService lastCommunicationChannelEnrollmentTakeoverDismissCount] */

void FUN_105123e54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc6938,0);
  return;
}



/* Entry: 105123e64; end: 1051240f7; -[SCCommunicationChannelEnrollmentTakeoverEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105123e64(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126b5068;
  _objc_alloc();
  lVar2 = param_1;
  FUN_1051240f8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_1051240f8();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_68 = 0;
    lVar12 = 0;
  }
  else {
    uStack_68 = param_1 + _DAT_11271cbd4;
    _objc_loadWeakRetained();
    lVar12 = param_1 + _DAT_11271cbd0;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar12;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11271cbd8;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar13;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar16 = 0;
    uVar8 = 0;
    uVar9 = 0;
    lVar14 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + _DAT_11271cbe4);
    _objc_retain();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11271cbe8);
    _objc_retain();
    lVar16 = param_1 + _DAT_11271cbec;
    _objc_loadWeakRetained();
    lVar14 = param_1 + _DAT_11271cbe0;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar14;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11271cbdc;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar17;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056a00();
  lVar18 = (long)_DAT_11271cbc8;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar15);
  _objc_release(uVar9);
  _objc_release(lVar11);
  _objc_release(lVar17);
  _objc_release(lVar10);
  _objc_release(lVar14);
  _objc_release(lVar16);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(uStack_68);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c08b410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar18),PTR_s_launch_112600710);
  return;
}



/* Entry: 1051240f8; end: 10512411b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051240f8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271cbcc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512411c; end: 105124173; -[SCCommunicationChannelEnrollmentTakeoverEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512411c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf82f40(*(undefined8 *)(param_1 + _DAT_11271cbc8));
  puStack_28 = PTR_PTR_1126e6500;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105124174; end: 105124217; -[SCCommunicationChannelEnrollmentTakeoverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105124174(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271cbec);
  _objc_storeStrong(param_1 + _DAT_11271cbe8,0);
  _objc_storeStrong(param_1 + _DAT_11271cbe4,0);
  _objc_destroyWeak(param_1 + _DAT_11271cbe0);
  _objc_destroyWeak(param_1 + _DAT_11271cbdc);
  _objc_destroyWeak(param_1 + _DAT_11271cbd8);
  _objc_destroyWeak(param_1 + _DAT_11271cbd4);
  _objc_destroyWeak(param_1 + _DAT_11271cbd0);
  _objc_destroyWeak(param_1 + _DAT_11271cbcc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271cbc8,0);
  return;
}



/* Entry: 105124218; end: 1051243cb; -[SCCommunicationChannelEnrollmentTakeoverPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105124218(long param_1,undefined8 param_2)

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
  undefined8 uVar13;
  
  puVar1 = PTR_PTR_1126b5070;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271cbf0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271cbf4;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfbb580();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11271cbf8;
  lVar7 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010befd260();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11271cbfc;
  _objc_loadWeakRetained(lVar9);
  uVar13 = *(undefined8 *)(param_1 + _DAT_11271cc00);
  lVar10 = param_1 + _DAT_11271cc04;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011da0(puVar1,param_2,lVar4,lVar6,lVar8,lVar9,uVar13,lVar11);
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
  param_1 = param_1 + lVar12;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051243cc; end: 105124437; -[SCCommunicationChannelEnrollmentTakeoverPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051243cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271cc00,0);
  _objc_destroyWeak(param_1 + _DAT_11271cc04);
  _objc_destroyWeak(param_1 + _DAT_11271cbfc);
  _objc_destroyWeak(param_1 + _DAT_11271cbf0);
  _objc_destroyWeak(param_1 + _DAT_11271cbf4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271cbf8);
  return;
}



/* Entry: 105124438; end: 10512458b; -[SCCommunicationChannelEnrollmentTakeoverProvider initWithFeatureSettingsService:fstCampaignDataProvider:additionalMetricsData:userInfoServices:communicationChannelEnrollmentTakeoverScopeExposer:circumstanceEngine:] */

undefined1 *
FUN_105124438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e6508;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
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



/* Entry: 10512458c; end: 105124607; -[SCCommunicationChannelEnrollmentTakeoverProvider canShowCampaign:] */

undefined8 FUN_10512458c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010be074a0();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0b5ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105124608; end: 1051246cb; -[SCCommunicationChannelEnrollmentTakeoverProvider showCampaign:uiContainer:onComplete:] */

void FUN_105124608(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_5;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb200();
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b5078;
  _objc_alloc(PTR_PTR_1126b5078);
  func_0x00010c0567c0();
  _objc_release(param_4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  func_0x00010be584e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051246cc; end: 10512470f; -[SCCommunicationChannelEnrollmentTakeoverProvider takeoverCompleted:] */

void FUN_1051246cc(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105124700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105124710; end: 105124797; -[SCCommunicationChannelEnrollmentTakeoverProvider _logSeenTimestamp] */

void FUN_105124710(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0b4fe0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b7a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x10),PTR_s_setLastCommunicationChannelEnrol_11264b8b0,puVar2
            );
  return;
}



/* Entry: 105124798; end: 1051249e3; -[SCCommunicationChannelEnrollmentTakeoverProvider _eligibleForTakeover] */

uint FUN_105124798(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0fb000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar15;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(uVar12);
  _objc_release(uVar2);
  lVar4 = *(long *)(param_2 + 0x28);
  func_0x00010bf8d9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar10;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar13;
  func_0x00010c0f7580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar6 = *(long *)(param_2 + 0x28);
    func_0x00010bf8d9a0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  else {
    _objc_retain(lVar5);
    lVar9 = lVar5;
  }
  _objc_release(lVar5);
  _objc_release(lVar13);
  _objc_release(lVar10);
  _objc_release(lVar4);
  lVar10 = *(long *)(param_2 + 0x10);
  func_0x00010c088740(lVar10);
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,uVar3);
  if ((int)puVar11 == 0) {
    uVar1 = 0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,lVar9);
    uVar1 = (uint)puVar11;
  }
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  FUN_10512315c(uVar12);
  lVar13 = *(long *)(param_2 + 0x38);
  func_0x000105123198(lVar13);
  puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar11);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010c0b4fe0();
  _objc_release(puVar11);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bfd57a0(uVar15);
  _objc_release(lVar9);
  _objc_release(uVar3);
  return (uint)uVar12 & uVar1 & ((uint)uVar15 ^ 1 | (uint)(lVar13 <= (long)puVar14 - lVar10));
}



/* Entry: 1051249e4; end: 105124a4f; -[SCCommunicationChannelEnrollmentTakeoverProvider .cxx_destruct] */

void FUN_1051249e4(long param_1)

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



/* Entry: 105124a50; end: 105124a5b; +[SCCAuthTakeoverView componentPath] */

undefined ** FUN_105124a50(void)

{
  return &PTR____CFConstantStringClassReference_110dc6978;
}



/* Entry: 105124a5c; end: 105124a8f; -[SCCAuthTakeoverView initWithViewModel:componentContext:runtime:] */

void FUN_105124a5c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6510;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105124a90; end: 105124adf; -[SCCAuthTakeoverView setViewModel:] */

void FUN_105124a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105124ae0; end: 105124b23; -[SCCAuthTakeoverView viewModel] */

void FUN_105124ae0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105124b24; end: 105124bc3; -[SCAuthTakeoverType__Enum init] */

undefined **
FUN_105124b24(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110dc6998;
  puStack_30 = PTR_PTR_1130c4970;
  uVar6 = 2;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0105e0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(uVar6);
  _objc_retainBlock();
  uVar3 = uVar6;
  _objc_retainBlock();
  _objc_release(uVar6);
  uVar6 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar4 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  puStack_88 = PTR_PTR_1126e6518;
  ppuVar5 = &puStack_90;
  puStack_90 = puVar1;
  _objc_msgSendSuper2(ppuVar5,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(puVar2);
  return ppuVar5;
}



/* Entry: 105124bc4; end: 105124cb7; -[SCCAuthTakeoverContext initWithUpdatePhoneClicked:updateEmailClicked:cancelClicked:backgroundTapped:] */

undefined8 *
FUN_105124bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar3 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  puStack_48 = PTR_PTR_1126e6518;
  puVar4 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105124cb8; end: 105124ccf; +[SCCAuthTakeoverContext valdiMarshallableObjectDescriptor] */

void FUN_105124cb8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_updatePhoneClicked_11086a388;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105124cd0; end: 105124d13; -[SCCAuthTakeoverViewModel initWithEmail:phoneNumber:authTakeoverType:] */

void FUN_105124cd0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6520;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105124d14; end: 105124d33; +[SCCAuthTakeoverViewModel valdiMarshallableObjectDescriptor] */

void FUN_105124d14(undefined8 *param_1)

{
  *param_1 = &PTR_s_email_11086a400;
  param_1[1] = &PTR_s_SCAuthTakeoverType_11086a490;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105124d34; end: 105124dcf; -[SCCommunicationChannelEnrollmentTakeoverScope initWithUIContainer:delegate:] */

undefined1 *
FUN_105124d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6528;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105124dd0; end: 105124dd7; -[SCCommunicationChannelEnrollmentTakeoverScope uiContainer] */

undefined8 FUN_105124dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105124dd8; end: 105124def; -[SCCommunicationChannelEnrollmentTakeoverScope delegate] */

void FUN_105124dd8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105124df0; end: 105124e1b; -[SCCommunicationChannelEnrollmentTakeoverScope .cxx_destruct] */

void FUN_105124df0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105124e1c; end: 105124e83; +[CCEnrollmentTakeoverCofConfig descriptor] */

void FUN_105124e1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9460 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a1a760,
                        &PTR____CFConstantStringClassReference_110dc69d8,
                        &PTR_s_com_snapchat_auth_cof_proto_1130c4978,&PTR_s_enabled_1130c4990,3,0xc,
                        0x1c);
    puRam00000001136b9460 = puVar1;
  }
  return;
}



/* Entry: 105124e84; end: 105124e8f; -[SCFeatureSettingsService hasUserReachabilityTakeoverTimestampSeconds] */

void FUN_105124e84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc69f8);
  return;
}



/* Entry: 105124e90; end: 105124e9b; -[SCFeatureSettingsService lastUserReachabilityTakeoverTimestampSecondsServerParam] */

undefined ** FUN_105124e90(void)

{
  return &PTR____CFConstantStringClassReference_110dc69f8;
}



/* Entry: 105124e9c; end: 105124eab; -[SCFeatureSettingsService setLastUserReachabilityTakeoverTimestampSeconds:] */

void FUN_105124e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc69f8,param_3);
  return;
}



/* Entry: 105124eac; end: 105124eb3; -[SCFeatureSettingsService USER_REACHABILITY_TAKEOVER_LAST_SEEN_TIMESTAMP_SECONDS_client_value:] */

void FUN_105124eac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105124eb4; end: 105124ebb; -[SCFeatureSettingsService USER_REACHABILITY_TAKEOVER_LAST_SEEN_TIMESTAMP_SECONDS_server_value:] */

void FUN_105124eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105124ebc; end: 105124ecb; -[SCFeatureSettingsService lastUserReachabilityTakeoverTimestampSeconds] */

void FUN_105124ebc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc69f8,0);
  return;
}



/* Entry: 105124ecc; end: 10512513f; -[SCUserReachabilityTakeoverRouter initWithUIContainer:delegate:userInfoServices:lazyBlizzardUserLogger:lazyGrapheneRegistry:resourceDownloader:emailSettingsScopeExposer:mobileSettingsScopeExposer:mobileSettingsScopeServices:performerProvider:] */

long FUN_105124ecc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_3;
    _objc_retain(param_12);
    _objc_retain(param_8);
    _objc_retain(param_4);
    _objc_release(uVar2);
    _objc_storeWeak(param_1 + 0x50,param_4);
    _objc_release(param_4);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_11;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_5;
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126b5080;
    _objc_alloc();
    func_0x00010c00aca0();
    _objc_release(param_12);
    _objc_release(param_8);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_alloc();
    func_0x00010c0402e0();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1cb760(*(undefined8 *)(param_1 + 0x40));
    func_0x00010c1c8ae0(*(undefined8 *)(param_1 + 0x40));
    func_0x00010c1c8b80(*(undefined8 *)(param_1 + 0x40));
    puVar1 = PTR_PTR_1126aead0;
    _objc_alloc();
    func_0x00010c02e4c0();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
    func_0x00010be88bc0(param_1);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105125140; end: 1051251a7; -[SCUserReachabilityTakeoverRouter presentTakeoverModal] */

void FUN_105125140(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0d5e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be56c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logPageImpression_1125734c0);
  return;
}



/* Entry: 1051251a8; end: 1051251db; -[SCUserReachabilityTakeoverRouter dismissTakeoverModal] */

void FUN_1051251a8(undefined8 param_1)

{
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051251dc; end: 105125217; -[SCUserReachabilityTakeoverRouter didBackgroundTapDismiss] */

void FUN_1051251dc(undefined8 param_1)

{
  func_0x00010be526c0();
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1420c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105125218; end: 105125253; -[SCUserReachabilityTakeoverRouter didTapLooksGoodButton] */

void FUN_105125218(undefined8 param_1)

{
  func_0x00010be55900();
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1420c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105125254; end: 10512533f; -[SCUserReachabilityTakeoverRouter didTapChangeEmail] */

void FUN_105125254(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010be52900();
  lVar1 = param_1;
  func_0x00010bf8da80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf8da80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126ae610;
  _objc_alloc(PTR_PTR_1126ae610);
  lVar1 = param_1;
  func_0x00010c0d5e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0582c0(puVar3,param_2,lVar1,param_1);
  _objc_release(lVar1);
  func_0x00010bf8da80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105125340; end: 10512543f; -[SCUserReachabilityTakeoverRouter didTapChangePhone] */

void FUN_105125340(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010be56fa0();
  lVar1 = param_1;
  func_0x00010c0cf500();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c0cf500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010c0cf540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0d5e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf24220(lVar1,param_2,lVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0cf500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105125440; end: 1051254cf; -[SCUserReachabilityTakeoverRouter emailSettingsDidComplete] */

void FUN_105125440(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010be88bc0();
  lVar1 = param_1;
  func_0x00010bf8da80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bf8da80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1051254d0; end: 10512555f; -[SCUserReachabilityTakeoverRouter mobileSettingsDidComplete] */

void FUN_1051254d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010be88bc0();
  lVar1 = param_1;
  func_0x00010c0cf500();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c0cf500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105125560; end: 1051255ff; -[SCUserReachabilityTakeoverRouter _refreshView] */

void FUN_105125560(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  lVar1 = param_1;
  func_0x00010c2928e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fb000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2928e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf8d9a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103e80(uVar4,param_2,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105125600; end: 105125703; -[SCUserReachabilityTakeoverRouter _logPageImpression] */

void FUN_105125600(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b5088;
  func_0x00010c2687c0(PTR_PTR_1126b5088);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08d620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1207c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126aebe8;
  _objc_opt_new(PTR_PTR_1126aebe8);
  func_0x00010c21acc0();
  func_0x00010c197620(puVar5,param_2,0);
  func_0x00010c08d2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105125704; end: 105125813; -[SCUserReachabilityTakeoverRouter _logEmailButtonTapped] */

void FUN_105125704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b5088;
  func_0x00010bf8dac0(PTR_PTR_1126b5088);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08d620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1207c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b5090;
  _objc_opt_new(PTR_PTR_1126b5090);
  func_0x00010c174700();
  func_0x00010c161fe0(puVar5,param_2,5);
  func_0x00010c187720(puVar5,param_2,2);
  func_0x00010c08d2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105125814; end: 105125923; -[SCUserReachabilityTakeoverRouter _logPhoneButtonTapped] */

void FUN_105125814(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b5088;
  func_0x00010c0fb220(PTR_PTR_1126b5088);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08d620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1207c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b5090;
  _objc_opt_new(PTR_PTR_1126b5090);
  func_0x00010c174700();
  func_0x00010c161fe0(puVar5,param_2,5);
  func_0x00010c187720(puVar5,param_2,2);
  func_0x00010c08d2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105125924; end: 105125a27; -[SCUserReachabilityTakeoverRouter _logLooksGoodButtonTapped] */

void FUN_105125924(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b5088;
  func_0x00010c0b55c0(PTR_PTR_1126b5088);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08d620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1207c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126aebe8;
  _objc_opt_new(PTR_PTR_1126aebe8);
  func_0x00010c21acc0();
  func_0x00010c197620(puVar5,param_2,2);
  func_0x00010c08d2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105125a28; end: 105125b2b; -[SCUserReachabilityTakeoverRouter _logDismissWithBackgroundTap] */

void FUN_105125a28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b5088;
  func_0x00010bf13f00(PTR_PTR_1126b5088);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08d620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1207c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126aebe8;
  _objc_opt_new(PTR_PTR_1126aebe8);
  func_0x00010c21acc0();
  func_0x00010c197620(puVar5,param_2,4);
  func_0x00010c08d2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105125b2c; end: 105125b33; -[SCUserReachabilityTakeoverRouter lazyBlizzardUserLogger] */

undefined8 FUN_105125b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105125b34; end: 105125b63; -[SCUserReachabilityTakeoverRouter setLazyBlizzardUserLogger:] */

void FUN_105125b34(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105125b64; end: 105125b6b; -[SCUserReachabilityTakeoverRouter lazyGrapheneRegistry] */

undefined8 FUN_105125b64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105125b6c; end: 105125b9b; -[SCUserReachabilityTakeoverRouter setLazyGrapheneRegistry:] */

void FUN_105125b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105125b9c; end: 105125ba3; -[SCUserReachabilityTakeoverRouter uiContainer] */

undefined8 FUN_105125b9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105125ba4; end: 105125bd3; -[SCUserReachabilityTakeoverRouter setUiContainer:] */

void FUN_105125ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105125bd4; end: 105125bdb; -[SCUserReachabilityTakeoverRouter emailSettingsScopeExposer] */

undefined8 FUN_105125bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105125bdc; end: 105125c0b; -[SCUserReachabilityTakeoverRouter setEmailSettingsScopeExposer:] */

void FUN_105125bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105125c0c; end: 105125c13; -[SCUserReachabilityTakeoverRouter mobileSettingsScopeExposer] */

undefined8 FUN_105125c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105125c14; end: 105125c43; -[SCUserReachabilityTakeoverRouter setMobileSettingsScopeExposer:] */

void FUN_105125c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105125c44; end: 105125c4b; -[SCUserReachabilityTakeoverRouter mobileSettingsScopeServices] */

undefined8 FUN_105125c44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105125c4c; end: 105125c7b; -[SCUserReachabilityTakeoverRouter setMobileSettingsScopeServices:] */

void FUN_105125c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105125c7c; end: 105125c83; -[SCUserReachabilityTakeoverRouter userInfoServices] */

undefined8 FUN_105125c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105125c84; end: 105125cb3; -[SCUserReachabilityTakeoverRouter setUserInfoServices:] */

void FUN_105125c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105125cb4; end: 105125cbb; -[SCUserReachabilityTakeoverRouter navController] */

undefined8 FUN_105125cb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105125cbc; end: 105125ceb; -[SCUserReachabilityTakeoverRouter setNavController:] */

void FUN_105125cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105125cec; end: 105125cf3; -[SCUserReachabilityTakeoverRouter navContainer] */

undefined8 FUN_105125cec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105125cf4; end: 105125d23; -[SCUserReachabilityTakeoverRouter setNavContainer:] */

void FUN_105125cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105125d24; end: 105125d3b; -[SCUserReachabilityTakeoverRouter delegate] */

void FUN_105125d24(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105125d3c; end: 105125d47; -[SCUserReachabilityTakeoverRouter setDelegate:] */

void FUN_105125d3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 105125d48; end: 105125d4f; -[SCUserReachabilityTakeoverRouter modalVC] */

undefined8 FUN_105125d48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105125d50; end: 105125d7f; -[SCUserReachabilityTakeoverRouter setModalVC:] */

void FUN_105125d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105125d80; end: 105125e17; -[SCUserReachabilityTakeoverRouter .cxx_destruct] */

void FUN_105125d80(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 105125e18; end: 105125f63; -[SCUserReachabilityTakeoverWorkflow initWithUIContainer:delegate:userInfoServices:lazyBlizzardUserLogger:lazyGrapheneRegistry:resourceDownloader:emailSettingsScopeExposer:mobileSettingsScopeExposer:mobileSettingsScopeServices:performerProvider:] */

long FUN_105125e18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    _objc_retain(param_12);
    _objc_retain(param_11);
    _objc_retain(param_10);
    _objc_retain(param_9);
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_storeWeak(param_1 + 0x10,param_4);
    puVar1 = PTR_PTR_1126b5098;
    _objc_alloc();
    func_0x00010c056a20();
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 105125f64; end: 105125f6b; -[SCUserReachabilityTakeoverWorkflow launch] */

void FUN_105125f64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_presentTakeoverModal_1126213f0);
  return;
}



/* Entry: 105125f6c; end: 105125f73; -[SCUserReachabilityTakeoverWorkflow dismiss] */

void FUN_105125f6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dismissTakeoverModal_1125beb48);
  return;
}



/* Entry: 105125f74; end: 105125fa3; -[SCUserReachabilityTakeoverWorkflow routerShouldDismissModal] */

void FUN_105125f74(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2686c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105125fa4; end: 105125fab; -[SCUserReachabilityTakeoverWorkflow router] */

undefined8 FUN_105125fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105125fac; end: 105125fdb; -[SCUserReachabilityTakeoverWorkflow setRouter:] */

void FUN_105125fac(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105125fdc; end: 105125ff3; -[SCUserReachabilityTakeoverWorkflow delegate] */

void FUN_105125fdc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105125ff4; end: 105125fff; -[SCUserReachabilityTakeoverWorkflow setDelegate:] */

void FUN_105125ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105126000; end: 10512602b; -[SCUserReachabilityTakeoverWorkflow .cxx_destruct] */

void FUN_105126000(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10512602c; end: 1051262cf; -[SCUserReachabilityTakeoverEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512602c(long param_1)

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
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uStack_70;
  
  puVar1 = PTR_PTR_1126b50a0;
  _objc_alloc();
  lVar2 = param_1;
  FUN_1051262d0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_1051262d0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_70 = 0;
    lVar11 = 0;
  }
  else {
    uStack_70 = param_1 + _DAT_11271cc6c;
    _objc_loadWeakRetained();
    lVar11 = param_1 + _DAT_11271cc68;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar11;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11271cc70;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar12;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11271cc74;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar13;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar15 = 0;
    uVar17 = 0;
    uVar18 = 0;
    lVar19 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(param_1 + _DAT_11271cc7c);
    _objc_retain(uVar17);
    uVar18 = *(undefined8 *)(param_1 + _DAT_11271cc80);
    _objc_retain(uVar18);
    lVar15 = param_1 + _DAT_11271cc84;
    _objc_loadWeakRetained();
    lVar19 = param_1 + _DAT_11271cc78;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar19;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056a20();
  lVar16 = (long)_DAT_11271cc60;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar14);
  _objc_release(uVar18);
  _objc_release(lVar10);
  _objc_release(lVar19);
  _objc_release(lVar15);
  _objc_release(uVar17);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar13);
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(uStack_70);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c08b410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar16),PTR_s_launch_112600710);
  return;
}



/* Entry: 1051262d0; end: 1051262f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051262d0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271cc64);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051262f4; end: 10512634b; -[SCUserReachabilityTakeoverEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051262f4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf82f40(*(undefined8 *)(param_1 + _DAT_11271cc60));
  puStack_28 = PTR_PTR_1126e6530;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512634c; end: 1051263ef; -[SCUserReachabilityTakeoverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512634c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271cc84);
  _objc_storeStrong(param_1 + _DAT_11271cc80,0);
  _objc_storeStrong(param_1 + _DAT_11271cc7c,0);
  _objc_destroyWeak(param_1 + _DAT_11271cc78);
  _objc_destroyWeak(param_1 + _DAT_11271cc74);
  _objc_destroyWeak(param_1 + _DAT_11271cc70);
  _objc_destroyWeak(param_1 + _DAT_11271cc6c);
  _objc_destroyWeak(param_1 + _DAT_11271cc68);
  _objc_destroyWeak(param_1 + _DAT_11271cc64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271cc60,0);
  return;
}



/* Entry: 1051263f0; end: 10512654b; -[SCUserReachabilityTakeoverPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051263f0(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b50a8;
  _objc_alloc(PTR_PTR_1126b50a8);
  lVar2 = param_1 + _DAT_11271cc88;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271cc8c;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfbb580();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11271cc90;
  lVar7 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010befd260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011dc0(puVar1,param_2,lVar4,lVar6,lVar8,*(undefined8 *)(param_1 + _DAT_11271cc94));
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar9;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10512654c; end: 10512659f; -[SCUserReachabilityTakeoverPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10512654c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271cc94,0);
  _objc_destroyWeak(param_1 + _DAT_11271cc88);
  _objc_destroyWeak(param_1 + _DAT_11271cc8c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271cc90);
  return;
}



/* Entry: 1051265a0; end: 10512669b; -[SCUserReachabilityTakeoverProvider initWithFeatureSettingsService:fstCampaignDataProvider:additionalMetricsData:userReachabilityScopeExposer:] */

undefined1 *
FUN_1051265a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126e6538;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10512669c; end: 1051266e3; -[SCUserReachabilityTakeoverProvider canShowCampaign:] */

undefined8 FUN_10512669c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1051266e4; end: 1051267a7; -[SCUserReachabilityTakeoverProvider showCampaign:uiContainer:onComplete:] */

void FUN_1051266e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_5;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb200();
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b50b0;
  _objc_alloc(PTR_PTR_1126b50b0);
  func_0x00010c0567c0();
  _objc_release(param_4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  func_0x00010be584e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051267a8; end: 1051267eb; -[SCUserReachabilityTakeoverProvider takeoverCompleted] */

void FUN_1051267a8(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051267dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1051267ec; end: 105126873; -[SCUserReachabilityTakeoverProvider _logSeenTimestamp] */

void FUN_1051267ec(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0b4fe0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b8f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x10),PTR_s_setLastUserReachabilityTakeoverT_11264bde8,puVar2
            );
  return;
}



/* Entry: 105126874; end: 1051268c7; -[SCUserReachabilityTakeoverProvider .cxx_destruct] */

void FUN_105126874(long param_1)

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



/* Entry: 1051268c8; end: 1051269af; -[SCUserReachabilityViewController initWithDelegate:resourceDownloader:performerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1051268c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e6540;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271ccac;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271ccb0),param_3);
    lVar3 = (long)_DAT_11271ccb4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010beb14e0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051269b0; end: 105126a67; -[SCUserReachabilityViewController viewDidLayoutSubviews] */

void FUN_1051269b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6540;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLayoutSubviews_112684cc8);
  puVar1 = PTR_PTR_1126b08d8;
  func_0x00010bf42ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010085b3c8(0x4010000000000000,0x3fc0a3d70a3d70a4,*(undefined8 *)PTR__CGSizeZero_110347620
                      ,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar1,param_1,puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 105126a68; end: 105126eb7; -[SCUserReachabilityViewController populateWithPhoneNumberProvider:emailProvider:] */

undefined * FUN_105126a68(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_3);
  puVar12 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar12;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0f7580();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    _objc_retain(puVar4);
    puVar7 = puVar4;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar12);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  puVar12 = puVar7;
  func_0x00010c08fa60();
  puVar3 = puVar12;
  if (puVar12 == (undefined *)0x0 && lVar1 == 0) {
    func_0x000105129c74();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105129c5c();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar8 = param_1;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release();
  func_0x000105129c8c();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c08daa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar9);
  _objc_release();
  if (lVar1 == 0) {
    uVar13 = 0xc2;
    func_0x000105129cbc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    uVar13 = 0xc6;
    lVar8 = lVar2;
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  uVar13 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_78 = uVar13;
  puStack_70 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&uStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar5,param_2,lVar8,puVar6);
  lVar9 = param_1;
  func_0x00010c0faac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b7a0();
  _objc_release(lVar9);
  _objc_release(puVar5);
  _objc_release(puVar6);
  if (puVar12 == (undefined *)0x0) {
    uVar14 = 0xc2;
    func_0x000105129ca4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar7);
    uVar14 = 0xc6;
    puVar6 = puVar7;
  }
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_88 = uVar13;
  puStack_80 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&uStack_88,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar10,param_2,puVar6,puVar11);
  lVar9 = param_1;
  func_0x00010bf8d700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b7a0();
  _objc_release(lVar9);
  _objc_release(puVar10);
  _objc_release(puVar11);
  if (puVar12 == (undefined *)0x0 && lVar1 == 0) {
    func_0x000105129cec();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105129cd4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf83340();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = (undefined *)0x0;
  func_0x00010c216260();
  _objc_release(param_1);
  _objc_release(puVar11);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(lVar8);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(lVar2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x00010c29bf00(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar12);
  return (undefined *)(ulong)(puVar12 == param_4);
}



/* Entry: 105126eb8; end: 105126f0f; -[SCUserReachabilityViewController gestureRecognizer:shouldReceiveTouch:] */

bool FUN_105126eb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_4);
  return param_4 == param_1;
}



/* Entry: 105126f10; end: 105126f6f; -[SCUserReachabilityViewController cardTransitionShouldBeginWithView:touchLocation:] */

bool FUN_105126f10(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  return param_3 == param_1;
}


