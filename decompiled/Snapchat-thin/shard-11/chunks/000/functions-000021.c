/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080604ec; end: 1080605b7; -[SCStoriesNetworkRequestRetryConfig isEqual:] */

bool FUN_1080604ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) ||
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 1080605b8; end: 1080605bf; -[SCStoriesNetworkRequestRetryConfig maxRetryCountInConnectionSession] */

undefined8 FUN_1080605b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080605c0; end: 1080605c7; -[SCStoriesNetworkRequestRetryConfig maxRetryCountInAppSession] */

undefined8 FUN_1080605c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080605c8; end: 1080605cf; -[SCStoriesNetworkRequestRetryConfig retryBackoffInterval] */

undefined8 FUN_1080605c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1080605d0; end: 108060633; -[SCStoriesFriendOfGroupPostabilityEligibility initWithConsentStatus:participantCount:groupStoryMayExist:isCurrentUserParticipant:] */

void FUN_1080605d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fc378;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  return;
}



/* Entry: 108060634; end: 108060657; -[SCStoriesFriendOfGroupPostabilityEligibility copyWithZone:] */

undefined8 FUN_108060634(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108060658; end: 1080606c3; -[SCStoriesFriendOfGroupPostabilityEligibility hash] */

long * FUN_108060658(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  lStack_38 = -lVar1;
  if (-1 < lVar1) {
    lStack_38 = lVar1;
  }
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  plVar2 = &lStack_38;
  func_0x000100505190(plVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == param_3) {
    plVar4 = (long *)0x1;
  }
  else {
    plVar4 = (long *)0x0;
    if ((plVar2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar4 = plVar2;
      _objc_opt_class(plVar2);
      plVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar4);
      if ((((ulong)plVar3 & 1) == 0) ||
         (((plVar2[2] != param_3[2] || (plVar2[3] != param_3[3])) ||
          ((char)plVar2[1] != (char)param_3[1])))) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = (long *)(ulong)(*(char *)((long)plVar2 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return plVar4;
}



/* Entry: 1080606c4; end: 10806077b; -[SCStoriesFriendOfGroupPostabilityEligibility isEqual:] */

bool FUN_1080606c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
          (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10806077c; end: 108060783; -[SCStoriesFriendOfGroupPostabilityEligibility consentStatus] */

undefined8 FUN_10806077c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108060784; end: 10806078b; -[SCStoriesFriendOfGroupPostabilityEligibility participantCount] */

undefined8 FUN_108060784(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10806078c; end: 108060793; -[SCStoriesFriendOfGroupPostabilityEligibility groupStoryMayExist] */

undefined1 FUN_10806078c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108060794; end: 10806079b; -[SCStoriesFriendOfGroupPostabilityEligibility isCurrentUserParticipant] */

undefined1 FUN_108060794(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10806079c; end: 10806087b;  */

void FUN_10806079c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110ed1178,0,0);
  puVar3 = (undefined *)0x0;
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed11b8,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126d9010;
    _objc_alloc(PTR_PTR_1126d9010);
    func_0x00010c008360();
    _objc_retain(puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10806087c; end: 1080608a3;  */

void FUN_10806087c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ed1178,0,0);
  return;
}



/* Entry: 1080608a4; end: 1080608cb;  */

long FUN_1080608a4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110ed0fb8,1000,0);
  return (long)(int)param_1;
}



/* Entry: 1080608cc; end: 108060963;  */

void FUN_1080608cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ed0fd8,0,0);
  return;
}



/* Entry: 108060964; end: 108060a3b;  */

/* WARNING: Removing unreachable block (ram,0x0001080609d8) */

void FUN_108060964(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed10b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126d9018;
  _objc_alloc(PTR_PTR_1126d9018);
  func_0x00010c008360();
  _objc_retain(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108060a3c; end: 108060a4f;  */

void FUN_108060a3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ed10d8,0,0);
  return;
}



/* Entry: 108060a50; end: 108060acb;  */

undefined8 FUN_108060a50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed10f8,0);
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_2 != 0) {
    func_0x00010bf9d480(param_1);
  }
  uVar1 = param_1;
  func_0x00010c296d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108060acc; end: 108060adf;  */

void FUN_108060acc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_longValueForConfigKeySync_defaul_11260ae20,
             &PTR____CFConstantStringClassReference_110ed1118,0,0);
  return;
}



/* Entry: 108060ae0; end: 108060b07;  */

long FUN_108060ae0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110ed1138,0,0);
  return (long)(int)param_1;
}



