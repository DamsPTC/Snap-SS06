/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10582d264; end: 10582d30b; -[SCFriendingContactSyncGRPCTrigger .cxx_destruct] */

void FUN_10582d264(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 10582d30c; end: 10582d343; -[SCFriendingSuggestedFriendUpdateTimestampTrigger endFetchSuggestedFriends:error:] */

void FUN_10582d30c(undefined8 param_1,undefined8 param_2,int param_3)

{
  func_0x00010be5d540();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bee16d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSuggestedFriendsLocalTime_112595f58)
    ;
    return;
  }
  return;
}



/* Entry: 10582d344; end: 10582d433; -[SCFriendingSuggestedFriendUpdateTimestampTrigger clearSuggestedFriendsLastFetchedTimestamps] */

void FUN_10582d344(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b87e0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b79c0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10582d434; end: 10582d45f;  */

void FUN_10582d434(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10582d460; end: 10582d5af; -[SCFriendingSuggestedFriendUpdateTimestampTrigger _fetchSuggestedFriendUpdatePreferenceKeyChange] */

void FUN_10582d460(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar1 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    func_0x00010bedc260(param_1);
    func_0x00010bed0380(param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c1067a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar6);
    _objc_release(puVar4);
    _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 10582d5b0; end: 10582d64b; -[SCFriendingSuggestedFriendUpdateTimestampTrigger _fetchSuggestedFriendsWithTriggerSourceType:triggerType:] */

void FUN_10582d5b0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_4 < 4) {
    uVar3 = *(undefined8 *)(&UNK_10ddbf2a0 + param_4 * 8);
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd780;
  func_0x00010bfab700(PTR_PTR_1126bd780,param_2,0,param_4 == 3,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2940(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10582d64c; end: 10582d6bb; -[SCFriendingSuggestedFriendUpdateTimestampTrigger _markIsFetchingSuggestedFriendsFinish] */

void FUN_10582d64c(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x68) == '\x01') {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010c27bee0(uVar1,param_3,(long)((param_1 - (double)*(long *)(param_2 + 0x70)) * 1000.0)
                       );
    _objc_release(uVar1);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



/* Entry: 10582d6bc; end: 10582d7d7; -[SCFriendingSuggestedFriendUpdateTimestampTrigger _updateSuggestedFriendsLocalTimestamps] */

void FUN_10582d6bc(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined8 *)(param_2 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b87e0(uVar3,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010bf5e5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(long *)(param_2 + 0x48) = (long)param_1;
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined8 *)(param_2 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b79c0(uVar3,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10582d7d8; end: 10582d853; -[SCFriendingSuggestedFriendUpdateTimestampTrigger _updateSuggestedFriendsFetchStartedDate] */

void FUN_10582d7d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf5e5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8ae0(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10582d854; end: 10582d8fb; -[SCFriendingSuggestedFriendUpdateTimestampTrigger .cxx_destruct] */

void FUN_10582d854(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 10582d8fc; end: 10582d9cf; -[SCFriendingConfigsDiscrepancyLoggerImplementation initWithGrapheneRegistry:userPreferences:] */

undefined1 *
FUN_10582d8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea878;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfb94e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10582d9d0; end: 10582d9db; -[SCFriendingConfigsDiscrepancyLoggerImplementation warmup] */

void FUN_10582d9d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSuggestedFriends__112573f38,
             &PTR____CFConstantStringClassReference_110e05c78);
  return;
}



/* Entry: 10582d9dc; end: 10582d9e7; -[SCFriendingConfigsDiscrepancyLoggerImplementation observeKeyPath] */

void FUN_10582d9dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSuggestedFriends__112573f38,
             &PTR____CFConstantStringClassReference_110e05c98);
  return;
}



/* Entry: 10582d9e8; end: 10582d9f3; -[SCFriendingConfigsDiscrepancyLoggerImplementation triggerFetchSuggestions] */

void FUN_10582d9e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSuggestedFriends__112573f38,
             &PTR____CFConstantStringClassReference_110dd15b8);
  return;
}



/* Entry: 10582d9f4; end: 10582d9ff; -[SCFriendingConfigsDiscrepancyLoggerImplementation triggerFetchSuggestionsSuccess] */

void FUN_10582d9f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSuggestedFriends__112573f38,
             &PTR____CFConstantStringClassReference_110e03758);
  return;
}



/* Entry: 10582da00; end: 10582da0b; -[SCFriendingConfigsDiscrepancyLoggerImplementation triggerFetchSuggestionsTimeout] */

void FUN_10582da00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSuggestedFriends__112573f38,
             &PTR____CFConstantStringClassReference_110e05cb8);
  return;
}



