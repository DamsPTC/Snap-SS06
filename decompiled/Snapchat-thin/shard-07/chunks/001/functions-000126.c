/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10526eca0; end: 10526ed17; -[SCActivationThreadSafeInMemoryCache objectForKeyedSubscript:] */

void FUN_10526eca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10526ed18; end: 10526ed93; -[SCActivationThreadSafeInMemoryCache setObject:forKey:] */

void FUN_10526ed18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10526ed94; end: 10526ee0f; -[SCActivationThreadSafeInMemoryCache setObject:forKeyedSubscript:] */

void FUN_10526ed94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10526ee10; end: 10526ee6b; -[SCActivationThreadSafeInMemoryCache removeObjectForKey:] */

void FUN_10526ee10(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10526ee6c; end: 10526ee77; -[SCActivationThreadSafeInMemoryCache .cxx_destruct] */

void FUN_10526ee6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10526ee78; end: 10526eedf; -[SCActivationThreadSafeSet init] */

undefined1 * FUN_10526ee78(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e73e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10526eee0; end: 10526ef3b; -[SCActivationThreadSafeSet addObject:] */

void FUN_10526eee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10526ef3c; end: 10526ef97; -[SCActivationThreadSafeSet removeObject:] */

void FUN_10526ef3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10526ef98; end: 10526f007; -[SCActivationThreadSafeSet containsObject:] */

undefined8 FUN_10526ef98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10526f008; end: 10526f05f; -[SCActivationThreadSafeSet allObjects] */

void FUN_10526f008(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf00560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10526f060; end: 10526f0d3; -[SCActivationThreadSafeSet removeAllObjects] */

void FUN_10526f060(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf00560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10526f0d4; end: 10526f0df; -[SCActivationThreadSafeSet .cxx_destruct] */

void FUN_10526f0d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10526f0e0; end: 10526f153; -[SCSettingsEventLoggerImpl initWithNoDepBlizzard:] */

undefined1 * FUN_10526f0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e73f0;
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



/* Entry: 10526f154; end: 10526f207; -[SCSettingsEventLoggerImpl logUserProfileUpdateEventWithField:oldValue:newValue:] */

void FUN_10526f154(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1768;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1fe360();
  func_0x00010c1fe3a0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1fe380(puVar1,param_2,param_5);
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2820();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10526f208; end: 10526f26f; -[SCSettingsEventLoggerImpl logUserProfileUpdateBoolEventWithField:oldValue:newValue:] */

void FUN_10526f208(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2d38;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db1158;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db2d38;
  if (param_5 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db1158;
  }
  _objc_retain(ppuVar1);
  func_0x00010c0b2be0(param_1,param_2,param_3,ppuVar1,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 10526f270; end: 10526f2d7; -[SCSettingsEventLoggerImpl logTravelModeSettingUpdateWithSource:] */

void FUN_10526f270(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6c90;
  _objc_opt_new(PTR_PTR_1126b6c90);
  func_0x00010c206c40();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2820();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10526f2d8; end: 10526f2e3; -[SCSettingsEventLoggerImpl .cxx_destruct] */

void FUN_10526f2d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10526f2e4; end: 10526f357; -[SCDefaultRegistrationFlowUUIDService initWithApplicationPreferences:] */

undefined1 * FUN_10526f2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e73f8;
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



/* Entry: 10526f358; end: 10526f43b; -[SCDefaultRegistrationFlowUUIDService getUUID] */

void FUN_10526f358(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c127b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e9820();
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c127b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10526f43c; end: 10526f473; -[SCDefaultRegistrationFlowUUIDService clear] */

void FUN_10526f43c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10526f474; end: 10526f47f; -[SCDefaultRegistrationFlowUUIDService .cxx_destruct] */

void FUN_10526f474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10526f480; end: 10526f4f3; -[SCDefaultRegistrationLastPageService initWithApplicationPreferences:] */

undefined1 * FUN_10526f480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7400;
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



/* Entry: 10526f4f4; end: 10526f553; -[SCDefaultRegistrationLastPageService lastPage] */

long FUN_10526f4f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089c20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067ec0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (long)(int)uVar3;
}



/* Entry: 10526f554; end: 10526f5af; -[SCDefaultRegistrationLastPageService setLastPage:] */

void FUN_10526f554(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8680();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10526f5b0; end: 10526f60f; -[SCDefaultRegistrationLastPageService clear] */

void FUN_10526f5b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8680();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10526f610; end: 10526f61b; -[SCDefaultRegistrationLastPageService .cxx_destruct] */

void FUN_10526f610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10526f61c; end: 10526f623; -[SCDefaultRegistrationSourceService registrationSource] */

undefined8 FUN_10526f61c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10526f624; end: 10526f62b; -[SCDefaultRegistrationSourceService setRegistrationSource:] */

void FUN_10526f624(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10526f62c; end: 10526f68f; -[SCPreferences lastRegistrationPage] */

void FUN_10526f62c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dce9f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
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



/* Entry: 10526f690; end: 10526f69b; -[SCPreferences setLastRegistrationPage:] */

void FUN_10526f690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110dce9f8);
  return;
}



/* Entry: 10526f69c; end: 10526f6ff; -[SCPreferences registrationFlowUUID] */

void FUN_10526f69c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dcea18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
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



/* Entry: 10526f700; end: 10526f70b; -[SCPreferences setRegistrationFlowUUID:] */

void FUN_10526f700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110dcea18);
  return;
}



/* Entry: 10526f70c; end: 10526f717; -[SCRegistrationPreferencesDeviceInfoProvider .cxx_destruct] */

void FUN_10526f70c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10526f718; end: 10526f71b; -[SCCameraViewfinderAVDisplayLayerRenderer updateTextureSizeIfNecessary:] */

void FUN_10526f718(void)

{
  return;
}



/* Entry: 10526f71c; end: 10526f71f; -[SCCameraViewfinderAVDisplayLayerRenderer setSampleBufferOrientation:] */

void FUN_10526f71c(void)

{
  return;
}



/* Entry: 10526f720; end: 10526f723; -[SCCameraViewfinderAVDisplayLayerRenderer setBlurEnabled:] */

void FUN_10526f720(void)

{
  return;
}



/* Entry: 10526f724; end: 10526f727; -[SCCameraViewfinderAVDisplayLayerRenderer setupRenderModule] */

void FUN_10526f724(void)

{
  return;
}



/* Entry: 10526f728; end: 10526f81f; -[SCCameraViewfinderAVDisplayLayerRenderer fetchDisplayLayer:] */

void FUN_10526f728(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = auStack_38;
    _objc_initWeak(puVar1,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(puVar1);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10526f820; end: 10526f8b7;  */

void FUN_10526f820(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      lVar3 = lVar1;
      func_0x00010bded340(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar2);
      lVar3 = lVar2;
    }
    _objc_release(lVar2);
    _objc_storeWeak(lVar1 + 8,lVar3);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar3);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10526f8b8; end: 10526f8bb; -[SCCameraViewfinderAVDisplayLayerRenderer resumeRendering] */

void FUN_10526f8b8(void)

{
  return;
}



/* Entry: 10526f8bc; end: 10526f8bf; -[SCCameraViewfinderAVDisplayLayerRenderer suspendRenderingForBackground] */

void FUN_10526f8bc(void)

{
  return;
}



/* Entry: 10526f8c0; end: 10526f8d3; -[SCCameraViewfinderAVDisplayLayerRenderer flushOutdatedPreview] */

void FUN_10526f8c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be98010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__runOnMainThreadWithLayer__1125839a0,
             &PTR___NSConcreteGlobalBlock_110872ac0);
  return;
}



/* Entry: 10526f8d4; end: 10526f8e7; -[SCCameraViewfinderAVDisplayLayerRenderer flushTextureCache] */

void FUN_10526f8d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be98010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__runOnMainThreadWithLayer__1125839a0,
             &PTR___NSConcreteGlobalBlock_110872ae0);
  return;
}



/* Entry: 10526f8e8; end: 10526fa37; -[SCCameraViewfinderAVDisplayLayerRenderer render:completionHandler:] */

void FUN_10526f8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c111a60();
  iVar1 = (int)uVar2;
  _CMSampleBufferIsValid();
  if (iVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    puVar3 = auStack_48;
    _objc_initWeak(puVar3,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f8240(puVar3);
    _objc_release(puVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10526fa38; end: 10526fc03;  */

void FUN_10526fa38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_c0 [128];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar6 = lVar1 + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar6;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    if (lVar5 != 0) {
      lVar6 = lVar1 + 8;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bfb2f20();
      _objc_release(lVar6);
    }
    lVar6 = *(long *)(param_1 + 0x28);
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c0ed100();
    if (lVar5 != lVar6) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0ed100();
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = uVar2;
      uVar3 = *(ulong *)(param_1 + 0x28);
      func_0x00010c0ed100();
      if ((uVar3 < 8) && ((1L << (uVar3 & 0x3f) & 0xccU) != 0)) {
        _CATransform3DMakeRotation(auStack_c0,0x3ff921fb54442d18,0,0,0x3ff0000000000000);
        lVar6 = *(long *)(param_1 + 0x20) + 8;
        _objc_loadWeakRetained(lVar6);
      }
      else {
        lVar6 = *(long *)(param_1 + 0x20) + 8;
        _objc_loadWeakRetained(lVar6);
      }
      func_0x00010c219960();
      _objc_release(lVar6);
    }
    lVar6 = lVar1 + 8;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c111a60(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bf963c0(lVar6);
    _objc_release(lVar6);
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
      lVar5 = *(long *)(param_1 + 0x20) + 8;
      _objc_loadWeakRetained(lVar5);
      lVar4 = lVar5;
      func_0x00010c252d60();
      (**(code **)(lVar6 + 0x10))(lVar6,lVar4 == 1);
      _objc_release(lVar5);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10526fc04; end: 10526fc83; -[SCCameraViewfinderAVDisplayLayerRenderer _createDisplayLayer] */

void FUN_10526fc04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___AVSampleBufferDisplayLayer_1126b6c98;
  _objc_alloc_init(PTR__OBJC_CLASS___AVSampleBufferDisplayLayer_1126b6c98);
  func_0x00010c2218a0();
  uStack_58 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
  uStack_60 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
  uStack_48 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
  uStack_50 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
  uStack_38 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
  uStack_40 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
  uStack_28 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
  uStack_30 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
  uStack_98 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
  uStack_a0 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
  uStack_88 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
  uStack_90 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
  uStack_78 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
  uStack_80 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
  uStack_68 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
  uStack_70 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
  func_0x00010c219960(puVar1,param_2,&uStack_a0);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10526fc84; end: 10526fd77; -[SCCameraViewfinderAVDisplayLayerRenderer _runOnMainThreadWithLayer:] */

void FUN_10526fc84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10526fd78; end: 10526fdd7;  */

void FUN_10526fd78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained(lVar2);
    (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10526fdd8; end: 10526fddf; -[SCCameraViewfinderAVDisplayLayerRenderer .cxx_destruct] */

void FUN_10526fdd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10526fde0; end: 10526fe7f;  */

void FUN_10526fde0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b6c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10526fe80; end: 10526fe87; -[SCCameraViewfinderRenderAgentImpl enqueueSampleBuffer:] */

void FUN_10526fe80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf963f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_enqueueSampleBuffer_completionBl_1125c32a0,param_3,0);
  return;
}



/* Entry: 10526fe88; end: 10526ff2f; -[SCCameraViewfinderRenderAgentImpl flushOutdatedPreview] */

void FUN_10526fe88(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10526ff30; end: 10526ff8b;  */

void FUN_10526ff30(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x43) == '\x01') {
      lVar1 = param_1;
      func_0x00010bdf75a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb30e0();
      _objc_release(lVar1);
    }
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10526ff8c; end: 105270043; -[SCCameraViewfinderRenderAgentImpl videoOrientationChanged:] */

void FUN_10526ff8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105270044; end: 105270083;  */

void FUN_105270044(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bee3460(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105270084; end: 105270173; -[SCCameraViewfinderRenderAgentImpl applicationDidEnterBackground] */

void FUN_105270084(long param_1)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_initWeak(auStack_38,param_1);
  if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x00010c229320(param_1);
    func_0x00010beefe40(param_1);
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105270174;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retainBlock(&puStack_60);
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x48));
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_40);
  }
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105270174; end: 1052701bf;  */

void FUN_105270174(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bdf75a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb32a0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052701c0; end: 105270267; -[SCCameraViewfinderRenderAgentImpl applicationWillEnterForeground] */

void FUN_1052701c0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105270268; end: 1052702c3;  */

void FUN_105270268(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c0e00e0(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf098);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010bdc4f00(param_1,param_2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052702c4; end: 10527037b; -[SCCameraViewfinderRenderAgentImpl setBlurEnabled:] */

void FUN_1052702c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10527037c; end: 1052703d7;  */

void FUN_10527037c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bdf75a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172b40();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052703d8; end: 10527042f; -[SCCameraViewfinderRenderAgentImpl _asyncClearSampleBuffer] */

void FUN_1052703d8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105270430;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x48),param_2,&puStack_38);
  return;
}



/* Entry: 105270430; end: 105270437;  */

void FUN_105270430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde06f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__clearLastSampleBuffer_112555b58);
  return;
}



/* Entry: 105270438; end: 10527049b;  */

void FUN_105270438(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bdf75a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c28af00(*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28));
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10527049c; end: 10527052f; -[SCCameraViewfinderRenderAgentImpl _textureSizeFromRect:] */

undefined1  [16] FUN_10527049c(double param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5c20();
  param_3 = param_3 * param_1;
  dVar2 = param_3 * 0.8;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5c20();
  _objc_release(puVar1);
  auVar3._8_8_ = param_4 * param_3 * 0.8;
  auVar3._0_8_ = dVar2;
  return auVar3;
}



/* Entry: 105270530; end: 105270587; -[SCCameraViewfinderRenderAgentImpl flushTextureCache] */

void FUN_105270530(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105270588;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f88c0(*(undefined8 *)(param_1 + 0x48),param_2,&puStack_38);
  return;
}



/* Entry: 105270588; end: 1052705bb;  */

void FUN_105270588(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf75a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb32a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052705bc; end: 1052705bf; -[SCCameraViewfinderRenderAgentImpl setTextureSize:] */

void FUN_1052705bc(void)

{
  return;
}



/* Entry: 1052705c0; end: 1052705c3; -[SCCameraViewfinderRenderAgentImpl setTextureOrientation:] */

void FUN_1052705c0(void)

{
  return;
}



/* Entry: 1052705c4; end: 105270653; -[SCCameraViewfinderRenderAgentImpl logOnNextFrameReceivedWithFrameMonitor:] */

void FUN_1052705c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105270654;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105270654; end: 10527069f;  */

void FUN_105270654(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x42) = 1;
  _objc_storeWeak(*(long *)(param_1 + 0x20) + 0x58,*(undefined8 *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0x20) + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10a1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052706a0; end: 10527077f; -[SCCameraViewfinderRenderAgentImpl logOnNextFrameReceivedWithLogger:] */

void FUN_1052706a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105270730;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105270780; end: 105270787; -[SCCameraViewfinderRenderAgentImpl cameraHeathMonitorDidDetectFailedCameraOpen:] */

void FUN_105270780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a21b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_logCameraOpenEventCameraFailedTo_112606278);
  return;
}



/* Entry: 105270788; end: 1052707af; -[SCCameraViewfinderRenderAgentImpl view] */

void FUN_105270788(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052707b0; end: 1052707d7; -[SCCameraViewfinderRenderAgentImpl _onSessionRunningStatusChange:] */

void FUN_1052707b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  func_0x00010c078200();
  *(undefined1 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 1052707d8; end: 105270853; -[SCCameraViewfinderRenderAgentImpl showBlurTransitionWithAutoDismissOnBrightnessStable:] */

void FUN_1052707d8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010be3e7a0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(char *)(param_1 + 0xe0) = (char)param_3;
  if (((int)param_3 != 0) && (*(long *)(param_1 + 0xe8) == 0)) {
    puVar2 = PTR_PTR_1126b6cc0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined **)(param_1 + 0xe8) = puVar2;
    _objc_release(uVar3);
  }
  *(undefined1 *)(param_1 + 0xd3) = 0;
  func_0x00010be047a0(param_1);
  func_0x00010bdeb6a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be0ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fadeInBlurView__112561150,param_3);
  return;
}



