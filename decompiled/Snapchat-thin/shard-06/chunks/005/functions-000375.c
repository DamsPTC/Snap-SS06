/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a55e14; end: 104a55e4b; -[GTMSessionFetcher setCanShareSession:] */

void FUN_104a55e14(long param_1,undefined8 param_2,undefined1 param_3)

{
  _objc_retain();
  _objc_sync_enter();
  *(undefined1 *)(param_1 + 0x178) = param_3;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a55e4c; end: 104a55e87; -[GTMSessionFetcher useBackgroundSession] */

undefined1 FUN_104a55e4c(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined1 *)(param_1 + 0x80);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a55e88; end: 104a55ecb; -[GTMSessionFetcher setUseBackgroundSession:] */

void FUN_104a55e88(long param_1,undefined8 param_2,uint param_3)

{
  _objc_retain();
  _objc_sync_enter();
  if (*(byte *)(param_1 + 0x80) != param_3) {
    *(char *)(param_1 + 0x80) = (char)param_3;
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a55ecc; end: 104a55f07; -[GTMSessionFetcher isUsingBackgroundSession] */

undefined1 FUN_104a55ecc(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined1 *)(param_1 + 0x81);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a55f08; end: 104a55f3f; -[GTMSessionFetcher setUsingBackgroundSession:] */

void FUN_104a55f08(long param_1,undefined8 param_2,undefined1 param_3)

{
  _objc_retain();
  _objc_sync_enter();
  *(undefined1 *)(param_1 + 0x81) = param_3;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a55f40; end: 104a55f47; -[GTMSessionFetcher stopFetchingTriggersCompletionHandler] */

undefined1 FUN_104a55f40(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17b);
}



/* Entry: 104a55f48; end: 104a55f5b; -[GTMSessionFetcher setStopFetchingTriggersCompletionHandler:] */

void FUN_104a55f48(long param_1,undefined8 param_2,undefined1 param_3)

{
  if (*(long *)(param_1 + 0x150) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x17b) = param_3;
  return;
}



/* Entry: 104a55f5c; end: 104a55f9f; -[GTMSessionFetcher sessionNeedingInvalidation] */

void FUN_104a55f5c(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a55fa0; end: 104a55fef; -[GTMSessionFetcher setSessionNeedingInvalidation:] */

void FUN_104a55fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a55ff0; end: 104a56033; -[GTMSessionFetcher sessionDelegateQueue] */

void FUN_104a55ff0(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a56034; end: 104a560df; -[GTMSessionFetcher setSessionDelegateQueue:] */

void FUN_104a56034(ulong param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if ((*(undefined **)(param_1 + 0xf0) != param_3) &&
     (uVar1 = param_1, func_0x00010c072de0(), (uVar1 & 1) == 0)) {
    if (param_3 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x00010c0b6ba0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = param_3;
      _objc_retain();
    }
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined **)(param_1 + 0xf0) = puVar2;
    _objc_release(uVar3);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a560e0; end: 104a5611b; -[GTMSessionFetcher userStoppedFetching] */

undefined1 FUN_104a560e0(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined1 *)(param_1 + 0x119);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a5611c; end: 104a5615f; -[GTMSessionFetcher userData] */

void FUN_104a5611c(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a56160; end: 104a561af; -[GTMSessionFetcher setUserData:] */

void FUN_104a56160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a561b0; end: 104a561f3; -[GTMSessionFetcher destinationFileURL] */

void FUN_104a561b0(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a561f4; end: 104a562b7; -[GTMSessionFetcher setDestinationFileURL:] */

void FUN_104a561f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_3;
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar2 = *(ulong *)(param_1 + 0xa8);
  if ((lVar1 != 0 || uVar2 != 0) && (func_0x00010c071ae0(), (uVar2 & 1) == 0)) {
    if (*(long *)(param_1 + 0x68) != 0) {
      _objc_opt_class();
      _NSLog(&PTR____CFConstantStringClassReference_110da9a18);
    }
    _objc_storeStrong((ulong *)(param_1 + 0xa8),param_3);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a562b8; end: 104a5632f; -[GTMSessionFetcher setProperties:] */

void FUN_104a562b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_3;
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a56330; end: 104a56373; -[GTMSessionFetcher properties] */

void FUN_104a56330(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a56374; end: 104a5642b; -[GTMSessionFetcher setProperty:forKey:] */

void FUN_104a56374(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain();
  _objc_sync_enter();
  lVar1 = *(long *)(param_1 + 0xd8);
  if ((param_3 != 0) && (lVar1 == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined **)(param_1 + 0xd8) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0xd8);
  }
  func_0x00010c220220(lVar1,param_2,param_3,param_4);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a5642c; end: 104a564b3; -[GTMSessionFetcher propertyForKey:] */

void FUN_104a5642c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c0dff20(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a564b4; end: 104a56553; -[GTMSessionFetcher addPropertiesFromDictionary:] */

void FUN_104a564b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if ((param_3 == 0) || (*(long *)(param_1 + 0xd8) != 0)) {
    func_0x00010bef7f60(*(long *)(param_1 + 0xd8),param_2,param_3);
  }
  else {
    lVar1 = param_3;
    func_0x00010c0d3c80(param_3);
    func_0x00010c1e5020(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a56554; end: 104a56557; -[GTMSessionFetcher setCommentWithFormat:] */

void FUN_104a56554(void)

{
  return;
}



/* Entry: 104a56558; end: 104a5655b; +[GTMSessionFetcher setLoggingEnabled:] */

void FUN_104a56558(void)

{
  return;
}



/* Entry: 104a5655c; end: 104a56563; +[GTMSessionFetcher isLoggingEnabled] */

undefined8 FUN_104a5655c(void)

{
  return 0;
}



/* Entry: 104a56564; end: 104a5656f; -[GTMSessionFetcher downloadResumeData] */

void FUN_104a56564(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x98,1);
  return;
}



/* Entry: 104a56570; end: 104a56577; -[GTMSessionFetcher setDownloadResumeData:] */

void FUN_104a56570(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a56578; end: 104a56583; -[GTMSessionFetcher configuration] */

void FUN_104a56578(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 104a56584; end: 104a5658b; -[GTMSessionFetcher setConfiguration:] */

void FUN_104a56584(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a5658c; end: 104a56597; -[GTMSessionFetcher configurationBlock] */

void FUN_104a5658c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x180,1);
  return;
}



/* Entry: 104a56598; end: 104a5659f; -[GTMSessionFetcher setConfigurationBlock:] */

void FUN_104a56598(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a565a0; end: 104a565ab; -[GTMSessionFetcher wasCreatedFromBackgroundSession] */

byte FUN_104a565a0(long param_1)

{
  return *(byte *)(param_1 + 0x70) & 1;
}



/* Entry: 104a565ac; end: 104a565b7; -[GTMSessionFetcher clientWillReconnectBackgroundSession] */

byte FUN_104a565ac(long param_1)

{
  return *(byte *)(param_1 + 0x71) & 1;
}



/* Entry: 104a565b8; end: 104a565bf; -[GTMSessionFetcher setClientWillReconnectBackgroundSession:] */

void FUN_104a565b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x71) = param_3;
  return;
}



/* Entry: 104a565c0; end: 104a565cb; -[GTMSessionFetcher taskDescription] */

void FUN_104a565c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 104a565cc; end: 104a565d3; -[GTMSessionFetcher setTaskDescription:] */

void FUN_104a565cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a565d4; end: 104a565db; -[GTMSessionFetcher taskPriority] */

undefined4 FUN_104a565d4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



/* Entry: 104a565dc; end: 104a565e3; -[GTMSessionFetcher setTaskPriority:] */

void FUN_104a565dc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 104a565e4; end: 104a565ef; -[GTMSessionFetcher completionHandler] */

void FUN_104a565e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,400,1);
  return;
}



/* Entry: 104a565f0; end: 104a565f7; -[GTMSessionFetcher setCompletionHandler:] */

void FUN_104a565f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a565f8; end: 104a56603; -[GTMSessionFetcher credential] */

void FUN_104a565f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xb8,1);
  return;
}



/* Entry: 104a56604; end: 104a5660b; -[GTMSessionFetcher setCredential:] */

void FUN_104a56604(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a5660c; end: 104a56617; -[GTMSessionFetcher proxyCredential] */

void FUN_104a5660c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xc0,1);
  return;
}



/* Entry: 104a56618; end: 104a5661f; -[GTMSessionFetcher setProxyCredential:] */

void FUN_104a56618(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a56620; end: 104a5662b; -[GTMSessionFetcher bodyData] */

void FUN_104a56620(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x198,1);
  return;
}



/* Entry: 104a5662c; end: 104a56633; -[GTMSessionFetcher setBodyData:] */

void FUN_104a5662c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a56634; end: 104a5663f; -[GTMSessionFetcher service] */

void FUN_104a56634(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x100,1);
  return;
}



/* Entry: 104a56640; end: 104a56647; -[GTMSessionFetcher setService:] */

void FUN_104a56640(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a56648; end: 104a56653; -[GTMSessionFetcher serviceHost] */

void FUN_104a56648(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x108,1);
  return;
}



/* Entry: 104a56654; end: 104a5665b; -[GTMSessionFetcher setServiceHost:] */

void FUN_104a56654(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a5665c; end: 104a56667; -[GTMSessionFetcher accumulateDataBlock] */

void FUN_104a5665c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1a8,1);
  return;
}



/* Entry: 104a56668; end: 104a5666f; -[GTMSessionFetcher setAccumulateDataBlock:] */

void FUN_104a56668(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a56670; end: 104a5667b; -[GTMSessionFetcher receivedProgressBlock] */

void FUN_104a56670(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1b0,1);
  return;
}



/* Entry: 104a5667c; end: 104a56683; -[GTMSessionFetcher setReceivedProgressBlock:] */

void FUN_104a5667c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a56684; end: 104a5668f; -[GTMSessionFetcher downloadProgressBlock] */

void FUN_104a56684(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1b8,1);
  return;
}



/* Entry: 104a56690; end: 104a56697; -[GTMSessionFetcher setDownloadProgressBlock:] */

void FUN_104a56690(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a56698; end: 104a566a3; -[GTMSessionFetcher resumeDataBlock] */

void FUN_104a56698(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1c0,1);
  return;
}



/* Entry: 104a566a4; end: 104a566ab; -[GTMSessionFetcher setResumeDataBlock:] */

void FUN_104a566a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a566ac; end: 104a566b7; -[GTMSessionFetcher didReceiveResponseBlock] */

void FUN_104a566ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1c8,1);
  return;
}



/* Entry: 104a566b8; end: 104a566bf; -[GTMSessionFetcher setDidReceiveResponseBlock:] */

void FUN_104a566b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a566c0; end: 104a566cb; -[GTMSessionFetcher challengeBlock] */

void FUN_104a566c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1d0,1);
  return;
}



