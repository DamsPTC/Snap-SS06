/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a5a878; end: 104a5a883; -[GTMSessionFetcherService allowedInsecureSchemes] */

void FUN_104a5a878(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xa0,1);
  return;
}



/* Entry: 104a5a884; end: 104a5a88b; -[GTMSessionFetcherService setAllowedInsecureSchemes:] */

void FUN_104a5a884(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a5a88c; end: 104a5a897; -[GTMSessionFetcherService allowLocalhostRequest] */

byte FUN_104a5a88c(long param_1)

{
  return *(byte *)(param_1 + 0x80) & 1;
}



/* Entry: 104a5a898; end: 104a5a89f; -[GTMSessionFetcherService setAllowLocalhostRequest:] */

void FUN_104a5a898(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 104a5a8a0; end: 104a5a8ab; -[GTMSessionFetcherService allowInvalidServerCertificates] */

byte FUN_104a5a8a0(long param_1)

{
  return *(byte *)(param_1 + 0x81) & 1;
}



/* Entry: 104a5a8ac; end: 104a5a8b3; -[GTMSessionFetcherService setAllowInvalidServerCertificates:] */

void FUN_104a5a8ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x81) = param_3;
  return;
}



/* Entry: 104a5a8b4; end: 104a5a8bf; -[GTMSessionFetcherService isRetryEnabled] */

byte FUN_104a5a8b4(long param_1)

{
  return *(byte *)(param_1 + 0x82) & 1;
}



/* Entry: 104a5a8c0; end: 104a5a8c7; -[GTMSessionFetcherService setRetryEnabled:] */

void FUN_104a5a8c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x82) = param_3;
  return;
}



/* Entry: 104a5a8c8; end: 104a5a8d3; -[GTMSessionFetcherService retryBlock] */

void FUN_104a5a8c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xa8,1);
  return;
}



/* Entry: 104a5a8d4; end: 104a5a8db; -[GTMSessionFetcherService setRetryBlock:] */

void FUN_104a5a8d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a5a8dc; end: 104a5a8e3; -[GTMSessionFetcherService maxRetryInterval] */

undefined8 FUN_104a5a8dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 104a5a8e4; end: 104a5a8eb; -[GTMSessionFetcherService setMaxRetryInterval:] */

void FUN_104a5a8e4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xb0) = param_1;
  return;
}



/* Entry: 104a5a8ec; end: 104a5a8f3; -[GTMSessionFetcherService minRetryInterval] */

undefined8 FUN_104a5a8ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 104a5a8f4; end: 104a5a8fb; -[GTMSessionFetcherService setMinRetryInterval:] */

void FUN_104a5a8f4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xb8) = param_1;
  return;
}



/* Entry: 104a5a8fc; end: 104a5a907; -[GTMSessionFetcherService metricsCollectionBlock] */

void FUN_104a5a8fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xc0,1);
  return;
}



/* Entry: 104a5a908; end: 104a5a90f; -[GTMSessionFetcherService setMetricsCollectionBlock:] */

void FUN_104a5a908(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a5a910; end: 104a5a91b; -[GTMSessionFetcherService properties] */

void FUN_104a5a910(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,200,1);
  return;
}



/* Entry: 104a5a91c; end: 104a5a923; -[GTMSessionFetcherService setProperties:] */

void FUN_104a5a91c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a5a924; end: 104a5a92f; -[GTMSessionFetcherService decoratorsPointerArray] */

void FUN_104a5a924(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xd8,1);
  return;
}



/* Entry: 104a5a930; end: 104a5a93b; -[GTMSessionFetcherService testBlock] */

void FUN_104a5a930(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xe0,1);
  return;
}



/* Entry: 104a5a93c; end: 104a5a943; -[GTMSessionFetcherService setTestBlock:] */

void FUN_104a5a93c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a5a944; end: 104a5a94f; -[GTMSessionFetcherService stopFetchingTriggersCompletionHandler] */

byte FUN_104a5a944(long param_1)

{
  return *(byte *)(param_1 + 0x83) & 1;
}



/* Entry: 104a5a950; end: 104a5a957; -[GTMSessionFetcherService setStopFetchingTriggersCompletionHandler:] */