/* Entry: 105270854; end: 1052708af; -[SCCameraViewfinderRenderAgentImpl hideBlurTransition] */

void FUN_105270854(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be3e7a0();
  if (((int)lVar1 != 0) && ((*(byte *)(param_1 + 0xd1) & 1) == 0)) {
    if (*(char *)(param_1 + 0xd2) != '\x01') {
      *(undefined1 *)(param_1 + 0xd1) = 1;
      func_0x00010be0dfa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xe8),PTR_s_reset_11262ba18);
      return;
    }
    *(undefined1 *)(param_1 + 0xd3) = 1;
  }
  return;
}



/* Entry: 1052708b0; end: 105270953; -[SCCameraViewfinderRenderAgentImpl _examineBrightnessAndDismissBlurIfNeeded:] */

void FUN_1052708b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uStack_24;
  
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    func_0x00010c1494c0(param_3);
    func_0x000100709e4c();
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c0e0a00((double)uStack_24);
    if ((int)uVar1 != 0) {
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7fc0();
      _objc_release(uVar1);
    }
  }
  return;
}



/* Entry: 105270954; end: 10527095b;  */

void FUN_105270954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_hideBlurTransition_1125d6078);
  return;
}



/* Entry: 10527095c; end: 105270a0b; -[SCCameraViewfinderRenderAgentImpl _fadeInBlurView:] */