/* Entry: 10582da0c; end: 10582da17; -[SCFriendingConfigsDiscrepancyLoggerImplementation triggerThrottledFetchSuggestions] */

void FUN_10582da0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSuggestedFriends__112573f38,
             &PTR____CFConstantStringClassReference_110e05cd8);
  return;
}



/* Entry: 10582da18; end: 10582da9f; -[SCFriendingConfigsDiscrepancyLoggerImplementation triggerFetchSuggestionsEndWithDuration:] */

void FUN_10582da18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010be59660(param_1,param_2,&PTR____CFConstantStringClassReference_110e05cf8);
  puVar1 = PTR_PTR_1126b17f0;
  func_0x00010bfec0e0(PTR_PTR_1126b17f0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010befbfe0(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10582daa0; end: 10582daab; -[SCFriendingConfigsDiscrepancyLoggerImplementation triggerFetchSuggestionsDueToExpiration] */

void FUN_10582daa0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSuggestedFriends__112573f38,
             &PTR____CFConstantStringClassReference_110e05d38);
  return;
}



/* Entry: 10582daac; end: 10582dab7; -[SCFriendingConfigsDiscrepancyLoggerImplementation triggerFetchSuggestionsDueToUpdate] */

void FUN_10582daac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSuggestedFriends__112573f38,
             &PTR____CFConstantStringClassReference_110e05d58);
  return;
}



/* Entry: 10582dab8; end: 10582dac3; -[SCFriendingConfigsDiscrepancyLoggerImplementation triggerFetchSuggestionsDueLoginOrSignup] */

void FUN_10582dab8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSuggestedFriends__112573f38,
             &PTR____CFConstantStringClassReference_110e05d78);
  return;
}



/* Entry: 10582dac4; end: 10582dbb3; -[SCFriendingConfigsDiscrepancyLoggerImplementation logContactSyncGap] */

void FUN_10582dac4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e05c58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    func_0x00010c26f380(puVar3);
    puVar5 = PTR_PTR_1126b17f0;
    func_0x00010bf4a600(PTR_PTR_1126b17f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180(*(undefined8 *)(param_1 + 8));
    _objc_release(puVar5);
  }
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10582dbb4; end: 10582dc3b; -[SCFriendingConfigsDiscrepancyLoggerImplementation _logSuggestedFriends:] */

void FUN_10582dbb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b17f0;
  _objc_retain(param_3);
  func_0x00010bfec0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10582dc3c; end: 10582dcbf; -[SCFriendingConfigsDiscrepancyLoggerImplementation .cxx_destruct] */

void FUN_10582dc3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10582dcc0; end: 10582dd47; -[SCFriendingConfigsUpdateEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10582dcc0(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272a758);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c280();
  _objc_release(uVar1);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11272a760));
  puStack_38 = PTR_PTR_1126ea880;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10582dd48; end: 10582dd73;  */