/* Entry: 108060b08; end: 108060b2f;  */

void FUN_108060b08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ed1158,0,0);
  return;
}



/* Entry: 108060b30; end: 108060c3b;  */

undefined8 FUN_108060b30(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  FUN_10806079c();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf42ea0();
    lVar3 = lVar1;
    func_0x00010bf42e80();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
    lVar5 = param_2;
    func_0x00010bf51c00();
    if ((lVar2 + (long)(int)lVar5 * 86400000 < (long)param_1 * 1000) &&
       (lVar2 = param_2, func_0x00010c068400(), lVar3 < (int)lVar2)) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 108060c3c; end: 108060cc7;  */

uint FUN_108060c3c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf43100();
  lVar2 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar2;
  func_0x00010c280840(lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
  return (uint)(0 < lVar3) & ((uint)uVar1 ^ 0xffffffff);
}



/* Entry: 108060cc8; end: 108060e03;  */

undefined8 FUN_108060cc8(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  FUN_10806079c();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar9 = 0;
    goto LAB_108060dd4;
  }
  lVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd57c0();
  lVar3 = lVar1;
  func_0x00010bf42e60();
  lVar4 = lVar1;
  func_0x00010bf42ea0();
  lVar5 = lVar1;
  func_0x00010bf42e80();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar6);
  lVar7 = param_2;
  func_0x00010bf51c00();
  if (param_1 * 1000.0 <= (double)(lVar4 + (long)(int)lVar7 * 86400000)) {
LAB_108060dc0:
    uVar9 = 0;
  }
  else {
    lVar4 = param_2;
    func_0x00010c068400();
    iVar8 = 0;
    if (lVar3 != 0) {
      iVar8 = (int)lVar2;
    }
    if (((int)lVar4 <= lVar5) || (iVar8 != 0)) goto LAB_108060dc0;
    uVar9 = 1;
  }
  _objc_release(lVar1);
LAB_108060dd4:
  _objc_release(param_2);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 108060e04; end: 108060ea7;  */

uint FUN_108060e04(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf42fe0();
  uVar2 = param_1;
  func_0x00010bf43100(param_1);
  lVar3 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = lVar3;
  func_0x00010c280840(lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  return (uint)(0 < lVar4) & (((uint)uVar2 | (uint)uVar1) ^ 0xffffffff);
}



/* Entry: 108060ea8; end: 108060ebb;  */

void FUN_108060ea8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ed11d8,0,0);
  return;
}



/* Entry: 108060ebc; end: 108060ee3;  */

long FUN_108060ebc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110ed11f8,0,0);
  return (long)(int)param_1;
}



/* Entry: 108060ee4; end: 108060eef; -[SCFeatureSettingsService isNotificationGroupCommunitiesOn] */

void FUN_108060ee4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed1218);
  return;
}



/* Entry: 108060ef0; end: 108060efb; -[SCFeatureSettingsService notificationGroupCommunitiesServerParam] */

undefined ** FUN_108060ef0(void)

{
  return &PTR____CFConstantStringClassReference_110ed1218;
}



/* Entry: 108060efc; end: 108060f0b; -[SCFeatureSettingsService setNotificationGroupCommunities:] */

void FUN_108060efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed1218,param_3);
  return;
}



/* Entry: 108060f0c; end: 108060f13; -[SCFeatureSettingsService NOTIFICATION_GROUP_COMMUNITIES_client_value:] */

undefined * FUN_108060f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108060f14; end: 108060f1b; -[SCFeatureSettingsService NOTIFICATION_GROUP_COMMUNITIES_server_value:] */

void FUN_108060f14(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108060f1c; end: 108060f2b; -[SCFeatureSettingsService notificationGroupCommunities] */

void FUN_108060f1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed1218,1);
  return;
}



/* Entry: 108060f2c; end: 108060f37; -[SCFeatureSettingsService hasCommunitiesSectionImpressionTimestampMillis] */

void FUN_108060f2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed1238);
  return;
}



/* Entry: 108060f38; end: 108060f43; -[SCFeatureSettingsService communitiesSectionImpressionTimestampMillisServerParam] */

undefined ** FUN_108060f38(void)

{
  return &PTR____CFConstantStringClassReference_110ed1238;
}



/* Entry: 108060f44; end: 108060f53; -[SCFeatureSettingsService setCommunitiesSectionImpressionTimestampMillis:] */

void FUN_108060f44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed1238,param_3);
  return;
}