void FUN_10527095c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x00010bea4ca0(param_1,param_2,1);
  *(undefined1 *)(param_1 + 0xd2) = 1;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105270a0c;
  puStack_40 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x105270a1c;
  puStack_70 = &UNK_110857498;
  lStack_68 = param_1;
  uStack_60 = param_3;
  lStack_38 = param_1;
  func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58,
                      &puStack_88);
  return;
}



/* Entry: 105270a0c; end: 105270a33;  */

void FUN_105270a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 200),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105270a34; end: 105270ac7; -[SCCameraViewfinderRenderAgentImpl _fadeOutBlurView] */

void FUN_105270a34(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010bea6300(param_1,param_2,0);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105270ac8;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105270ad8;
  puStack_58 = &UNK_110841f20;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48,
                      &puStack_70);
  return;
}



/* Entry: 105270ac8; end: 105270ad7;  */

void FUN_105270ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 200),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105270ad8; end: 105270b13;  */

void FUN_105270ad8(long param_1,undefined8 param_2)

{
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 200));
  func_0x00010bea4ca0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xd1) = 0;
  return;
}



/* Entry: 105270b14; end: 105270bcb; -[SCCameraViewfinderRenderAgentImpl _clearBlurImmediatelyOrScheduleClearTimeout:] */

void FUN_105270b14(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xd3) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bfe1af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideBlurTransition_1125d6078);
    return;
  }
  uVar1 = 0x3fe0000000000000;
  if (param_3 == 0) {
    uVar1 = 0x3fd3333333333333;
  }
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fe0(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 105270bcc; end: 105270bd3;  */

void FUN_105270bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_hideBlurTransition_1125d6078);
  return;
}