/* Entry: 104a566cc; end: 104a566d3; -[GTMSessionFetcher setChallengeBlock:] */

void FUN_104a566cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a566d4; end: 104a566df; -[GTMSessionFetcher willRedirectBlock] */

void FUN_104a566d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1d8,1);
  return;
}



/* Entry: 104a566e0; end: 104a566e7; -[GTMSessionFetcher setWillRedirectBlock:] */

void FUN_104a566e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a566e8; end: 104a566f3; -[GTMSessionFetcher sendProgressBlock] */

void FUN_104a566e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1e0,1);
  return;
}



/* Entry: 104a566f4; end: 104a566fb; -[GTMSessionFetcher setSendProgressBlock:] */

void FUN_104a566f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a566fc; end: 104a56707; -[GTMSessionFetcher willCacheURLResponseBlock] */

void FUN_104a566fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1e8,1);
  return;
}



/* Entry: 104a56708; end: 104a5670f; -[GTMSessionFetcher setWillCacheURLResponseBlock:] */

void FUN_104a56708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a56710; end: 104a5671b; -[GTMSessionFetcher retryBlock] */

void FUN_104a56710(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1f0,1);
  return;
}



/* Entry: 104a5671c; end: 104a56723; -[GTMSessionFetcher setRetryBlock:] */