void FUN_104a5a950(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x83) = param_3;
  return;
}



/* Entry: 104a5a958; end: 104a5a963; -[GTMSessionFetcherService skipBackgroundTask] */

byte FUN_104a5a958(long param_1)

{
  return *(byte *)(param_1 + 0x84) & 1;
}



/* Entry: 104a5a964; end: 104a5a96b; -[GTMSessionFetcherService setSkipBackgroundTask:] */

void FUN_104a5a964(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x84) = param_3;
  return;
}



/* Entry: 104a5a96c; end: 104a5aa7f; -[GTMSessionFetcherService .cxx_destruct] */

void FUN_104a5a96c(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a5aa80; end: 104a5ab63; +[GTMSessionFetcherService mockFetcherServiceWithFakedData:fakedError:] */

void FUN_104a5aa80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010bdc3460(puVar1,param_2,&PTR____CFConstantStringClassReference_110da9bb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
  _objc_alloc(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
  func_0x00010c057ca0();
  func_0x00010c0cf5e0(param_1,param_2,param_3,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a5ab64; end: 104a5ac73; +[GTMSessionFetcherService mockFetcherServiceWithFakedData:fakedResponse:fakedError:] */

void FUN_104a5ab64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_alloc_init(param_1);
  func_0x00010c167400();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104a5ac74;
  puStack_60 = &UNK_1107c0358;
  uStack_58 = param_4;
  uStack_50 = param_3;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c212ee0(param_1,param_2,&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a5ac74; end: 104a5ac8b;  */

void FUN_104a5ac74(long param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000104a5ac88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))
            (param_3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104a5ac8c; end: 104a5ae0f; -[GTMSessionFetcherService waitForCompletionOfAllFetchersWithTimeout:] */

undefined8 FUN_104a5ac8c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x70);
  *(undefined **)(param_2 + 0x70) = puVar2;
  _objc_release(uVar7);
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  while( true ) {
    lVar3 = param_2;
    func_0x00010c0dedc0();
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_2 + 0x70);
      func_0x00010bf529e0();
      if (lVar3 == 0) {
        uVar7 = 1;
        goto LAB_104a5add8;
      }
    }
    func_0x00010c26f3a0(puVar1);
    if (param_1 < 0.0) break;
    lVar3 = *(long *)(param_2 + 0x70);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c12d360(*(undefined8 *)(param_2 + 0x70),param_3,lVar3);
      func_0x00010c2a12a0(0x3f847ae147ae147b,lVar3);
    }
    param_1 = 0.001;
    if ((int)puVar2 == 0) {
      func_0x00010c23e800(PTR__OBJC_CLASS___NSThread_1126b47e0);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf65600(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142a80();
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
  }
  uVar7 = 0;
LAB_104a5add8:
  uVar6 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  _objc_release(uVar6);
  _objc_release(puVar1);
  return uVar7;
}



/* Entry: 104a5ae10; end: 104a5ae3f; -[GTMSessionFetcherSessionDelegateDispatcher init] */

undefined8 FUN_104a5ae10(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf879a0(param_1,param_2,param_2);
  _objc_release(param_1);
  return 0;
}



/* Entry: 104a5ae40; end: 104a5aebf; -[GTMSessionFetcherSessionDelegateDispatcher description] */

void FUN_104a5ae40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010bf529e0();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da9bd8);
  return;
}



/* Entry: 104a5aec0; end: 104a5af03; -[GTMSessionFetcherSessionDelegateDispatcher discardTimer] */

