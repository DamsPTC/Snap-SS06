/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0a7544; end: 10b0a7547; -[SCEntryPointWatchDog entryPoint:beginningInLifecycle:] */

void FUN_10b0a7544(void)

{
  return;
}



/* Entry: 10b0a7548; end: 10b0a754b; -[SCEntryPointWatchDog entryPoint:beganInLifecycle:] */

void FUN_10b0a7548(void)

{
  return;
}



/* Entry: 10b0a754c; end: 10b0a754f; -[SCEntryPointWatchDog services:willBeExposedInLifecycle:] */

void FUN_10b0a754c(void)

{
  return;
}



/* Entry: 10b0a7550; end: 10b0a7553; -[SCEntryPointWatchDog serviceProviderProviding:] */

void FUN_10b0a7550(void)

{
  return;
}



/* Entry: 10b0a7554; end: 10b0a7557; -[SCEntryPointWatchDog serviceProviderProvided:] */

void FUN_10b0a7554(void)

{
  return;
}



/* Entry: 10b0a7558; end: 10b0a755b; -[SCEntryPointWatchDog scope:willBeExposedFromLifecycle:] */

void FUN_10b0a7558(void)

{
  return;
}



/* Entry: 10b0a755c; end: 10b0a755f; -[SCEntryPointWatchDog scope:willBeRemovedFromLifecycle:] */

void FUN_10b0a755c(void)

{
  return;
}



/* Entry: 10b0a7560; end: 10b0a7563; -[SCEntryPointWatchDog plugInScope:loadingPlugInsInLifecycle:] */

void FUN_10b0a7560(void)

{
  return;
}



/* Entry: 10b0a7564; end: 10b0a7567; -[SCEntryPointWatchDog plugInScope:loadedPlugInsInLifecycle:] */

void FUN_10b0a7564(void)

{
  return;
}



/* Entry: 10b0a7568; end: 10b0a756b; -[SCEntryPointWatchDog scope:overExposedInLifecycle:] */

void FUN_10b0a7568(void)

{
  return;
}



/* Entry: 10b0a756c; end: 10b0a756f; -[SCEntryPointWatchDog scope:overRemovedInLifecycle:] */

void FUN_10b0a756c(void)

{
  return;
}



/* Entry: 10b0a7570; end: 10b0a7573; -[SCEntryPointWatchDog lifecycleDuplicated:] */

void FUN_10b0a7570(void)

{
  return;
}



/* Entry: 10b0a7574; end: 10b0a7577; -[SCEntryPointWatchDog scopedAccess:didAccessValue:] */

void FUN_10b0a7574(void)

{
  return;
}



/* Entry: 10b0a7578; end: 10b0a75b3; -[SCEntryPointWatchDog .cxx_destruct] */