void FUN_10582dd48(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10582dd74; end: 10582ddef; -[SCFriendingConfigsUpdateEntryPoint _syncContactIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10582dd74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272a758);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27cfc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10582ddf0; end: 10582de13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10582ddf0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272a764);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10582de14; end: 10582dedf; -[SCFriendingConfigsUpdateEntryPoint _discrepancyLoggerImplementation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10582de14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126beee0;
  _objc_alloc(PTR_PTR_1126beee0);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11272a778;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010bfcdfa0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10582ddf0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018860(puVar1,param_2,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10582dee0; end: 10582e027; -[SCFriendingConfigsUpdateEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10582dee0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a7ac);
  _objc_destroyWeak(param_1 + _DAT_11272a784);
  _objc_destroyWeak(param_1 + _DAT_11272a780);
  _objc_destroyWeak(param_1 + _DAT_11272a7a8);
  _objc_destroyWeak(param_1 + _DAT_11272a7a4);
  _objc_destroyWeak(param_1 + _DAT_11272a7a0);
  _objc_destroyWeak(param_1 + _DAT_11272a79c);
  _objc_destroyWeak(param_1 + _DAT_11272a774);
  _objc_destroyWeak(param_1 + _DAT_11272a798);
  _objc_destroyWeak(param_1 + _DAT_11272a770);
  _objc_destroyWeak(param_1 + _DAT_11272a794);
  _objc_destroyWeak(param_1 + _DAT_11272a764);
  _objc_destroyWeak(param_1 + _DAT_11272a778);
  _objc_destroyWeak(param_1 + _DAT_11272a768);
  _objc_destroyWeak(param_1 + _DAT_11272a790);
  _objc_destroyWeak(param_1 + _DAT_11272a78c);
  _objc_destroyWeak(param_1 + _DAT_11272a788);
  _objc_destroyWeak(param_1 + _DAT_11272a75c);
  _objc_storeStrong(param_1 + _DAT_11272a760,0);
  _objc_storeStrong(param_1 + _DAT_11272a77c,0);
  _objc_storeStrong(param_1 + _DAT_11272a76c,0);
  _objc_storeStrong(param_1 + _DAT_11272a758,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a754,0);
  return;
}



/* Entry: 10582e028; end: 10582e087; -[SCFriendingConfigsUpdateTrigger tryToSyncContact] */

void FUN_10582e028(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c265d00(*(undefined8 *)(param_1 + 0x30));
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x000108c078e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c265ea0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10582e088; end: 10582e08f; -[SCFriendingConfigsUpdateTrigger clearSuggestedFriendsLastFetchedTimestamps] */

void FUN_10582e088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3c290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_clearSuggestedFriendsLastFetched_1125aca48);
  return;
}



/* Entry: 10582e090; end: 10582e0eb; -[SCFriendingConfigsUpdateTrigger _didContactDataRequestSuccess:] */

void FUN_10582e090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10582e0ec;
  puStack_20 = &UNK_110841f20;
  uStack_18 = param_1;
  func_0x00010c0bdca0(param_3,param_2,&puStack_38,0);
  return;
}



/* Entry: 10582e0ec; end: 10582e123;  */

void FUN_10582e0ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10582e124; end: 10582e12b; -[SCFriendingConfigsUpdateTrigger _endFetchSuggestedFriends:error:] */

void FUN_10582e124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endFetchSuggestedFriends_error__1125c2bf0);
  return;
}



/* Entry: 10582e12c; end: 10582e12f; -[SCFriendingConfigsUpdateTrigger didStartSnapchattersUpdateDataRequest:] */

void FUN_10582e12c(void)

{
  return;
}



/* Entry: 10582e130; end: 10582e133; -[SCFriendingConfigsUpdateTrigger didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_10582e130(void)

{
  return;
}



/* Entry: 10582e134; end: 10582e1c7; -[SCFriendingConfigsUpdateTrigger didEndSnapchattersContactDataRequest:withResult:] */

void FUN_10582e134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10582e1c8;
  puStack_48 = &UNK_1108a77e8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0c0860(param_4,param_2,&puStack_60,0,0);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10582e1c8; end: 10582e1d3;  */

void FUN_10582e1c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfd070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didContactDataRequestSuccess__11255cdb8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10582e1d4; end: 10582e283; -[SCFriendingConfigsUpdateTrigger didEndSnapchattersSuggestDataRequest:withSuccess:error:] */