/* Entry: 108060f54; end: 108060f5b; -[SCFeatureSettingsService COMMUNITIES_SECTION_IMPRESSION_TIMESTAMP_MILLIS_client_value:] */

void FUN_108060f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108060f5c; end: 108060f63; -[SCFeatureSettingsService COMMUNITIES_SECTION_IMPRESSION_TIMESTAMP_MILLIS_server_value:] */

void FUN_108060f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108060f64; end: 108060f73; -[SCFeatureSettingsService communitiesSectionImpressionTimestampMillis] */

void FUN_108060f64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed1238,0);
  return;
}



/* Entry: 108060f74; end: 108060f7f; -[SCFeatureSettingsService hasCommunitiesSectionInteractionTimestampMillis] */

void FUN_108060f74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed1258);
  return;
}



/* Entry: 108060f80; end: 108060f8b; -[SCFeatureSettingsService communitiesSectionInteractionTimestampMillisServerParam] */

undefined ** FUN_108060f80(void)

{
  return &PTR____CFConstantStringClassReference_110ed1258;
}



/* Entry: 108060f8c; end: 108060f9b; -[SCFeatureSettingsService setCommunitiesSectionInteractionTimestampMillis:] */

void FUN_108060f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed1258,param_3);
  return;
}



/* Entry: 108060f9c; end: 108060fa3; -[SCFeatureSettingsService COMMUNITIES_SECTION_INTERACTION_TIMESTAMP_MILLIS_client_value:] */

void FUN_108060f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108060fa4; end: 108060fab; -[SCFeatureSettingsService COMMUNITIES_SECTION_INTERACTION_TIMESTAMP_MILLIS_server_value:] */

void FUN_108060fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108060fac; end: 108060fbb; -[SCFeatureSettingsService communitiesSectionInteractionTimestampMillis] */

void FUN_108060fac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed1258,0);
  return;
}



/* Entry: 108060fbc; end: 108060fc7; -[SCFeatureSettingsService hasCommunitiesSectionInteractionCount] */

void FUN_108060fbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed1278);
  return;
}



/* Entry: 108060fc8; end: 108060fd3; -[SCFeatureSettingsService communitiesSectionInteractionCountServerParam] */

undefined ** FUN_108060fc8(void)

{
  return &PTR____CFConstantStringClassReference_110ed1278;
}



/* Entry: 108060fd4; end: 108060fe3; -[SCFeatureSettingsService setCommunitiesSectionInteractionCount:] */

void FUN_108060fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed1278,param_3);
  return;
}



/* Entry: 108060fe4; end: 108060feb; -[SCFeatureSettingsService COMMUNITIES_SECTION_INTERACTION_COUNT_client_value:] */

void FUN_108060fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108060fec; end: 108060ff3; -[SCFeatureSettingsService COMMUNITIES_SECTION_INTERACTION_COUNT_server_value:] */

void FUN_108060fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108060ff4; end: 108061003; -[SCFeatureSettingsService communitiesSectionInteractionCount] */

void FUN_108060ff4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed1278,0);
  return;
}



/* Entry: 108061004; end: 10806100f; -[SCFeatureSettingsService hasCommunitySectionUserInteracted] */

void FUN_108061004(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed1298);
  return;
}



/* Entry: 108061010; end: 10806101b; -[SCFeatureSettingsService communitySectionUserInteractedServerParam] */

undefined ** FUN_108061010(void)

{
  return &PTR____CFConstantStringClassReference_110ed1298;
}



/* Entry: 10806101c; end: 10806102b; -[SCFeatureSettingsService setCommunitySectionUserInteracted:] */

void FUN_10806101c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed1298,param_3);
  return;
}



/* Entry: 10806102c; end: 108061033; -[SCFeatureSettingsService COMMUNITIES_SECTION_HAS_INTERACTED_PUBLIC_ALERT_client_value:] */

undefined * FUN_10806102c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108061034; end: 10806103b; -[SCFeatureSettingsService COMMUNITIES_SECTION_HAS_INTERACTED_PUBLIC_ALERT_server_value:] */

void FUN_108061034(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10806103c; end: 10806104b; -[SCFeatureSettingsService communitySectionUserInteracted] */

void FUN_10806103c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed1298,0);
  return;
}



/* Entry: 10806104c; end: 108061057; -[SCFeatureSettingsService hasCommunityHeaderUserInteracted] */

void FUN_10806104c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed12b8);
  return;
}



/* Entry: 108061058; end: 108061063; -[SCFeatureSettingsService communityHeaderUserInteractedServerParam] */