void FUN_104a5aec0(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5af04; end: 104a5afc7; -[GTMSessionFetcherSessionDelegateDispatcher startDiscardTimer] */

void FUN_104a5af04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  if (0.0 < *(double *)(param_1 + 0x28)) {
    puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c270940(PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                        PTR_s_discardTimerFired__1125256b8,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar1);
    func_0x00010c216ce0(*(double *)(param_1 + 0x28) / 10.0,*(undefined8 *)(param_1 + 0x20));
    puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 104a5afc8; end: 104a5aff3; -[GTMSessionFetcherSessionDelegateDispatcher destroyDiscardTimer] */

void FUN_104a5afc8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a5aff4; end: 104a5b08f; -[GTMSessionFetcherSessionDelegateDispatcher discardTimerFired:] */

void FUN_104a5aff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  _objc_sync_enter();
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
  }
  else {
    lVar1 = 0;
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010c139620(lVar1,param_2,param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a5b090; end: 104a5b0db; -[GTMSessionFetcherSessionDelegateDispatcher abandon] */

void FUN_104a5b090(undefined8 param_1)

{
  _objc_retain();
  _objc_sync_enter();
  func_0x00010bf6f0e0(param_1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5b0dc; end: 104a5b127; -[GTMSessionFetcherSessionDelegateDispatcher startSessionUsage] */

void FUN_104a5b0dc(undefined8 param_1)

{
  _objc_retain();
  _objc_sync_enter();
  func_0x00010bf6efc0(param_1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5b128; end: 104a5b157; -[GTMSessionFetcherSessionDelegateDispatcher destroySessionAndTimer] */

void FUN_104a5b128(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6efc0();
  func_0x00010bfafc60(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a5b158; end: 104a5b21f; -[GTMSessionFetcherSessionDelegateDispatcher setFetcher:forTask:] */

void FUN_104a5b158(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain();
  _objc_sync_enter();
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar2);
  }
  if (param_3 != 0) {
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4);
    func_0x00010bf6efc0(param_1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a5b220; end: 104a5b2c7; -[GTMSessionFetcherSessionDelegateDispatcher removeFetcher:] */

void FUN_104a5b220(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf00320(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d4a0(*(undefined8 *)(param_1 + 0x18),param_2,uVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010c24e9c0(param_1);
  }
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a5b2c8; end: 104a5b34f; -[GTMSessionFetcherSessionDelegateDispatcher fetcherForTask:] */

void FUN_104a5b2c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
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



/* Entry: 104a5b350; end: 104a5b3bb; -[GTMSessionFetcherSessionDelegateDispatcher removeTaskFromMap:] */

void FUN_104a5b350(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain();
  _objc_sync_enter();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a5b3bc; end: 104a5b40b; -[GTMSessionFetcherSessionDelegateDispatcher setSession:] */

void FUN_104a5b3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5b40c; end: 104a5b44f; -[GTMSessionFetcherSessionDelegateDispatcher session] */

void FUN_104a5b40c(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5b450; end: 104a5b493; -[GTMSessionFetcherSessionDelegateDispatcher discardInterval] */

undefined8 FUN_104a5b450(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a5b494; end: 104a5b4d3; -[GTMSessionFetcherSessionDelegateDispatcher setDiscardInterval:] */

void FUN_104a5b494(undefined8 param_1,long param_2)

{
  _objc_retain();
  _objc_sync_enter();
  *(undefined8 *)(param_2 + 0x28) = param_1;
  _objc_sync_exit(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104a5b4d4; end: 104a5b69b; -[GTMSessionFetcherSessionDelegateDispatcher URLSession:didBecomeInvalidWithError:] */

void FUN_104a5b4d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uVar1 = param_3;
  _objc_retain();
  func_0x00010bf97ce0(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  ppuVar5 = &PTR____CFConstantStringClassReference_110da9b58;
  func_0x00010c1049a0(puVar4);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain(param_2);
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = *(undefined ***)(param_4 + 0x20);
  _objc_release();
  if (ppuVar5 == ppuVar7) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3280(*(undefined8 *)(param_4 + 0x28));
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104a5b69c; end: 104a5b73b;  */

void FUN_104a5b69c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_release();
  if (param_3 == lVar2) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3280(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104a5b73c; end: 104a5b80f; -[GTMSessionFetcherSessionDelegateDispatcher URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:] */

void FUN_104a5b73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfabaa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3320();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5b810; end: 104a5b8c7; -[GTMSessionFetcherSessionDelegateDispatcher URLSession:task:didReceiveChallenge:completionHandler:] */

void FUN_104a5b810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfabaa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc32c0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5b8c8; end: 104a5b95b; -[GTMSessionFetcherSessionDelegateDispatcher URLSession:task:needNewBodyStream:] */

void FUN_104a5b8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfabaa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3300();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5b95c; end: 104a5b9f3; -[GTMSessionFetcherSessionDelegateDispatcher URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:] */

void FUN_104a5b95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfabaa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc32e0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5b9f4; end: 104a5ba9f; -[GTMSessionFetcherSessionDelegateDispatcher URLSession:task:didCompleteWithError:] */

void FUN_104a5b9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfabaa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e9c0(param_1,param_2,param_4);
  func_0x00010bdc3280(uVar1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a5baa0; end: 104a5bb33; -[GTMSessionFetcherSessionDelegateDispatcher URLSession:task:didFinishCollectingMetrics:] */

void FUN_104a5baa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfabaa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc32a0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5bb34; end: 104a5bbeb; -[GTMSessionFetcherSessionDelegateDispatcher URLSession:dataTask:didReceiveResponse:completionHandler:] */

void FUN_104a5bb34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfabaa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc31e0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5bbec; end: 104a5bcab; -[GTMSessionFetcherSessionDelegateDispatcher URLSession:dataTask:didBecomeDownloadTask:] */

void FUN_104a5bbec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bfabaa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e9c0(param_1,param_2,param_4);
  if (lVar1 != 0) {
    func_0x00010c19b620(param_1,param_2,lVar1,param_5);
  }
  func_0x00010bdc31a0(lVar1,param_2,param_3,param_4,param_5);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a5bcac; end: 104a5bd3f; -[GTMSessionFetcherSessionDelegateDispatcher URLSession:dataTask:didReceiveData:] */

void FUN_104a5bcac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfabaa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc31c0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5bd40; end: 104a5bdf7; -[GTMSessionFetcherSessionDelegateDispatcher URLSession:dataTask:willCacheResponse:completionHandler:] */

void FUN_104a5bd40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfabaa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3200();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5bdf8; end: 104a5be8b; -[GTMSessionFetcherSessionDelegateDispatcher URLSession:downloadTask:didFinishDownloadingToURL:] */

void FUN_104a5bdf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfabaa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3220();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5be8c; end: 104a5bf23; -[GTMSessionFetcherSessionDelegateDispatcher URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:] */

void FUN_104a5be8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfabaa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3260();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5bf24; end: 104a5bfb3; -[GTMSessionFetcherSessionDelegateDispatcher URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:] */

void FUN_104a5bf24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfabaa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3240();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5bfb4; end: 104a5bff7; -[GTMSessionFetcherSessionDelegateDispatcher .cxx_destruct] */

void FUN_104a5bfb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104a5bff8; end: 104a5c047; -[GTMSessionUploadFetcher nextUploadRetryIntervalUnsynchronized] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104a5bff8(long param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_1 + _DAT_11270f728);
  dVar1 = *(double *)(param_1 + _DAT_11270f720) * *(double *)(param_1 + _DAT_11270f724);
  dVar2 = dVar1;
  if (dVar3 <= dVar1) {
    dVar2 = dVar3;
  }
  if (dVar3 <= 0.0) {
    dVar2 = dVar1;
  }
  dVar1 = *(double *)(param_1 + _DAT_11270f72c);
  if (*(double *)(param_1 + _DAT_11270f72c) <= dVar2) {
    dVar1 = dVar2;
  }
  return dVar1;
}



/* Entry: 104a5c048; end: 104a5c0eb; +[GTMSessionUploadFetcher uploadFetcherWithRequest:uploadMIMEType:chunkSize:fetcherService:] */

void FUN_104a5c048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c28dd40(param_1,param_2,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf01a40(param_3);
  _objc_release(param_3);
  func_0x00010c1bfea0(param_1,param_2,0,param_4,param_5,uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a5c0ec; end: 104a5c0f7; +[GTMSessionUploadFetcher uploadFetcherWithLocation:uploadMIMEType:chunkSize:fetcherService:] */

void FUN_104a5c0ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28dcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_uploadFetcherWithLocation_upload_112681160);
  return;
}



/* Entry: 104a5c0f8; end: 104a5c18f; +[GTMSessionUploadFetcher uploadFetcherWithLocation:uploadMIMEType:chunkSize:allowsCellularAccess:fetcherService:] */

void FUN_104a5c0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c28dd40(param_1,param_2,0,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bfea0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a5c190; end: 104a5c46b; +[GTMSessionUploadFetcher uploadFetcherForSessionIdentifierMetadata:] */

void FUN_104a5c190(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_68;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0b4ca0();
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da9c58);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      param_1 = 0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da9c98);
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        puStack_68 = (undefined *)0x0;
      }
      else {
        puStack_68 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar6 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da9cb8);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da9cd8);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar7;
      func_0x00010c0b4ca0();
      _objc_release(lVar7);
      lVar7 = 0x7fffffffffffffff;
      if (0 < lVar11) {
        lVar7 = lVar11;
      }
      lVar11 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da9cf8);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar11;
      func_0x00010c0b4ca0();
      _objc_release(lVar11);
      lVar11 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da9d18);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar11 == 0) {
        lVar11 = 1;
      }
      else {
        lVar9 = param_3;
        func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da9d18);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar9;
        func_0x00010bf1f3c0();
        _objc_release(lVar9);
      }
      if (lVar2 < lVar8) {
        param_1 = 0;
      }
      else {
        func_0x00010c28dce0(param_1,param_2,puStack_68,lVar6,lVar7,lVar11,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21cd40();
        func_0x00010c21cd60(param_1,param_2,puVar4);
        func_0x00010c1fdf20(param_1,param_2,param_3);
        func_0x00010c21d5e0(param_1,param_2,1);
        func_0x00010c1876a0(param_1,param_2,lVar8);
        uVar10 = param_1;
        func_0x00010bf28660(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18b680(param_1,param_2,uVar10);
        _objc_release(uVar10);
        func_0x00010c167400(param_1,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117e1c0);
      }
      _objc_release(lVar6);
      _objc_release(puStack_68);
      _objc_release(lVar5);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a5c46c; end: 104a5c51f; +[GTMSessionUploadFetcher uploadFetcherWithRequest:fetcherService:] */

void FUN_104a5c46c(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae130;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bfabbe0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = param_4;
    func_0x00010bfabc00(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  func_0x00010c21d5e0(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a5c520; end: 104a5c69b; +[GTMSessionUploadFetcher uploadFetcherForSessionIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5c520(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c28dda0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf52a60();
  uVar7 = 0;
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_1);
        }
        uVar7 = *(ulong *)(lStack_128 + lVar9 * 8);
        uVar2 = uVar7;
        func_0x00010bf39440();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c160000();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        puVar6 = (undefined8 *)param_3;
        func_0x00010c071ae0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar4 & 1) != 0) {
          _objc_retain();
          goto LAB_104a5c644;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    uVar7 = 0;
  }
LAB_104a5c644:
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  ___stack_chk_fail();
  puVar5 = (undefined1 *)puVar6;
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if (*(undefined1 **)(param_3 + _DAT_11270f738) == puVar5) {
    _objc_sync_exit(param_3);
    _objc_release(param_3);
  }
  else {
    _objc_storeStrong(param_3 + _DAT_11270f738,puVar6);
    _objc_sync_exit(param_3);
    _objc_release(param_3);
    func_0x00010c229360(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 104a5c69c; end: 104a5c72f; -[GTMSessionUploadFetcher setUploadData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5c69c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if (*(long *)(param_1 + _DAT_11270f738) == lVar1) {
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  else {
    _objc_storeStrong(param_1 + _DAT_11270f738,param_3);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    func_0x00010c229360(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a5c730; end: 104a5c77b; -[GTMSessionUploadFetcher uploadData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5c730(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f738);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5c77c; end: 104a5c80f; -[GTMSessionUploadFetcher setUploadFileHandle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5c77c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if (*(long *)(param_1 + _DAT_11270f73c) == lVar1) {
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  else {
    _objc_storeStrong(param_1 + _DAT_11270f73c,param_3);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    func_0x00010c229360(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a5c810; end: 104a5c85b; -[GTMSessionUploadFetcher uploadFileHandle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5c810(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f73c);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5c85c; end: 104a5c8ef; -[GTMSessionUploadFetcher setUploadFileURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5c85c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if (*(long *)(param_1 + _DAT_11270f740) == lVar1) {
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  else {
    _objc_storeStrong(param_1 + _DAT_11270f740,param_3);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    func_0x00010c229360(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a5c8f0; end: 104a5c93b; -[GTMSessionUploadFetcher uploadFileURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5c8f0(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f740);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5c93c; end: 104a5c98f; -[GTMSessionUploadFetcher setUploadFileLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5c93c(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain();
  _objc_sync_enter();
  if ((param_3 != -1) && (*(long *)(param_1 + _DAT_11270f744) == -1)) {
    *(long *)(param_1 + _DAT_11270f744) = param_3;
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5c990; end: 104a5ca2f; -[GTMSessionUploadFetcher setUploadDataLength:provider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5c990(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_4;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11270f748);
  *(undefined8 *)(param_1 + _DAT_11270f748) = uVar1;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + _DAT_11270f744) = param_3;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010c229360(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104a5ca30; end: 104a5ca7b; -[GTMSessionUploadFetcher uploadDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5ca30(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f748);
  _objc_retainBlock(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5ca7c; end: 104a5cad3; -[GTMSessionUploadFetcher setUploadMIMEType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5ca7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f74c);
  *(undefined8 *)(param_1 + _DAT_11270f74c) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5cad4; end: 104a5cb1f; -[GTMSessionUploadFetcher uploadMIMEType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5cad4(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f74c);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5cb20; end: 104a5cb63; -[GTMSessionUploadFetcher chunkSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a5cb20(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f750);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a5cb64; end: 104a5cd6b; -[GTMSessionUploadFetcher setupRequestHeaders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5cb64(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  if (lVar2 == 0) goto LAB_104a5cd50;
  func_0x00010c2201e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110da9df8,
                      &PTR____CFConstantStringClassReference_110da9dd8);
  func_0x00010c2201e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110dbf578,
                      &PTR____CFConstantStringClassReference_110da9d58);
  func_0x00010c2201e0(lVar2,param_2,*(undefined8 *)(param_1 + _DAT_11270f74c),
                      &PTR____CFConstantStringClassReference_110da9d98);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010bfbbdc0(param_1);
  func_0x00010c0df7c0(puVar3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2201e0(lVar2,param_2,puVar4,&PTR____CFConstantStringClassReference_110da9d78);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar1 = lVar2;
  func_0x00010bdc16c0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) ||
     (lVar5 = lVar1,
     func_0x00010bf32ee0(lVar1,param_2,&PTR____CFConstantStringClassReference_110deec98), lVar5 == 0
     )) {
    func_0x00010c1a4fc0(lVar2,param_2,&PTR____CFConstantStringClassReference_110dada18);
  }
  lVar5 = lVar2;
  func_0x00010c296ee0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e2d8f8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
LAB_104a5ccc4:
    lVar6 = lVar5;
    func_0x00010c08fa60();
    lVar7 = lVar5;
    if (lVar6 == 0) {
      FUN_104a57db4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar7 = lVar6;
    }
    lVar5 = lVar7;
    func_0x00010c25cde0(lVar7,param_2,&PTR____CFConstantStringClassReference_110e46278);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    func_0x00010c2201e0(lVar2,param_2,lVar5,&PTR____CFConstantStringClassReference_110e2d8f8);
  }
  else {
    lVar6 = lVar5;
    func_0x00010c11f420(lVar5,param_2,&PTR____CFConstantStringClassReference_110da9ed8);
    if (lVar6 == 0x7fffffffffffffff) goto LAB_104a5ccc4;
  }
  func_0x00010c1ebac0(param_1,param_2,lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
LAB_104a5cd50:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104a5cd6c; end: 104a5ce5f; -[GTMSessionUploadFetcher setLocationURL:uploadMIMEType:chunkSize:allowsCellularAccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5cd6c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  *(undefined1 *)(param_1 + _DAT_11270f754) = param_6;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f758);
  *(long *)(param_1 + _DAT_11270f758) = param_3;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f74c);
  *(undefined8 *)(param_1 + _DAT_11270f74c) = param_4;
  _objc_release(uVar1);
  _objc_release(param_3);
  *(undefined8 *)(param_1 + _DAT_11270f750) = param_5;
  *(undefined8 *)(param_1 + _DAT_11270f744) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + _DAT_11270f75c) = 0xffffffffffffffff;
  *(bool *)(param_1 + _DAT_11270f760) = param_3 != 0;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5ce60; end: 104a5cfa3; -[GTMSessionUploadFetcher fullUploadLength] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104a5ce60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_sync_enter();
  lVar1 = *(long *)(param_1 + _DAT_11270f738);
  if (lVar1 == 0) {
    lVar5 = (long)_DAT_11270f744;
    lVar1 = *(long *)(param_1 + lVar5);
    if (lVar1 == -1) {
      lVar1 = *(long *)(param_1 + _DAT_11270f73c);
      if (lVar1 == 0) {
        if (*(long *)(param_1 + _DAT_11270f748) == 0) {
          uVar2 = *(undefined8 *)(param_1 + _DAT_11270f740);
          uStack_48 = 0;
          uStack_50 = 0;
          func_0x00010bfc99e0(uVar2,param_2,&uStack_48,
                              *(undefined8 *)PTR__NSURLFileSizeKey_11034ab08,&uStack_50);
          uVar3 = uStack_48;
          _objc_retain();
          uVar4 = uStack_50;
          _objc_retain(uStack_50);
          if ((int)uVar2 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = uVar3;
            func_0x00010c0b4ca0();
          }
          *(undefined8 *)(param_1 + lVar5) = uVar2;
          _objc_release(uVar4);
          _objc_release(uVar3);
          lVar1 = *(long *)(param_1 + lVar5);
        }
        else {
          lVar1 = -1;
        }
      }
      else {
        func_0x00010c157180();
        *(long *)(param_1 + lVar5) = lVar1;
      }
    }
  }
  else {
    func_0x00010c08fa60();
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104a5cfa4; end: 104a5d313; -[GTMSessionUploadFetcher generateChunkSubdataWithOffset:length:response:] */

void FUN_104a5cfa4(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c28db00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    (**(code **)(puVar1 + 0x10))(puVar1,param_3,param_4,param_5);
    goto LAB_104a5d254;
  }
  puVar2 = param_1;
  func_0x00010c28daa0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010c28de00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar5 = param_1;
      func_0x00010c28ddc0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0;
      _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      uStack_e0 = 0x104a5d328;
      puStack_d8 = &UNK_1108846d8;
      lVar6 = param_5;
      puStack_d0 = param_1;
      puStack_c8 = puVar5;
      lStack_b8 = param_3;
      puStack_b0 = param_4;
      _objc_retain();
      lStack_c0 = lVar6;
      _objc_retain(puVar5);
      func_0x00010007380c(uVar4,&puStack_f0);
      _objc_release(uVar4);
      _objc_release(lStack_c0);
      _objc_release(puStack_c8);
    }
    else {
      uVar4 = 0;
      _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_104a5d314;
      puStack_90 = &UNK_1108846d8;
      puVar5 = puVar3;
      puStack_88 = param_1;
      _objc_retain();
      lVar6 = param_5;
      puStack_80 = puVar5;
      lStack_70 = param_3;
      puStack_68 = param_4;
      _objc_retain();
      lStack_78 = lVar6;
      func_0x00010007380c(uVar4,&puStack_a8);
      _objc_release(uVar4);
      _objc_release(lStack_78);
      puVar5 = puStack_80;
    }
    _objc_release(puVar5);
  }
  else {
    puVar3 = puVar2;
    if ((param_3 == 0) && (puVar5 = puVar2, func_0x00010c08fa60(), puVar5 == param_4)) {
      _objc_retain(puVar2);
    }
    else {
      puVar5 = puVar2;
      func_0x00010c08fa60();
      if ((long)puVar5 < (long)(param_4 + param_3)) {
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28da60(param_1);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_5 + 0x10))(param_5,0,0xffffffffffffffff,param_1);
        _objc_release(param_1);
        goto LAB_104a5d248;
      }
      func_0x00010c25eac0(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    (**(code **)(param_5 + 0x10))(param_5,puVar3,0xffffffffffffffff,0);
  }
LAB_104a5d248:
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_104a5d254:
  _objc_release(puVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 104a5d314; end: 104a5d33b;  */

void FUN_104a5d314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbf270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_generateChunkSubdataFromFileURL__1125cd640,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104a5d33c; end: 104a5d45b; -[GTMSessionUploadFetcher generateChunkSubdataFromFileHandle:offset:length:response:] */

void FUN_104a5d33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  func_0x00010c1571a0(param_3);
  uVar1 = param_3;
  func_0x00010c121360(param_3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_6 + 0x10))(param_6,uVar1,0xffffffffffffffff,0);
  _objc_release(0);
  _objc_release(uVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a5d45c; end: 104a5d683; -[GTMSessionUploadFetcher generateChunkSubdataFromFileURL:offset:length:response:] */

void FUN_104a5d45c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfbbdc0();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  _objc_retain();
  if (puVar2 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSFileHandle_1126bc690;
    func_0x00010bfacce0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    _objc_retain(uVar3);
    _objc_release(uVar3);
    uVar3 = uVar5;
    if (puVar6 != (undefined *)0x0) {
      func_0x00010bfbf240(param_1);
      _objc_release(puVar6);
      puVar6 = (undefined *)0x0;
      goto LAB_104a5d63c;
    }
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar2;
    func_0x00010c08fa60();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 < (undefined *)(param_5 + param_4)) {
      func_0x00010c08fa60();
      func_0x00010c25d9e0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28da60(param_1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,0,0xffffffffffffffff,param_1);
      _objc_release(param_1);
      _objc_release(puVar6);
      puVar6 = (undefined *)0x0;
      goto LAB_104a5d63c;
    }
    puVar6 = puVar2;
    if ((param_4 < 1) && (lVar1 <= param_5)) {
      _objc_retain(puVar2);
    }
    else {
      func_0x00010c25eac0(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  (**(code **)(param_6 + 0x10))(param_6,puVar6,0xffffffffffffffff,uVar3);
LAB_104a5d63c:
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 104a5d684; end: 104a5d757; -[GTMSessionUploadFetcher uploadChunkUnavailableErrorWithDescription:] */

/* WARNING: Possible PIC construction at 0x000104a5d704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a5d708) */
/* WARNING: Removing unreachable block (ram,0x000104a5d754) */
/* WARNING: Removing unreachable block (ram,0x000104a5d73c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

void FUN_104a5d684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(param_3);
  func_0x00010bf72080(puVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110da95f8,0xfffffffffffffffe,puVar1);
  return;
}



/* Entry: 104a5d758; end: 104a5d777; -[GTMSessionUploadFetcher prematureFailureErrorWithUserInfo:] */

void FUN_104a5d758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110da9618,0x1f5,param_3);
  return;
}



/* Entry: 104a5d778; end: 104a5d807; +[GTMSessionUploadFetcher uploadStatusFromResponseHeaders:] */

undefined8 FUN_104a5d778(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110da9e38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c071ae0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c071ae0(param_3,param_2,&PTR____CFConstantStringClassReference_110da9f38);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,&PTR____CFConstantStringClassReference_110df6498);
      uVar2 = 3;
      if ((int)uVar1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104a5d808; end: 104a5d87b; -[GTMSessionUploadFetcher setCompletionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5d808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = param_3;
  _objc_retainBlock();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11270f764);
  *(undefined8 *)(param_1 + _DAT_11270f764) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5d87c; end: 104a5d8d3; -[GTMSessionUploadFetcher setDelegateCallbackQueue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5d87c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f768);
  *(undefined8 *)(param_1 + _DAT_11270f768) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5d8d4; end: 104a5d91f; -[GTMSessionUploadFetcher delegateCallbackQueue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5d8d4(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f768);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5d920; end: 104a5d963; -[GTMSessionUploadFetcher isRestartedUpload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104a5d920(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined1 *)(param_1 + _DAT_11270f760);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a5d964; end: 104a5d9af; -[GTMSessionUploadFetcher chunkFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5d964(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f730);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5d9b0; end: 104a5da07; -[GTMSessionUploadFetcher setChunkFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5d9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f730);
  *(undefined8 *)(param_1 + _DAT_11270f730) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5da08; end: 104a5da5f; -[GTMSessionUploadFetcher setFetcherInFlight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5da08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f734);
  *(undefined8 *)(param_1 + _DAT_11270f734) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5da60; end: 104a5daab; -[GTMSessionUploadFetcher fetcherInFlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5da60(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f734);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