void FUN_104a5671c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a56724; end: 104a5672f; -[GTMSessionFetcher metricsCollectionBlock] */

void FUN_104a56724(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x1f8,1);
  return;
}



/* Entry: 104a56730; end: 104a56737; -[GTMSessionFetcher setMetricsCollectionBlock:] */

void FUN_104a56730(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a56738; end: 104a5673f; -[GTMSessionFetcher retryFactor] */

undefined8 FUN_104a56738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 104a56740; end: 104a56747; -[GTMSessionFetcher setRetryFactor:] */

void FUN_104a56740(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x140) = param_1;
  return;
}



/* Entry: 104a56748; end: 104a56753; -[GTMSessionFetcher allowedInsecureSchemes] */

void FUN_104a56748(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x200,1);
  return;
}



/* Entry: 104a56754; end: 104a5675b; -[GTMSessionFetcher setAllowedInsecureSchemes:] */

void FUN_104a56754(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a5675c; end: 104a56767; -[GTMSessionFetcher allowLocalhostRequest] */

byte FUN_104a5675c(long param_1)

{
  return *(byte *)(param_1 + 0x179) & 1;
}



/* Entry: 104a56768; end: 104a5676f; -[GTMSessionFetcher setAllowLocalhostRequest:] */

void FUN_104a56768(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x179) = param_3;
  return;
}