undefined ** FUN_108061058(void)

{
  return &PTR____CFConstantStringClassReference_110ed12b8;
}



/* Entry: 108061064; end: 108061073; -[SCFeatureSettingsService setCommunityHeaderUserInteracted:] */

void FUN_108061064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed12b8,param_3);
  return;
}



/* Entry: 108061074; end: 10806107b; -[SCFeatureSettingsService COMMUNITIES_PROFILE_HEADER_HAS_INTERACTED_PUBLIC_ALERT_client_value:] */

undefined * FUN_108061074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10806107c; end: 108061083; -[SCFeatureSettingsService COMMUNITIES_PROFILE_HEADER_HAS_INTERACTED_PUBLIC_ALERT_server_value:] */

void FUN_10806107c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108061084; end: 108061093; -[SCFeatureSettingsService communityHeaderUserInteracted] */

void FUN_108061084(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed12b8,0);
  return;
}



/* Entry: 108061094; end: 108061107; -[UNISCCommunityOrgPbCommunityOrgService initWithUnifiedGrpcService:] */

undefined1 * FUN_108061094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc380;
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



/* Entry: 108061108; end: 1080611eb; -[UNISCCommunityOrgPbCommunityOrgService lookupCommunitiesWithRequest:callOptionsBuilder:handler:] */

void FUN_108061108(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d9020;
  _objc_opt_class(PTR_PTR_1126d9020);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ed12d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1080611ec; end: 1080612cf; -[UNISCCommunityOrgPbCommunityOrgService lookupOrganizationWithRequest:callOptionsBuilder:handler:] */

void FUN_1080611ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d9028;
  _objc_opt_class(PTR_PTR_1126d9028);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ed12f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1080612d0; end: 1080613b3; -[UNISCCommunityOrgPbCommunityOrgService joinWaitlistWithRequest:callOptionsBuilder:handler:] */

void FUN_1080612d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d9030;
  _objc_opt_class(PTR_PTR_1126d9030);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ed1318,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1080613b4; end: 108061497; -[UNISCCommunityOrgPbCommunityOrgService syncWaitlistWithRequest:callOptionsBuilder:handler:] */

void FUN_1080613b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d9038;
  _objc_opt_class(PTR_PTR_1126d9038);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ed1338,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108061498; end: 10806157b; -[UNISCCommunityOrgPbCommunityOrgService updateWaitlistToVerifiedWithRequest:callOptionsBuilder:handler:] */

void FUN_108061498(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d9040;
  _objc_opt_class(PTR_PTR_1126d9040);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ed1358,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10806157c; end: 10806165f; -[UNISCCommunityOrgPbCommunityOrgService leaveWaitlistWithRequest:callOptionsBuilder:handler:] */

void FUN_10806157c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d9048;
  _objc_opt_class(PTR_PTR_1126d9048);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ed1378,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108061660; end: 108061743; -[UNISCCommunityOrgPbCommunityOrgService sortCommunityMembersWithRequest:callOptionsBuilder:handler:] */

void FUN_108061660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d9050;
  _objc_opt_class(PTR_PTR_1126d9050);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ed1398,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108061744; end: 108061827; -[UNISCCommunityOrgPbCommunityOrgService getCommunityPublicMetadataWithRequest:callOptionsBuilder:handler:] */

void FUN_108061744(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d9058;
  _objc_opt_class(PTR_PTR_1126d9058);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ed13b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108061828; end: 10806190b; -[UNISCCommunityOrgPbCommunityOrgService reportCommunityStoryCommentWithRequest:callOptionsBuilder:handler:] */

void FUN_108061828(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d9060;
  _objc_opt_class(PTR_PTR_1126d9060);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ed13d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10806190c; end: 1080619ef; -[UNISCCommunityOrgPbCommunityOrgService muteCommunityStoryWithRequest:callOptionsBuilder:handler:] */

void FUN_10806190c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d9060;
  _objc_opt_class(PTR_PTR_1126d9060);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ed13f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1080619f0; end: 108061ad3; -[UNISCCommunityOrgPbCommunityOrgService unmuteCommunityStoryWithRequest:callOptionsBuilder:handler:] */

void FUN_1080619f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d9060;
  _objc_opt_class(PTR_PTR_1126d9060);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ed1418,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108061ad4; end: 108061bb7; -[UNISCCommunityOrgPbCommunityOrgService createCommunityGroupChatWithRequest:callOptionsBuilder:handler:] */

void FUN_108061ad4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d9068;
  _objc_opt_class(PTR_PTR_1126d9068);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ed1438,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108061bb8; end: 108061c9b; -[UNISCCommunityOrgPbCommunityOrgService ListCommunityGroupChatsWithRequest:callOptionsBuilder:handler:] */

void FUN_108061bb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126d9070;
  _objc_opt_class(PTR_PTR_1126d9070);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ed1458,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108061c9c; end: 108061e9f; -[UNISCCommunityOrgPbCommunityOrgService .cxx_destruct] */

void FUN_108061c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108061ea0; end: 108061f13; -[SCGrapheneProfileMemberRankingMetric2 init] */

undefined1 * FUN_108061ea0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc388;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108061f14; end: 108061f8b;  */

void FUN_108061f14(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a195d0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 108061f8c; end: 108061f93; -[SCCommunitiesAttributionHandlerServices communitiesAttributionProviding] */

undefined8 FUN_108061f8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108061f94; end: 108061f9f; -[SCCommunitiesAttributionHandlerServices .cxx_destruct] */

void FUN_108061f94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108061fa0; end: 108062053; -[SCCommunityDescriptor initWithType:organizationId:customStoryMetadata:] */

undefined1 *
FUN_108061fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fc398;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108062054; end: 108062077; -[SCCommunityDescriptor copyWithZone:] */

undefined8 FUN_108062054(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108062078; end: 1080620f7; -[SCCommunityDescriptor hash] */

long * FUN_108062078(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&lStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_108062188:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108062194;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)plVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)plVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)plVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108062194;
        }
        goto LAB_108062188;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108062194:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 1080620f8; end: 1080621af; -[SCCommunityDescriptor isEqual:] */

long FUN_1080620f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108062188:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108062194;
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
          goto LAB_108062194;
        }
        goto LAB_108062188;
      }
    }
    lVar3 = 0;
  }