void FUN_10582e1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_5);
  func_0x00010c0bdc80(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10582e284; end: 10582e357;  */

void FUN_10582e284(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = *(undefined1 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10582e358; end: 10582e38f;  */

void FUN_10582e358(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be099c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10582e390; end: 10582e413; -[SCFriendingConfigsUpdateTrigger .cxx_destruct] */

void FUN_10582e390(long param_1)

{
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



/* Entry: 10582e414; end: 10582e4b3;  */

void FUN_10582e414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126beef8;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010befcb00(param_2);
  func_0x00010c165720(puVar1);
  func_0x00010c11bf20(param_2);
  func_0x00010c1e5e20(puVar1);
  func_0x00010c0d03a0(param_2);
  func_0x00010c1c8e40(puVar1);
  func_0x00010c262400(param_2);
  _objc_release(param_2);
  func_0x00010c20fb20(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10582e4b4; end: 10582e4fb;  */

void FUN_10582e4b4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14ce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10582e4fc; end: 10582e78f; -[SCFriendingFetchSuggestionsLogger _fetchSuggestionLoggingDataReceived:] */

void FUN_10582e4fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf95780(param_3);
    func_0x00010c250f20(param_3);
    puVar3 = PTR_PTR_1126bef08;
    _objc_opt_new(PTR_PTR_1126bef08);
    func_0x00010bfa6020(param_3);
    func_0x00010c19b5c0(puVar3);
    func_0x00010bfa75c0(param_3);
    func_0x00010c1b7c20(puVar3);
    func_0x00010c0d7ac0(param_3);
    func_0x00010c0d8140(param_3);
    func_0x00010c1cc300(puVar3);
    func_0x00010c1d7420(puVar3);
    func_0x00010c11bf00(param_3);
    func_0x00010c1e5e00(puVar3);
    lVar1 = param_3;
    func_0x00010c262420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x000100504554();
    func_0x00010c20fc20(puVar3);
    _objc_release(lVar4);
    _objc_release(lVar1);
    func_0x00010c27c360(param_3);
    func_0x00010c21a2a0(puVar3);
    func_0x00010c27c260(param_3);
    func_0x00010c21a380(puVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    func_0x00010c27c260(param_3);
    func_0x00010c27c360(param_3);
    _objc_release(param_3);
    func_0x00010be53660(param_1);
  }
  else {
    puVar3 = PTR_PTR_1126bef00;
    _objc_opt_new(PTR_PTR_1126bef00);
    func_0x00010c197380();
    func_0x00010bf95780(param_3);
    func_0x00010c250f20(param_3);
    func_0x00010c1d7420(puVar3);
    func_0x00010c27c360(param_3);
    func_0x00010c21a2a0(puVar3);
    func_0x00010c27c260(param_3);
    func_0x00010c21a380(puVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    func_0x00010c27c260(param_3);
    func_0x00010c27c360(param_3);
    _objc_release(param_3);
    func_0x00010be53620(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10582e790; end: 10582e81b;  */

void FUN_10582e790(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0bdc80(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10582e81c; end: 10582e893;  */

void FUN_10582e81c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c252440(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf987e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be14d80(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10582e894; end: 10582e90f; -[SCFriendingFetchSuggestionsLogger _fetchSuggestionsWithIsFromNotification:triggerSourceType:triggerType:networkstate:error:] */

void FUN_10582e894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  _objc_retain(param_7);
  if (param_6 == 0) {
    func_0x00010be536a0(param_1,param_2,param_3,param_4,param_5);
  }
  else if (param_7 == 0) {
    func_0x00010be53680();
  }
  else {
    func_0x00010be53640();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10582e910; end: 10582ea67; -[SCFriendingFetchSuggestionsLogger _logFetchSuggestionsWithIsFromNotification:triggerSourceType:triggerType:] */

void FUN_10582e910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b17f0;
  func_0x00010bfaab00(PTR_PTR_1126b17f0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77800(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77820(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd15b8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfb94e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10582ea68; end: 10582ebbf; -[SCFriendingFetchSuggestionsLogger _logFetchSuggestionsSuccessWithIsFromNotification:triggerSourceType:triggerType:] */

void FUN_10582ea68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b17f0;
  func_0x00010bfaab80(PTR_PTR_1126b17f0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77800(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77820(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd15b8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfb94e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10582ebc0; end: 10582eda3; -[SCFriendingFetchSuggestionsLogger _logFetchSuggestionsFailWithIsFromNotification:triggerSourceType:triggerType:error:] */

void FUN_10582ebc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b17f0;
  _objc_retain(param_6);
  func_0x00010bfaab40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77800(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77820(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd15b8,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf3ec40();
  _objc_release(param_6);
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110db9558,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfb94e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10582eda4; end: 10582ef03; -[SCFriendingFetchSuggestionsLogger _logFetchSuggestionsOKWithTriggerSourceType:triggerType:latency:] */

void FUN_10582eda4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b17f0;
  func_0x00010bfaab60(PTR_PTR_1126b17f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77800(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77820(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd15b8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb94e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb94e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10582ef04; end: 10582f017; -[SCFriendingFetchSuggestionsLogger _logFetchSuggestionsErrorWithTriggerSourceType:triggerType:] */

void FUN_10582ef04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b17f0;
  func_0x00010bfaab20(PTR_PTR_1126b17f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77800(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77820(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd15b8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb94e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10582f018; end: 10582f0db; -[SCFriendingFetchSuggestionsLogger .cxx_destruct] */

void FUN_10582f018(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10582f0dc; end: 10582f0e7;  */

bool FUN_10582f0dc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10582f0e8; end: 10582f17f; +[SCFetchSuggestionsConfig descriptor] */

void FUN_10582f0e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a707a0,
                        &PTR____CFConstantStringClassReference_110e05e58,&PTR_DAT_113104328,
                        &PTR_DAT_113104340,4,0x20,0x1c);
    puRam00000001136c0b00 = puVar1;
  }
  return;
}



/* Entry: 10582f180; end: 10582f21f; -[SCFetchFriendsResponseTriggerEntryPoint end] */

void FUN_10582f180(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x0001009751a8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c244aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c580();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126ea898;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10582f220; end: 10582f2a3; -[SCFetchFriendsResponseTriggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10582f220(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a800);
  _objc_destroyWeak(param_1 + _DAT_11272a7fc);
  _objc_destroyWeak(param_1 + _DAT_11272a7f8);
  _objc_destroyWeak(param_1 + _DAT_11272a7f4);
  _objc_destroyWeak(param_1 + _DAT_11272a7f0);
  _objc_destroyWeak(param_1 + _DAT_11272a7ec);
  _objc_destroyWeak(param_1 + _DAT_11272a7e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a7e4,0);
  return;
}



/* Entry: 10582f2a4; end: 10582f3f7; -[SCLensActivityCenterRPCServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10582f2a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1 + _DAT_11272a804;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11272a808;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10582f3f8;
  puStack_68 = &UNK_110876b90;
  puVar3 = PTR_PTR_1126ae720;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = puVar4;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10582f50c;
  puStack_90 = &UNK_1108b6b30;
  puVar4 = PTR_PTR_1126ae720;
  puStack_88 = puVar3;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bef20;
  _objc_alloc(PTR_PTR_1126bef20);
  func_0x00010c040a20();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10582f3f8; end: 10582f50b;  */

void FUN_10582f3f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb22a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c196320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126bef10;
  _objc_alloc(PTR_PTR_1126bef10);
  func_0x00010c058f80();
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10582f50c; end: 10582f53b;  */

void FUN_10582f50c(void)

{
  _objc_alloc(PTR_PTR_1126bef18);
  func_0x00010c03cb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10582f53c; end: 10582f57f; -[SCLensActivityCenterRPCServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10582f53c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a804);
  _objc_destroyWeak(param_1 + _DAT_11272a808);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a80c);
  return;
}



/* Entry: 10582f580; end: 10582f60f; -[SCLensActivityCenterRpcHandler initWithRPCService:] */

undefined1 * FUN_10582f580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea8a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10582f610; end: 10582f637; -[SCLensActivityCenterRpcHandler badgeStatusObservable] */

void FUN_10582f610(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10582f638; end: 10582f73b; -[SCLensActivityCenterRpcHandler clearBadgeStatusWithCompletion:] */

void FUN_10582f638(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bef28;
  _objc_alloc(PTR_PTR_1126bef28);
  func_0x00010c045fe0();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  puVar2 = PTR_PTR_1126bef30;
  func_0x00010c0cb140(PTR_PTR_1126bef30);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10582f73c;
  puStack_40 = &UNK_1108b6b60;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf3aa60(uVar3,param_2,puVar2,0,&puStack_58);
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10582f73c; end: 10582f753;  */

void FUN_10582f73c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010582f74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 10582f754; end: 10582f843; -[SCLensActivityCenterRpcHandler fetchBadgeStatusWithLocale:] */

void FUN_10582f754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126bef38;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf420();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10582f844;
  puStack_40 = &UNK_1108b6b90;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  func_0x00010bfc2d40(uVar2,param_2,puVar1,0,&puStack_58);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 10582f844; end: 10582f8f3;  */

void FUN_10582f844(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bef28;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c22e200(param_2);
  uVar2 = param_2;
  func_0x00010c260dc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c230c40(param_2);
  _objc_release(param_2);
  func_0x00010c045fe0(puVar1);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10582f8f4; end: 10582f923; -[SCLensActivityCenterRpcHandler .cxx_destruct] */

void FUN_10582f8f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10582f924; end: 10582f997; -[UNISCLensActivityCenterActivityCenterBadgeStatus initWithUnifiedGrpcService:] */

undefined1 * FUN_10582f924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea8a8;
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



/* Entry: 10582f998; end: 10582fa7b; -[UNISCLensActivityCenterActivityCenterBadgeStatus getBadgeStatusWithRequest:callOptionsBuilder:handler:] */

void FUN_10582f998(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bef40;
  _objc_opt_class(PTR_PTR_1126bef40);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e05ed8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10582fa7c; end: 10582fb5f; -[UNISCLensActivityCenterActivityCenterBadgeStatus clearBadgeStatusWithRequest:callOptionsBuilder:handler:] */

void FUN_10582fa7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bef48;
  _objc_opt_class(PTR_PTR_1126bef48);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e05ef8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10582fb60; end: 10582fb6b; -[UNISCLensActivityCenterActivityCenterBadgeStatus .cxx_destruct] */

void FUN_10582fb60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10582fb6c; end: 10582fbd3; +[SCLensActivityCenterGetBadgeStatusRequest descriptor] */

void FUN_10582fb6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a70980,
                        &PTR____CFConstantStringClassReference_110e05f18,&PTR_DAT_113104420,
                        &PTR_DAT_113104438,1,0x10,0x1c);
    puRam00000001136c0b08 = puVar1;
  }
  return;
}



/* Entry: 10582fbd4; end: 10582fc3b; +[SCLensActivityCenterGetBadgeStatusResponse descriptor] */

void FUN_10582fbd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a709d0,
                        &PTR____CFConstantStringClassReference_110e05f38,&PTR_DAT_113104420,
                        &PTR_DAT_113104458,3,0x10,0x1c);
    puRam00000001136c0b10 = puVar1;
  }
  return;
}



/* Entry: 10582fc3c; end: 10582fca3; +[SCLensActivityCenterClearBadgeStatusResponse descriptor] */

void FUN_10582fc3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a70a20,
                        &PTR____CFConstantStringClassReference_110e05f58,&PTR_DAT_113104420,0,0,4,
                        0x1c);
    puRam00000001136c0b18 = puVar1;
  }
  return;
}



/* Entry: 10582fca4; end: 10582fd0b; +[SCLensActivityCenterClearBadgeStatusRequest descriptor] */

void FUN_10582fca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a70a70,
                        &PTR____CFConstantStringClassReference_110e05f78,&PTR_DAT_113104420,0,0,4,
                        0x1c);
    puRam00000001136c0b20 = puVar1;
  }
  return;
}



/* Entry: 10582fd0c; end: 10582fd13;  */

undefined8 FUN_10582fd0c(void)

{
  return 0;
}



/* Entry: 10582fd14; end: 10582fd8f;  */

undefined * FUN_10582fd14(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0b28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e05f98,
                        &UNK_10ddbf2f0,&UNK_10ddbf334,5,FUN_10582fd90,0);
    do {
      if (puRam00000001136c0b28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0b28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0b28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0b28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0b28;
}



/* Entry: 10582fd90; end: 10582fd9b;  */

bool FUN_10582fd90(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10582fd9c; end: 10582fe17;  */

undefined * FUN_10582fd9c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0b30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e05fb8,
                        &UNK_10ddbf348,&UNK_10ddbf37c,5,FUN_10582fe18,0);
    do {
      if (puRam00000001136c0b30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0b30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0b30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0b30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0b30;
}



/* Entry: 10582fe18; end: 10582fe23;  */

bool FUN_10582fe18(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10582fe24; end: 10582fe9f; +[LensCollectionMetadata descriptor] */

undefined * FUN_10582fe24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a70b38,
                        &PTR____CFConstantStringClassReference_110e05fd8,&PTR_DAT_1131044b8,
                        &PTR_s_id_p_113104510,0x17,0xb0,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c0b38 = puVar1;
  }
  return puRam00000001136c0b38;
}



/* Entry: 10582fea0; end: 10582ff23; +[LensCollectionMetadata_Localizations descriptor] */

undefined * FUN_10582fea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a70b60,
                        &PTR____CFConstantStringClassReference_110e05ff8,&PTR_DAT_1131044b8,
                        &PTR_DAT_1131044d0,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c0b40 = puVar1;
  }
  return puRam00000001136c0b40;
}



/* Entry: 10582ff24; end: 10582ffb3;  */

undefined * FUN_10582ff24(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0b48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e06018,
                        &UNK_10ddbf3a8,&UNK_10ddbf3c0,3,FUN_10582ffb4,0,&UNK_10ddbf3cc);
    do {
      if (puRam00000001136c0b48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0b48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0b48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0b48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0b48;
}



/* Entry: 10582ffb4; end: 10582ffbf;  */

bool FUN_10582ffb4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10582ffc0; end: 10583003b;  */

undefined * FUN_10582ffc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0b50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e06038,
                        &UNK_10ddbf3d7,&UNK_10ddbf3f8,3,FUN_10583003c,0);
    do {
      if (puRam00000001136c0b50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0b50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0b50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0b50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0b50;
}



/* Entry: 10583003c; end: 105830047;  */

bool FUN_10583003c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105830048; end: 1058300c3;  */

undefined * FUN_105830048(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0b58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e06058,
                        &UNK_10ddbf404,&UNK_10ddbf42c,2,FUN_1058300c4,0);
    do {
      if (puRam00000001136c0b58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0b58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0b58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0b58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0b58;
}



/* Entry: 1058300c4; end: 1058300cf;  */

bool FUN_1058300c4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1058300d0; end: 105830137; +[SCLensARBarCofConfig descriptor] */

void FUN_1058300d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a70c00,
                        &PTR____CFConstantStringClassReference_110e06078,&PTR_DAT_1131047f0,
                        &PTR_s_version_113104888,9,0x30,0x1c);
    puRam00000001136c0b60 = puVar1;
  }
  return;
}



/* Entry: 105830138; end: 1058301b3; +[SCLensARBarCofConfig_Unlock descriptor] */

undefined * FUN_105830138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a70c50,
                        &PTR____CFConstantStringClassReference_110e06098,&PTR_DAT_1131047f0,
                        &PTR_DAT_113104808,2,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001136c0b68 = puVar1;
  }
  return puRam00000001136c0b68;
}



/* Entry: 1058301b4; end: 10583022f; +[SCLensARBarCofConfig_Prefetch descriptor] */

undefined * FUN_1058301b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a70ca0,
                        &PTR____CFConstantStringClassReference_110e060b8,&PTR_DAT_1131047f0,
                        &PTR_DAT_113104848,2,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001136c0b70 = puVar1;
  }
  return puRam00000001136c0b70;
}



/* Entry: 105830230; end: 105830297; +[SCLELensExplorerCategoryThemeRules descriptor] */

void FUN_105830230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a70d40,
                        &PTR____CFConstantStringClassReference_110e060d8,&PTR_DAT_1131049a8,
                        &PTR_DAT_1131049c0,1,0x10,0x1c);
    puRam00000001136c0b78 = puVar1;
  }
  return;
}



/* Entry: 105830298; end: 105830313; +[SCLELensExplorerCategoryThemeRules_Rule descriptor] */

undefined * FUN_105830298(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0b80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a70d90,
                        &PTR____CFConstantStringClassReference_110e060f8,&PTR_DAT_1131049a8,
                        &PTR_DAT_1131049e0,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c0b80 = puVar1;
  }
  return puRam00000001136c0b80;
}



/* Entry: 105830314; end: 105830387; -[SCGrapheneLensMediaShufflerMetric2 init] */

undefined1 * FUN_105830314(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea8b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105830388; end: 1058305b7;  */

char * FUN_105830388(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_210;
  undefined *puStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar13 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar7 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108b6bc0,pcVar7,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar11 = 0;
    puVar13 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1058305b8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar7;
  uVar9 = uVar10;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  puVar13 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar6 = "\x01";
    unaff_x23 = acStack_138;
    pcVar8 = acStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108b6c10,pcVar8,uVar10);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar11 = 0;
    puVar13 = auStack_118;
    uVar9 = uVar10;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_1058307e8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar13;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar7;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_1a0,pcVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108b6c60,&uStack_1d8,uVar9);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar11 = 0;
    do {
      if ((&cStack_189)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  __Unwind_Resume();
  ppcVar4 = &pcStack_210;
  pcStack_1e8 = FUN_105830a18;
  puStack_208 = PTR_PTR_1126ea8b8;
  pcStack_210 = pcVar1;
  pcStack_200 = pcVar8;
  pcStack_1f8 = pcVar6;
  pppuStack_1f0 = &ppuStack_150;
  _objc_msgSendSuper2(&pcStack_210,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    puVar5 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar10 = *(undefined8 *)((long)ppcVar4 + 8);
    *(undefined **)((long)ppcVar4 + 8) = puVar5;
    _objc_release(uVar10);
    puVar5 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar10 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(undefined **)((long)ppcVar4 + 0x10) = puVar5;
    _objc_release(uVar10);
  }
  return (char *)ppcVar4;
}



/* Entry: 1058305b8; end: 1058307e7;  */

char * FUN_1058305b8(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_170;
  undefined *puStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  uVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar10 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x01";
    unaff_x23 = acStack_98;
    pcVar6 = acStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108b6c10,pcVar6,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar8 = 0;
    puVar10 = auStack_78;
    uVar7 = param_4;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1058307e8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar10;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_100,pcVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108b6c60,&uStack_138,uVar7);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar8 = 0;
    do {
      if ((&cStack_e9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  __Unwind_Resume();
  ppcVar4 = &pcStack_170;
  pcStack_148 = FUN_105830a18;
  puStack_168 = PTR_PTR_1126ea8b8;
  pcStack_170 = pcVar2;
  pcStack_160 = pcVar6;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_msgSendSuper2(&pcStack_170,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    puVar5 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)ppcVar4 + 8);
    *(undefined **)((long)ppcVar4 + 8) = puVar5;
    _objc_release(uVar7);
    puVar5 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(undefined **)((long)ppcVar4 + 0x10) = puVar5;
    _objc_release(uVar7);
  }
  return (char *)ppcVar4;
}



/* Entry: 1058307e8; end: 105830a17;  */

char * FUN_1058307e8(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char **ppcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  char *pcStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108b6c60,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar5 = 0;
    do {
      if ((&cStack_49)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar2 = &pcStack_d0;
  pcStack_a8 = FUN_105830a18;
  puStack_c8 = PTR_PTR_1126ea8b8;
  pcStack_d0 = pcVar1;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar2 != (char **)0x0) {
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)ppcVar2 + 8);
    *(undefined **)((long)ppcVar2 + 8) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)ppcVar2 + 0x10);
    *(undefined **)((long)ppcVar2 + 0x10) = puVar3;
    _objc_release(uVar4);
  }
  return (char *)ppcVar2;
}