/* Entry: 105270bd4; end: 105270c87; -[SCCameraViewfinderRenderAgentImpl _displayLastSampleBuffer] */

void FUN_105270bd4(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    func_0x00010bea6300(param_1,param_2,1);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x105270c44;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x48),param_2,&puStack_48);
  }
  return;
}



/* Entry: 105270c88; end: 105270d4b; -[SCCameraViewfinderRenderAgentImpl _createBlurViewIfNeeded] */

void FUN_105270c88(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 200) == 0) {
    puVar1 = PTR_PTR_1126b6cc8;
    _objc_alloc(PTR_PTR_1126b6cc8);
    func_0x00010c04eac0(0x4024000000000000);
    puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    func_0x00010c00ee20();
    uVar4 = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar1);
  }
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 200));
  func_0x00010c16d4a0(*(undefined8 *)(param_1 + 200));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 200));
  lVar3 = *(long *)(param_1 + 200);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + 200));
  return;
}



/* Entry: 105270d4c; end: 105270dcf; -[SCCameraViewfinderRenderAgentImpl pauseAndResumeRenderingAfter:] */

void FUN_105270d4c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_1 <= 0.0) {
    param_1 = 0.6;
  }
  func_0x00010bea6300(param_2,param_3,1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105270dd0;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_2;
  func_0x00010c0f7fe0(param_1,*(undefined8 *)(param_2 + 0x48),param_3,&puStack_58);
  return;
}