/* Entry: 104a56770; end: 104a5677b; -[GTMSessionFetcher allowInvalidServerCertificates] */

byte FUN_104a56770(long param_1)

{
  return *(byte *)(param_1 + 0x17a) & 1;
}



/* Entry: 104a5677c; end: 104a56783; -[GTMSessionFetcher setAllowInvalidServerCertificates:] */

void FUN_104a5677c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x17a) = param_3;
  return;
}



/* Entry: 104a56784; end: 104a5678f; -[GTMSessionFetcher cookieStorage] */

void FUN_104a56784(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x208,1);
  return;
}



/* Entry: 104a56790; end: 104a56797; -[GTMSessionFetcher setCookieStorage:] */

void FUN_104a56790(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a56798; end: 104a567a3; -[GTMSessionFetcher initialBeginFetchDate] */

void FUN_104a56798(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x150,1);
  return;
}



/* Entry: 104a567a4; end: 104a567af; -[GTMSessionFetcher testBlock] */

void FUN_104a567a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x210,1);
  return;
}



/* Entry: 104a567b0; end: 104a567b7; -[GTMSessionFetcher setTestBlock:] */

void FUN_104a567b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a567b8; end: 104a567bf; -[GTMSessionFetcher testBlockAccumulateDataChunkCount] */

undefined8 FUN_104a567b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x218);
}



/* Entry: 104a567c0; end: 104a567c7; -[GTMSessionFetcher setTestBlockAccumulateDataChunkCount:] */

void FUN_104a567c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x218) = param_3;
  return;
}



/* Entry: 104a567c8; end: 104a567d3; -[GTMSessionFetcher comment] */

void FUN_104a567c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x168,1);
  return;
}



/* Entry: 104a567d4; end: 104a567db; -[GTMSessionFetcher setComment:] */

void FUN_104a567d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a567dc; end: 104a567e7; -[GTMSessionFetcher log] */

void FUN_104a567dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x170,1);
  return;
}



/* Entry: 104a567e8; end: 104a567ef; -[GTMSessionFetcher setLog:] */

void FUN_104a567e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a567f0; end: 104a567fb; -[GTMSessionFetcher userAgentProvider] */

void FUN_104a567f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x220,1);
  return;
}



/* Entry: 104a567fc; end: 104a56803; -[GTMSessionFetcher setUserAgentProvider:] */

void FUN_104a567fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a56804; end: 104a5680b; -[GTMSessionFetcher backgroundTaskIdentifier] */

undefined8 FUN_104a56804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x228);
}



/* Entry: 104a5680c; end: 104a56813; -[GTMSessionFetcher setBackgroundTaskIdentifier:] */

void FUN_104a5680c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x228) = param_3;
  return;
}



/* Entry: 104a56814; end: 104a5681f; -[GTMSessionFetcher skipBackgroundTask] */

byte FUN_104a56814(long param_1)

{
  return *(byte *)(param_1 + 0x17c) & 1;
}



/* Entry: 104a56820; end: 104a56827; -[GTMSessionFetcher setSkipBackgroundTask:] */

void FUN_104a56820(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x17c) = param_3;
  return;
}



/* Entry: 104a56828; end: 104a56a97; -[GTMSessionFetcher .cxx_destruct] */

void FUN_104a56828(long param_1)

{
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a56a98; end: 104a56b03; -[GTMSessionCookieStorage init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104a56a98(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e35a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11270f674);
    *(undefined **)((long)puVar1 + (long)_DAT_11270f674) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104a56b04; end: 104a56b63; -[GTMSessionCookieStorage cookies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a56b04(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f674);
  func_0x00010bf51e00(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a56b64; end: 104a56be7; -[GTMSessionCookieStorage setCookie:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a56b64(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain();
  if ((param_3 != 0) && (*(long *)(param_1 + _DAT_11270f678) != 1)) {
    _objc_retain(param_1);
    _objc_sync_enter();
    func_0x00010c069580(param_1,param_2,param_3);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