LAB_108062194:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1080621b0; end: 1080621b7; -[SCCommunityDescriptor type] */

undefined8 FUN_1080621b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080621b8; end: 1080621bf; -[SCCommunityDescriptor organizationId] */

undefined8 FUN_1080621b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080621c0; end: 1080621c7; -[SCCommunityDescriptor customStoryMetadata] */

undefined8 FUN_1080621c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1080621c8; end: 1080621f7; -[SCCommunityDescriptor .cxx_destruct] */

void FUN_1080621c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1080621f8; end: 1080622db; +[SCPrivateProfilePbCommunityBadgingConfig descriptor] */

void FUN_1080621f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728cf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b94a00,
                        &PTR____CFConstantStringClassReference_110ed1738,
                        &PTR_s_snapchat_private_profile_cof_113251450,&PTR_DAT_113251468,2,0xc,0x1c)
    ;
    puRam0000000113728cf0 = puVar1;
  }
  return;
}



/* Entry: 1080622dc; end: 1080622e7;  */

bool FUN_1080622dc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1080622e8; end: 1080623cb; +[SCPrivateProfilePbCommunityReengagementConfig descriptor] */

void FUN_1080622e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728d00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b94aa0,
                        &PTR____CFConstantStringClassReference_110ed1778,
                        &PTR_s_snapchat_private_profile_cof_1132514a8,&PTR_DAT_1132514c0,3,0xc,0x1c)
    ;
    puRam0000000113728d00 = puVar1;
  }
  return;
}



/* Entry: 1080623cc; end: 1080623d7;  */

bool FUN_1080623cc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1080623d8; end: 108062453;  */

undefined * FUN_1080623d8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113728d10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed17b8,
                        &UNK_10deedb78,&UNK_10deedb9c,3,FUN_108062454,0);
    do {
      if (puRam0000000113728d10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113728d10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113728d10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113728d10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113728d10;
}



/* Entry: 108062454; end: 10806245f;  */

bool FUN_108062454(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108062460; end: 1080624db;  */

undefined * FUN_108062460(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113728d18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed17d8,
                        &UNK_10deedba8,&UNK_10deedbd0,4,FUN_1080624dc,0);
    do {
      if (puRam0000000113728d18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113728d18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113728d18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113728d18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113728d18;
}



/* Entry: 1080624dc; end: 1080624e7;  */

bool FUN_1080624dc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1080624e8; end: 108062563;  */

undefined * FUN_1080624e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113728d20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed17f8,
                        &UNK_10deedbe0,&UNK_10deedc08,3,FUN_108062564,0);
    do {
      if (puRam0000000113728d20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113728d20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113728d20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113728d20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113728d20;
}