/* Entry: 105270dd0; end: 105270ddb;  */

void FUN_105270dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setPauseSampleBufferRender__112587268,0);
  return;
}



/* Entry: 105270ddc; end: 105270e0b; -[SCCameraViewfinderRenderAgentImpl _setPauseSampleBufferRender:] */

void FUN_105270ddc(long param_1,undefined8 param_2,undefined1 param_3)

{
  _os_unfair_lock_lock(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0xd4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xc0);
  return;
}



/* Entry: 105270e0c; end: 105270e3b; -[SCCameraViewfinderRenderAgentImpl _setIsBlurTransitionVisible:] */

void FUN_105270e0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  _os_unfair_lock_lock(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xc0);
  return;
}



/* Entry: 105270e3c; end: 105270e6f; -[SCCameraViewfinderRenderAgentImpl _isBlurTransitionVisible] */

undefined1 FUN_105270e3c(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0xc0);
  uVar1 = *(undefined1 *)(param_1 + 0xd0);
  _os_unfair_lock_unlock(param_1 + 0xc0);
  return uVar1;
}



/* Entry: 105270e70; end: 105270f3f; -[SCCameraViewfinderRenderAgentImpl _simMockSetupOnce] */

void FUN_105270e70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c19f0e0(puVar1);
  func_0x00010c182ca0(puVar1,param_2,*(undefined8 *)PTR__kCAGravityResizeAspectFill_110346d30);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105270f40; end: 105271017; -[SCCameraViewfinderRenderAgentImpl _simMockEnqueueIfNeeded:] */