void FUN_10b0a7578(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0a75b4; end: 10b0a765f; -[SCFuncTracingScopeLifecycleMonitor init] */

undefined1 * FUN_10b0a75b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127056e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c2a2be0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c2a2be0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0a7660; end: 10b0a7663; -[SCFuncTracingScopeLifecycleMonitor setMemoryUsageMetricsReporter:] */

void FUN_10b0a7660(void)

{
  return;
}



/* Entry: 10b0a7664; end: 10b0a7667; -[SCFuncTracingScopeLifecycleMonitor setMetricsReporter:] */

void FUN_10b0a7664(void)

{
  return;
}



/* Entry: 10b0a7668; end: 10b0a766b; -[SCFuncTracingScopeLifecycleMonitor setExceptionReporter:] */

void FUN_10b0a7668(void)

{
  return;
}



/* Entry: 10b0a766c; end: 10b0a766f; -[SCFuncTracingScopeLifecycleMonitor setPerformanceMetricsReporter:] */

void FUN_10b0a766c(void)

{
  return;
}



/* Entry: 10b0a7670; end: 10b0a7673; -[SCFuncTracingScopeLifecycleMonitor setStartupInfoService:] */

void FUN_10b0a7670(void)

{
  return;
}



/* Entry: 10b0a7674; end: 10b0a772f; -[SCFuncTracingScopeLifecycleMonitor scopeGraphMappingBuildStart:] */

void FUN_10b0a7674(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010becdc00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar2,param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0a7730; end: 10b0a77c3; -[SCFuncTracingScopeLifecycleMonitor scopeGraphMappingBuildEnd:] */

void FUN_10b0a7730(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282800();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a77c4; end: 10b0a77c7; -[SCFuncTracingScopeLifecycleMonitor scopeGraphAllMappingsBuilt] */

void FUN_10b0a77c4(void)

{
  return;
}



/* Entry: 10b0a77c8; end: 10b0a77f7; -[SCFuncTracingScopeLifecycleMonitor _traceMessageForScopeGraphMappingBuild:] */

void FUN_10b0a77c8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f5b518);
  return;
}



/* Entry: 10b0a77f8; end: 10b0a78df; -[SCFuncTracingScopeLifecycleMonitor lifecycleBeginning:] */

void FUN_10b0a77f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = param_1;
  func_0x00010becdbe0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar4,param_2,puVar2,param_3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a78e0; end: 10b0a7993; -[SCFuncTracingScopeLifecycleMonitor lifecycleEnded:] */

void FUN_10b0a78e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dff20(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282800();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a7994; end: 10b0a7a43; -[SCFuncTracingScopeLifecycleMonitor _traceMessageForLifecycle:] */

void FUN_10b0a7994(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  func_0x00010c098dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = lVar1;
  func_0x00010c0dfd40(lVar1,param_2,lVar2 + -2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f5b538);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b0a7a44; end: 10b0a7b3f; -[SCFuncTracingScopeLifecycleMonitor entryPoint:endingInLifecycle:] */

void FUN_10b0a7a44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = param_1;
  func_0x00010becdbc0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar4,param_2,puVar2,param_3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a7b40; end: 10b0a7c0f; -[SCFuncTracingScopeLifecycleMonitor entryPoint:endedInLifecycle:] */

void FUN_10b0a7b40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0dff20(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282800();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a7c10; end: 10b0a7c77; -[SCFuncTracingScopeLifecycleMonitor _traceMessageForEntryPointEnd:] */

void FUN_10b0a7c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f5b558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0a7c78; end: 10b0a7c7b; -[SCFuncTracingScopeLifecycleMonitor lifecycleBegan:] */

void FUN_10b0a7c78(void)

{
  return;
}



/* Entry: 10b0a7c7c; end: 10b0a7c7f; -[SCFuncTracingScopeLifecycleMonitor lifecycleEnding:] */

void FUN_10b0a7c7c(void)

{
  return;
}



/* Entry: 10b0a7c80; end: 10b0a7c83; -[SCFuncTracingScopeLifecycleMonitor entryPoint:beginningInLifecycle:] */

void FUN_10b0a7c80(void)

{
  return;
}



/* Entry: 10b0a7c84; end: 10b0a7c87; -[SCFuncTracingScopeLifecycleMonitor entryPoint:beganInLifecycle:] */

void FUN_10b0a7c84(void)

{
  return;
}



/* Entry: 10b0a7c88; end: 10b0a7c8b; -[SCFuncTracingScopeLifecycleMonitor services:willBeExposedInLifecycle:] */

void FUN_10b0a7c88(void)

{
  return;
}



/* Entry: 10b0a7c8c; end: 10b0a7c8f; -[SCFuncTracingScopeLifecycleMonitor serviceProviderProviding:] */

void FUN_10b0a7c8c(void)

{
  return;
}



/* Entry: 10b0a7c90; end: 10b0a7c93; -[SCFuncTracingScopeLifecycleMonitor serviceProviderProvided:] */

void FUN_10b0a7c90(void)

{
  return;
}



/* Entry: 10b0a7c94; end: 10b0a7c97; -[SCFuncTracingScopeLifecycleMonitor scope:willBeExposedFromLifecycle:] */

void FUN_10b0a7c94(void)

{
  return;
}



/* Entry: 10b0a7c98; end: 10b0a7c9b; -[SCFuncTracingScopeLifecycleMonitor scope:willBeRemovedFromLifecycle:] */

void FUN_10b0a7c98(void)

{
  return;
}



/* Entry: 10b0a7c9c; end: 10b0a7c9f; -[SCFuncTracingScopeLifecycleMonitor plugInScope:loadingPlugInsInLifecycle:] */

void FUN_10b0a7c9c(void)

{
  return;
}



/* Entry: 10b0a7ca0; end: 10b0a7ca3; -[SCFuncTracingScopeLifecycleMonitor plugInScope:loadedPlugInsInLifecycle:] */

void FUN_10b0a7ca0(void)

{
  return;
}



/* Entry: 10b0a7ca4; end: 10b0a7ca7; -[SCFuncTracingScopeLifecycleMonitor scope:overExposedInLifecycle:] */

void FUN_10b0a7ca4(void)

{
  return;
}



/* Entry: 10b0a7ca8; end: 10b0a7cab; -[SCFuncTracingScopeLifecycleMonitor scope:overRemovedInLifecycle:] */

void FUN_10b0a7ca8(void)

{
  return;
}



/* Entry: 10b0a7cac; end: 10b0a7caf; -[SCFuncTracingScopeLifecycleMonitor lifecycleDuplicated:] */

void FUN_10b0a7cac(void)

{
  return;
}



/* Entry: 10b0a7cb0; end: 10b0a7cb3; -[SCFuncTracingScopeLifecycleMonitor scopedAccess:didAccessValue:] */

void FUN_10b0a7cb0(void)

{
  return;
}



/* Entry: 10b0a7cb4; end: 10b0a7cef; -[SCFuncTracingScopeLifecycleMonitor .cxx_destruct] */

void FUN_10b0a7cb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0a7cf0; end: 10b0a7d93; -[SCLoggingScopeLifecycleMonitor initWithInfoLogger:timeProvider:] */

undefined1 *
FUN_10b0a7cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127056f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0a7d94; end: 10b0a7d97; -[SCLoggingScopeLifecycleMonitor setMemoryUsageMetricsReporter:] */

void FUN_10b0a7d94(void)

{
  return;
}



/* Entry: 10b0a7d98; end: 10b0a7d9b; -[SCLoggingScopeLifecycleMonitor setMetricsReporter:] */

void FUN_10b0a7d98(void)

{
  return;
}



/* Entry: 10b0a7d9c; end: 10b0a7d9f; -[SCLoggingScopeLifecycleMonitor setExceptionReporter:] */

void FUN_10b0a7d9c(void)

{
  return;
}



/* Entry: 10b0a7da0; end: 10b0a7da3; -[SCLoggingScopeLifecycleMonitor setPerformanceMetricsReporter:] */

void FUN_10b0a7da0(void)

{
  return;
}



/* Entry: 10b0a7da4; end: 10b0a7da7; -[SCLoggingScopeLifecycleMonitor setStartupInfoService:] */

void FUN_10b0a7da4(void)

{
  return;
}



/* Entry: 10b0a7da8; end: 10b0a7e27; -[SCLoggingScopeLifecycleMonitor scopeGraphMappingBuildStart:] */

void FUN_10b0a7da8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_4);
  func_0x00010bf5fd80(uVar2);
  func_0x00010c0df720(param_1 * 1000.0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18),param_3,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0a7e28; end: 10b0a7eef; -[SCLoggingScopeLifecycleMonitor scopeGraphMappingBuildEnd:] */

void FUN_10b0a7e28(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(param_4);
  func_0x00010c0e00e0(uVar2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  dVar4 = param_1 * 1000.0;
  func_0x00010bf885a0(uVar2);
  *(double *)(param_2 + 0x20) = *(double *)(param_2 + 0x20) + (dVar4 - param_1);
  pcVar3 = *(code **)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  (*pcVar3)(&PTR____CFConstantStringClassReference_110f5b578);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b0a7ef0; end: 10b0a7f47; -[SCLoggingScopeLifecycleMonitor scopeGraphAllMappingsBuilt] */

void FUN_10b0a7ef0(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  (*pcVar2)(&PTR____CFConstantStringClassReference_110f5b598);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0a7f48; end: 10b0a7f93; -[SCLoggingScopeLifecycleMonitor lifecycleBeginning:] */

void FUN_10b0a7f48(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 8);
  func_0x00010c098dc0();
  _objc_retainAutoreleasedReturnValue();
  (*pcVar1)(&PTR____CFConstantStringClassReference_110f5b5b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a7f94; end: 10b0a7fdf; -[SCLoggingScopeLifecycleMonitor lifecycleBegan:] */

void FUN_10b0a7f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 8);
  func_0x00010c098dc0();
  _objc_retainAutoreleasedReturnValue();
  (*pcVar1)(&PTR____CFConstantStringClassReference_110f5b5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a7fe0; end: 10b0a802b; -[SCLoggingScopeLifecycleMonitor lifecycleEnding:] */

void FUN_10b0a7fe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 8);
  func_0x00010c098dc0();
  _objc_retainAutoreleasedReturnValue();
  (*pcVar1)(&PTR____CFConstantStringClassReference_110f5b5f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a802c; end: 10b0a8077; -[SCLoggingScopeLifecycleMonitor lifecycleEnded:] */

void FUN_10b0a802c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 8);
  func_0x00010c098dc0();
  _objc_retainAutoreleasedReturnValue();
  (*pcVar1)(&PTR____CFConstantStringClassReference_110f5b618);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a8078; end: 10b0a80c7; -[SCLoggingScopeLifecycleMonitor entryPoint:beginningInLifecycle:] */

void FUN_10b0a8078(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 8);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  (*pcVar1)(&PTR____CFConstantStringClassReference_110f5b638);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a80c8; end: 10b0a8117; -[SCLoggingScopeLifecycleMonitor entryPoint:beganInLifecycle:] */

void FUN_10b0a80c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 8);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  (*pcVar1)(&PTR____CFConstantStringClassReference_110f5b658);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a8118; end: 10b0a8167; -[SCLoggingScopeLifecycleMonitor entryPoint:endingInLifecycle:] */

void FUN_10b0a8118(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 8);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  (*pcVar1)(&PTR____CFConstantStringClassReference_110f5b678);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a8168; end: 10b0a816b; -[SCLoggingScopeLifecycleMonitor entryPoint:endedInLifecycle:] */

void FUN_10b0a8168(void)

{
  return;
}



/* Entry: 10b0a816c; end: 10b0a8197; -[SCLoggingScopeLifecycleMonitor services:willBeExposedInLifecycle:] */

void FUN_10b0a816c(long param_1)

{
  (**(code **)(param_1 + 8))(&PTR____CFConstantStringClassReference_110f5b698);
  return;
}



/* Entry: 10b0a8198; end: 10b0a819b; -[SCLoggingScopeLifecycleMonitor serviceProviderProviding:] */

void FUN_10b0a8198(void)

{
  return;
}



/* Entry: 10b0a819c; end: 10b0a819f; -[SCLoggingScopeLifecycleMonitor serviceProviderProvided:] */

void FUN_10b0a819c(void)

{
  return;
}



/* Entry: 10b0a81a0; end: 10b0a81cb; -[SCLoggingScopeLifecycleMonitor scope:willBeExposedFromLifecycle:] */

void FUN_10b0a81a0(long param_1)

{
  (**(code **)(param_1 + 8))(&PTR____CFConstantStringClassReference_110f5b6b8);
  return;
}



/* Entry: 10b0a81cc; end: 10b0a81f7; -[SCLoggingScopeLifecycleMonitor scope:willBeRemovedFromLifecycle:] */

void FUN_10b0a81cc(long param_1)

{
  (**(code **)(param_1 + 8))(&PTR____CFConstantStringClassReference_110f5b6d8);
  return;
}



/* Entry: 10b0a81f8; end: 10b0a8223; -[SCLoggingScopeLifecycleMonitor plugInScope:loadingPlugInsInLifecycle:] */

void FUN_10b0a81f8(long param_1)

{
  (**(code **)(param_1 + 8))(&PTR____CFConstantStringClassReference_110f5b6f8);
  return;
}



/* Entry: 10b0a8224; end: 10b0a824f; -[SCLoggingScopeLifecycleMonitor plugInScope:loadedPlugInsInLifecycle:] */

void FUN_10b0a8224(long param_1)

{
  (**(code **)(param_1 + 8))(&PTR____CFConstantStringClassReference_110f5b718);
  return;
}



/* Entry: 10b0a8250; end: 10b0a827b; -[SCLoggingScopeLifecycleMonitor scope:overExposedInLifecycle:] */

void FUN_10b0a8250(long param_1)

{
  (**(code **)(param_1 + 8))(&PTR____CFConstantStringClassReference_110f5b738);
  return;
}



/* Entry: 10b0a827c; end: 10b0a82a7; -[SCLoggingScopeLifecycleMonitor scope:overRemovedInLifecycle:] */

void FUN_10b0a827c(long param_1)

{
  (**(code **)(param_1 + 8))(&PTR____CFConstantStringClassReference_110f5b758);
  return;
}



/* Entry: 10b0a82a8; end: 10b0a82d3; -[SCLoggingScopeLifecycleMonitor lifecycleDuplicated:] */

void FUN_10b0a82a8(long param_1)

{
  (**(code **)(param_1 + 8))(&PTR____CFConstantStringClassReference_110f5b778);
  return;
}



/* Entry: 10b0a82d4; end: 10b0a82d7; -[SCLoggingScopeLifecycleMonitor scopedAccess:didAccessValue:] */

void FUN_10b0a82d4(void)

{
  return;
}



/* Entry: 10b0a82d8; end: 10b0a8307; -[SCLoggingScopeLifecycleMonitor .cxx_destruct] */

void FUN_10b0a82d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0a8308; end: 10b0a8337; -[SCMemoryUsageReportingScopeLifecycleMonitor setMemoryUsageMetricsReporter:] */

void FUN_10b0a8308(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b0a8338; end: 10b0a833b; -[SCMemoryUsageReportingScopeLifecycleMonitor setMetricsReporter:] */

void FUN_10b0a8338(void)

{
  return;
}



/* Entry: 10b0a833c; end: 10b0a833f; -[SCMemoryUsageReportingScopeLifecycleMonitor setExceptionReporter:] */

void FUN_10b0a833c(void)

{
  return;
}



/* Entry: 10b0a8340; end: 10b0a8343; -[SCMemoryUsageReportingScopeLifecycleMonitor setPerformanceMetricsReporter:] */

void FUN_10b0a8340(void)

{
  return;
}



/* Entry: 10b0a8344; end: 10b0a8373; -[SCMemoryUsageReportingScopeLifecycleMonitor setStartupInfoService:] */

void FUN_10b0a8344(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b0a8374; end: 10b0a8377; -[SCMemoryUsageReportingScopeLifecycleMonitor scopeGraphAllMappingsBuilt] */

void FUN_10b0a8374(void)

{
  return;
}



/* Entry: 10b0a8378; end: 10b0a837b; -[SCMemoryUsageReportingScopeLifecycleMonitor scopeGraphMappingBuildStart:] */

void FUN_10b0a8378(void)

{
  return;
}



/* Entry: 10b0a837c; end: 10b0a837f; -[SCMemoryUsageReportingScopeLifecycleMonitor scopeGraphMappingBuildEnd:] */

void FUN_10b0a837c(void)

{
  return;
}



/* Entry: 10b0a8380; end: 10b0a8447; -[SCMemoryUsageReportingScopeLifecycleMonitor lifecycleBeginning:] */

void FUN_10b0a8380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != 0) {
    func_0x00010c098dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c07f880(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c2523e0(uVar3);
    func_0x000107c311f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c132720(0,lVar4,param_2,param_3,puVar1,(uint)uVar2 ^ 1,uVar3);
    _objc_release(uVar3);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10b0a8448; end: 10b0a844b; -[SCMemoryUsageReportingScopeLifecycleMonitor lifecycleBegan:] */

void FUN_10b0a8448(void)

{
  return;
}



/* Entry: 10b0a844c; end: 10b0a844f; -[SCMemoryUsageReportingScopeLifecycleMonitor lifecycleEnding:] */

void FUN_10b0a844c(void)

{
  return;
}



/* Entry: 10b0a8450; end: 10b0a8493; -[SCMemoryUsageReportingScopeLifecycleMonitor lifecycleEnded:] */

void FUN_10b0a8450(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c098dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132c20(0,uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a8494; end: 10b0a8497; -[SCMemoryUsageReportingScopeLifecycleMonitor entryPoint:beginningInLifecycle:] */

void FUN_10b0a8494(void)

{
  return;
}



/* Entry: 10b0a8498; end: 10b0a849b; -[SCMemoryUsageReportingScopeLifecycleMonitor entryPoint:beganInLifecycle:] */

void FUN_10b0a8498(void)

{
  return;
}



/* Entry: 10b0a849c; end: 10b0a849f; -[SCMemoryUsageReportingScopeLifecycleMonitor entryPoint:endingInLifecycle:] */

void FUN_10b0a849c(void)

{
  return;
}



/* Entry: 10b0a84a0; end: 10b0a84a3; -[SCMemoryUsageReportingScopeLifecycleMonitor entryPoint:endedInLifecycle:] */

void FUN_10b0a84a0(void)

{
  return;
}



/* Entry: 10b0a84a4; end: 10b0a84a7; -[SCMemoryUsageReportingScopeLifecycleMonitor services:willBeExposedInLifecycle:] */

void FUN_10b0a84a4(void)

{
  return;
}



/* Entry: 10b0a84a8; end: 10b0a84ab; -[SCMemoryUsageReportingScopeLifecycleMonitor serviceProviderProviding:] */

void FUN_10b0a84a8(void)

{
  return;
}



/* Entry: 10b0a84ac; end: 10b0a84af; -[SCMemoryUsageReportingScopeLifecycleMonitor serviceProviderProvided:] */

void FUN_10b0a84ac(void)

{
  return;
}



/* Entry: 10b0a84b0; end: 10b0a84b3; -[SCMemoryUsageReportingScopeLifecycleMonitor scope:willBeExposedFromLifecycle:] */

void FUN_10b0a84b0(void)

{
  return;
}



/* Entry: 10b0a84b4; end: 10b0a84b7; -[SCMemoryUsageReportingScopeLifecycleMonitor scope:willBeRemovedFromLifecycle:] */

void FUN_10b0a84b4(void)

{
  return;
}



/* Entry: 10b0a84b8; end: 10b0a84bb; -[SCMemoryUsageReportingScopeLifecycleMonitor plugInScope:loadingPlugInsInLifecycle:] */

void FUN_10b0a84b8(void)

{
  return;
}



/* Entry: 10b0a84bc; end: 10b0a84bf; -[SCMemoryUsageReportingScopeLifecycleMonitor plugInScope:loadedPlugInsInLifecycle:] */

void FUN_10b0a84bc(void)

{
  return;
}



/* Entry: 10b0a84c0; end: 10b0a84c3; -[SCMemoryUsageReportingScopeLifecycleMonitor scope:overExposedInLifecycle:] */

void FUN_10b0a84c0(void)

{
  return;
}



/* Entry: 10b0a84c4; end: 10b0a84c7; -[SCMemoryUsageReportingScopeLifecycleMonitor scope:overRemovedInLifecycle:] */

void FUN_10b0a84c4(void)

{
  return;
}