void FUN_105270f40(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  func_0x00010c1494c0();
  if (((param_3 != 0) && (lVar3 = param_3, _CMSampleBufferIsValid(), (int)lVar3 != 0)) &&
     (_CMSampleBufferGetImageBuffer(), param_3 != 0)) {
    if (*(long *)(param_1 + 0x28) == 0) {
      pcVar4 = "com.snap.camera.viewfinder.simMockRender";
      _dispatch_queue_create("com.snap.camera.viewfinder.simMockRender",0);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      *(char **)(param_1 + 0x28) = pcVar4;
      _objc_release(uVar5);
    }
    pcVar4 = (char *)(param_1 + 0x30);
    do {
      if (*pcVar4 != '\0') {
        ClearExclusiveLocal();
        return;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
      if (bVar2) {
        *pcVar4 = '\x01';
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    _CFRetain(param_3);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_105271018;
    puStack_38 = &UNK_110848c48;
    lStack_30 = param_1;
    lStack_28 = param_3;
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x28),&puStack_50);
  }
  return;
}



/* Entry: 105271018; end: 10527114b;  */

void FUN_105271018(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x20) == 0) {
    puVar1 = PTR__OBJC_CLASS___CIContext_1126b3120;
    func_0x00010bf4f640(PTR__OBJC_CLASS___CIContext_1126b3120,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x20) = puVar1;
    _objc_release(uVar3);
  }
  puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x00010bfe9300(PTR__OBJC_CLASS___CIImage_1126b3128,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe6da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf9de20(puVar2);
  func_0x00010bf54e00(lVar4,param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _CFRelease(uVar3);
  if (lVar4 == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x30) = 0;
  }
  else {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f88c0();
    _objc_release(uVar3);
  }
  _objc_release(puVar2);
  return;
}



/* Entry: 10527114c; end: 105271243;  */

void FUN_10527114c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(*(long *)(param_5 + 0x20) + 0x10);
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (*(long *)(*(long *)(param_5 + 0x20) + 0x18) != 0) {
      func_0x00010bfb68e0();
      uVar2 = *(ulong *)(*(long *)(param_5 + 0x20) + 0x10);
      uVar3 = param_1;
      uVar4 = param_2;
      uVar5 = param_3;
      uVar6 = param_4;
      func_0x00010bf20c00();
      _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar3,uVar4,uVar5,uVar6);
      if ((uVar2 & 1) == 0) {
        func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x10));
        func_0x00010c19f0e0(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x18));
      }
      func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
      func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_6,1);
      func_0x00010c182c80(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x18),param_6,
                          *(undefined8 *)(param_5 + 0x28));
      func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    }
  }
  _CGImageRelease(*(undefined8 *)(param_5 + 0x28));
  *(undefined1 *)(*(long *)(param_5 + 0x20) + 0x30) = 0;
  return;
}



/* Entry: 105271244; end: 10527125b; -[SCCameraViewfinderRenderAgentImpl delegate] */

void FUN_105271244(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10527125c; end: 105271357; -[SCCameraViewfinderRenderAgentImpl .cxx_destruct] */

void FUN_10527125c(long param_1)

{
  _objc_destroyWeak(param_1 + 0xf0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105271358; end: 105271367; -[SCCameraViewfinderLayerActionsForwarder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105271358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112720b8c);
  return;
}


