/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ecbcf4; end: 106ecbcfb; -[SCSpectaclesProxyPasswordParser counter] */

undefined8 FUN_106ecbcf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ecbcfc; end: 106ecbd2b; -[SCSpectaclesProxyPasswordParser .cxx_destruct] */

void FUN_106ecbcfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ecbd2c; end: 106ecbe3f; -[SCSpectaclesProxyController initWithBlizzardLogger:backgroundTaskWrapper:] */

undefined1 * FUN_106ecbd2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7bd0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d3190;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d3198;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 8));
    uVar4 = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x28) = uVar4;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar3);
    if (param_3 != 0) {
      puVar2 = PTR_PTR_1126d31a0;
      _objc_alloc();
      func_0x00010bff8500();
      uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
      *(undefined **)((long)puVar1 + 0x30) = puVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ecbe40; end: 106ecbe83; -[SCSpectaclesProxyController dealloc] */

void FUN_106ecbe40(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be09740();
  puStack_28 = PTR_PTR_1126f7bd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106ecbe84; end: 106ecbe8b; -[SCSpectaclesProxyController totalBytesRead] */

void FUN_106ecbe84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2760f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_totalBytesRead_11267b260);
  return;
}



/* Entry: 106ecbe8c; end: 106ecbe93; -[SCSpectaclesProxyController totalBytesWritten] */

void FUN_106ecbe8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c276130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_totalBytesWritten_11267b270);
  return;
}



/* Entry: 106ecbe94; end: 106ecbed7; -[SCSpectaclesProxyController configureWithClient:] */

void FUN_106ecbe94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c07b700();
  if ((int)uVar1 != 0) {
    func_0x00010c1e5460(param_3,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ecbed8; end: 106ecbf37; -[SCSpectaclesProxyController _startBackgroundTask] */

void FUN_106ecbed8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x28) == *(long *)PTR__UIBackgroundTaskInvalid_110345af0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf17d00();
    *(undefined8 *)(param_1 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106ecbf38; end: 106ecbfb3; -[SCSpectaclesProxyController _endBackgroundTask] */

void FUN_106ecbf38(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
  }
  lVar2 = *(long *)PTR__UIBackgroundTaskInvalid_110345af0;
  if (*(long *)(param_1 + 0x28) != lVar2) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94260();
    _objc_release(uVar1);
    *(long *)(param_1 + 0x28) = lVar2;
  }
  return;
}



/* Entry: 106ecbfb4; end: 106ecc0cf; -[SCSpectaclesProxyController _setupBackgroundTaskWithTimeoutInterval] */

void FUN_106ecbfb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x20) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x28) == *(long *)PTR__UIBackgroundTaskInvalid_110345af0) {
    func_0x00010bebf860(param_1);
  }
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106ecc0d0;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_60);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fe0(0x4072c00000000000);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106ecc0d0; end: 106ecc12f;  */

void FUN_106ecc0d0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf48b60();
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c119da0();
    _objc_release(lVar1);
    func_0x00010be09740(param_1);
  }
  else {
    func_0x00010beaaca0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ecc130; end: 106ecc187; -[SCSpectaclesProxyController socksProxy:clientDidConnect:] */

void FUN_106ecc130(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  func_0x00010beaaca0();
  uVar1 = param_1;
  func_0x00010bf48c20();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010c180e40(param_1,param_2,1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c119d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106ecc188; end: 106ecc18b; -[SCSpectaclesProxyController socksProxy:clientDidDisconnect:] */

void FUN_106ecc188(void)

{
  return;
}



/* Entry: 106ecc18c; end: 106ecc213; -[SCSpectaclesProxyController socksProxy:shouldAcceptConnectionForUsername:password:] */

undefined8
FUN_106ecc18c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d31a8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c05f680();
  _objc_release(param_5);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c298540(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 106ecc214; end: 106ecc337; -[SCSpectaclesProxyController startProxyOnPort:error:] */

void FUN_106ecc214(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c250100(*(undefined8 *)(param_1 + 8));
  _objc_initWeak(auStack_38,param_1);
  func_0x00010bfc0000(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = uVar2;
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ad300(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = uVar2;
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c24f560(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106ecc338; end: 106ecc397;  */

void FUN_106ecc338(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c276120();
  *param_2 = lVar2;
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c2760e0();
  *param_3 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ecc398; end: 106ecc407; -[SCSpectaclesProxyController stopProxy] */

void FUN_106ecc398(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf81280(*(undefined8 *)(param_1 + 8));
  func_0x00010c256320(*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = uVar2;
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ad320(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c180e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setConnectionEstablished__11263ddb0,0);
  return;
}



/* Entry: 106ecc408; end: 106ecc4db; -[SCSpectaclesProxyController startProxyForClient:] */

/* WARNING: Removing unreachable block (ram,0x000106ecc4b0) */

void FUN_106ecc408(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c07b700();
  if ((int)uVar2 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 == 0) {
      _objc_storeWeak(param_1 + 0x10,param_3);
      func_0x00010c104060(param_3);
      func_0x00010c250100(param_1);
      _objc_retain(0);
    }
    func_0x00010beaaca0(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfbf3c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c119e60(param_3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106ecc4dc; end: 106ecc557; -[SCSpectaclesProxyController stopProxyForClient:] */

void FUN_106ecc4dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 != param_3) {
    return;
  }
  func_0x00010c256680(param_1);
  _objc_storeWeak(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010be09750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endBackgroundTask_11255ff70);
  return;
}



/* Entry: 106ecc558; end: 106ecc55f; -[SCSpectaclesProxyController connectionEstablished] */

undefined1 FUN_106ecc558(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 106ecc560; end: 106ecc567; -[SCSpectaclesProxyController setConnectionEstablished:] */

void FUN_106ecc560(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 106ecc568; end: 106ecc5c3; -[SCSpectaclesProxyController .cxx_destruct] */

void FUN_106ecc568(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ecc5c4; end: 106ecc647; -[SCSpectaclesWebProxyLogger initWithBlizzardLogger:] */

undefined1 * FUN_106ecc5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7bd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010bfc0000(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ecc648; end: 106ecc68f; -[SCSpectaclesWebProxyLogger generateSessionId] */

void FUN_106ecc648(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ecc690; end: 106ecc7c3; -[SCSpectaclesWebProxyLogger startMonitoringUsageForSessionId:callback:] */

void FUN_106ecc690(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c069d00(uVar5);
  puVar4 = PTR_PTR_1126bc890;
  puVar1 = PTR_s__sampleWithBlock__112535d40;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e8b098;
  lVar2 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e8b0b8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_58 = lVar2;
  uStack_50 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1503c0(0x4024000000000000,puVar4,param_2,param_1,puVar1,puVar3,1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar4;
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c069d00(*(undefined8 *)(lVar2 + 0x10));
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106ecc7c4; end: 106ecc7ef; -[SCSpectaclesWebProxyLogger stopMonitoringUsage] */

void FUN_106ecc7c4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ecc7f0; end: 106ecc89f; -[SCSpectaclesWebProxyLogger _sampleWithBlock:] */

void FUN_106ecc7f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uStack_40 = 0;
  uStack_38 = 0;
  (**(code **)(lVar1 + 0x10))(lVar1,&uStack_38,&uStack_40);
  func_0x00010c0ad2e0(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106ecc8a0; end: 106ecc937; -[SCSpectaclesWebProxyLogger logProxyStart:success:failureReason:] */

void FUN_106ecc8a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d31b0;
  lVar2 = -(ulong)(param_5 != 1);
  if (param_5 == 2) {
    lVar2 = 1;
  }
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1e5500();
  _objc_release(param_3);
  func_0x00010c19a060(puVar1,param_2,lVar2);
  func_0x00010c20f8a0(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ecc938; end: 106ecc9cf; -[SCSpectaclesWebProxyLogger logProxyStopped:withError:failureReason:] */

void FUN_106ecc938(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d31b8;
  lVar2 = -(ulong)(param_5 != 1);
  if (param_5 == 2) {
    lVar2 = 1;
  }
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1e5500();
  _objc_release(param_3);
  func_0x00010c19a060(puVar1,param_2,lVar2);
  func_0x00010c226240(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ecc9d0; end: 106ecca5b; -[SCSpectaclesWebProxyLogger logProxyBandwidthUsed:received:sent:] */

void FUN_106ecc9d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d31c0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c174d40();
  func_0x00010c174d20(puVar1,param_2,param_4);
  func_0x00010c1e5500(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ecca5c; end: 106ecca63; -[SCSpectaclesWebProxyLogger sessionId] */

undefined8 FUN_106ecca5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ecca64; end: 106ecca9f; -[SCSpectaclesWebProxyLogger .cxx_destruct] */

void FUN_106ecca64(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106eccaa0; end: 106eccae3; -[SOCKSProxy dealloc] */

void FUN_106eccaa0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf81280();
  puStack_28 = PTR_PTR_1126f7be0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106eccae4; end: 106eccb8f; -[SOCKSProxy init] */

undefined1 * FUN_106eccae4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7be0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = &UNK_10f3dec77;
    _dispatch_queue_create(&UNK_10f3dec77,0);
    func_0x00010c1be280(puVar1);
    _objc_release(puVar2);
    func_0x00010c175be0(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16ca80(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106eccb90; end: 106eccb97; -[SOCKSProxy startProxy] */

void FUN_106eccb90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2500f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startProxyOnPort__112671a60,0x235a);
  return;
}



/* Entry: 106eccb98; end: 106eccb9f; -[SOCKSProxy startProxyOnPort:] */

void FUN_106eccb98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c250110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startProxyOnPort_error__112671a68,param_3,0);
  return;
}



/* Entry: 106eccba0; end: 106eccc8b; -[SOCKSProxy startProxyOnPort:error:] */

long FUN_106eccba0(long param_1,undefined8 param_2,undefined2 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010bf81280();
  puVar1 = PTR_PTR_1126d31c8;
  _objc_alloc(PTR_PTR_1126d31c8);
  lVar2 = param_1;
  func_0x00010c09a4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a6a0(puVar1,param_2,param_1,lVar2);
  func_0x00010c1be2a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162aa0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  *(undefined2 *)(param_1 + 8) = param_3;
  func_0x00010c09a500(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beecac0();
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 106eccc8c; end: 106ecccfb; -[SOCKSProxy addAuthorizedUser:password:] */

void FUN_106eccc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf11160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ecccfc; end: 106eccd4b; -[SOCKSProxy removeAuthorizedUser:] */

void FUN_106ecccfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf11160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eccd4c; end: 106eccd7b; -[SOCKSProxy removeAllAuthorizedUsers] */

void FUN_106eccd4c(undefined8 param_1)

{
  func_0x00010bf11160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eccd7c; end: 106ecce83; -[SOCKSProxy checkAuthorizationForUser:password:] */

long FUN_106eccd7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bf11160();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_1);
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3;
      func_0x00010c0720c0(lVar3);
    }
  }
  else {
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c246440();
    _objc_release(param_3);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  return lVar4;
}



/* Entry: 106ecce84; end: 106ecd06f; -[SOCKSProxy socket:didAcceptNewSocket:] */

void FUN_106ecce84(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106ecd070;
  puStack_70 = &UNK_110842e18;
  _objc_retain(param_4);
  uStack_68 = param_4;
  func_0x00010c0f8440(param_4);
  puVar2 = PTR_PTR_1126d31d0;
  _objc_alloc();
  func_0x00010c04a340();
  uVar3 = param_1;
  func_0x00010bef0fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    uVar4 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    _objc_opt_respondsToSelector();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) != 0) {
      _objc_initWeak(auStack_90,param_1);
      uVar3 = param_1;
      func_0x00010bf28660(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = puVar1;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_106ecd078;
      puStack_b0 = &UNK_110848218;
      _objc_copyWeak(auStack_98,auStack_90);
      uStack_a8 = param_1;
      _objc_retain(puVar2);
      puStack_a0 = puVar2;
      func_0x00010007380c(uVar3,&puStack_c8);
      _objc_release(uVar3);
      _objc_release(puStack_a0);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_90);
    }
  }
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ecd070; end: 106ecd077;  */

void FUN_106ecd070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8f650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_enableBackgroundingOnSocket_1125c1738);
  return;
}



/* Entry: 106ecd078; end: 106ecd0cb;  */

void FUN_106ecd078(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246400();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ecd0cc; end: 106ecd107; -[SOCKSProxy connectionCount] */

undefined8 FUN_106ecd0cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bef0fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106ecd108; end: 106ecd20f; -[SOCKSProxy disconnect] */

void FUN_106ecd108(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010bef0fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c09a4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106ecd210;
  puStack_40 = &UNK_110842e18;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010007380c(uVar2,&puStack_58);
  _objc_release(uVar2);
  func_0x00010c162aa0(param_1);
  uVar2 = param_1;
  func_0x00010c09a500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf81280();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c09a500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  func_0x00010c1be2a0(param_1);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 106ecd210; end: 106ecd227;  */

void FUN_106ecd210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_enumerateObjectsUsingBlock__1125c3948,
             &PTR___NSConcreteGlobalBlock_110983088);
  return;
}



/* Entry: 106ecd228; end: 106ecd3a3; -[SOCKSProxy proxySocketDidDisconnect:withError:] */

void FUN_106ecd228(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bef0fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar1 = param_1;
      func_0x00010bf28660(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106ecd3a4;
      puStack_68 = &UNK_110848218;
      _objc_copyWeak(auStack_50,auStack_48);
      uStack_60 = param_1;
      _objc_retain(param_3);
      uStack_58 = param_3;
      func_0x00010007380c(uVar1,&puStack_80);
      _objc_release(uVar1);
      _objc_release(uStack_58);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ecd3a4; end: 106ecd3f7;  */

void FUN_106ecd3a4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246420();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ecd3f8; end: 106ecd423; -[SOCKSProxy proxySocket:didReadDataOfLength:] */

void FUN_106ecd3f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c2760e0();
                    /* WARNING: Could not recover jumptable at 0x00010c218030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTotalBytesRead__112663a30,lVar1 + param_4)
  ;
  return;
}



/* Entry: 106ecd424; end: 106ecd44f; -[SOCKSProxy proxySocket:didWriteDataOfLength:] */

void FUN_106ecd424(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c276120();
                    /* WARNING: Could not recover jumptable at 0x00010c218050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setTotalBytesWritten__112663a38,lVar1 + param_4);
  return;
}



/* Entry: 106ecd450; end: 106ecd45b; -[SOCKSProxy proxySocket:checkAuthorizationForUser:password:] */

void FUN_106ecd450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf37c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_checkAuthorizationForUser_passwo_1125ab8c0,param_4,param_5);
  return;
}



/* Entry: 106ecd45c; end: 106ecd487; -[SOCKSProxy resetNetworkStatistics] */

void FUN_106ecd45c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c218040(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c218030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTotalBytesRead__112663a30,0);
  return;
}



/* Entry: 106ecd488; end: 106ecd48f; -[SOCKSProxy listeningPort] */

undefined2 FUN_106ecd488(long param_1)

{
  return *(undefined2 *)(param_1 + 8);
}



/* Entry: 106ecd490; end: 106ecd4a7; -[SOCKSProxy delegate] */

void FUN_106ecd490(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ecd4a8; end: 106ecd4b3; -[SOCKSProxy setDelegate:] */

void FUN_106ecd4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106ecd4b4; end: 106ecd4bb; -[SOCKSProxy callbackQueue] */

undefined8 FUN_106ecd4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ecd4bc; end: 106ecd4eb; -[SOCKSProxy setCallbackQueue:] */

void FUN_106ecd4bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ecd4ec; end: 106ecd4f3; -[SOCKSProxy totalBytesWritten] */

undefined8 FUN_106ecd4ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ecd4f4; end: 106ecd4fb; -[SOCKSProxy setTotalBytesWritten:] */

void FUN_106ecd4f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 106ecd4fc; end: 106ecd503; -[SOCKSProxy totalBytesRead] */

undefined8 FUN_106ecd4fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ecd504; end: 106ecd50b; -[SOCKSProxy setTotalBytesRead:] */

void FUN_106ecd504(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 106ecd50c; end: 106ecd513; -[SOCKSProxy listeningSocket] */

undefined8 FUN_106ecd50c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ecd514; end: 106ecd543; -[SOCKSProxy setListeningSocket:] */

void FUN_106ecd514(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ecd544; end: 106ecd54b; -[SOCKSProxy listeningQueue] */

undefined8 FUN_106ecd544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106ecd54c; end: 106ecd57b; -[SOCKSProxy setListeningQueue:] */

void FUN_106ecd54c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ecd57c; end: 106ecd587; -[SOCKSProxy activeSockets] */

void FUN_106ecd57c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 106ecd588; end: 106ecd58f; -[SOCKSProxy setActiveSockets:] */

void FUN_106ecd588(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106ecd590; end: 106ecd597; -[SOCKSProxy authorizedUsers] */

undefined8 FUN_106ecd590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106ecd598; end: 106ecd5c7; -[SOCKSProxy setAuthorizedUsers:] */

void FUN_106ecd598(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ecd5c8; end: 106ecd623; -[SOCKSProxy .cxx_destruct] */

void FUN_106ecd5c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106ecd624; end: 106ecd667; -[SOCKSProxySocket dealloc] */

void FUN_106ecd624(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf81280();
  puStack_28 = PTR_PTR_1126f7be8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106ecd668; end: 106ecd813; -[SOCKSProxySocket initWithSocket:delegate:] */

undefined1 *
FUN_106ecd668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f7be8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    puVar2 = &UNK_10f3decab;
    _dispatch_queue_create(&UNK_10f3decab,0);
    func_0x00010c18b6c0(puVar1);
    _objc_release(puVar2);
    puVar2 = &UNK_10f3decd2;
    _dispatch_queue_create(&UNK_10f3decd2,0);
    func_0x00010c175be0(puVar1);
    _objc_release(puVar2);
    func_0x00010c1e5520(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c119f40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf6b120(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c119f40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b6c0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126d31c8;
    _objc_alloc(PTR_PTR_1126d31c8);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf6b120(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00a6a0(puVar2);
    func_0x00010c1d6e60(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
    func_0x00010c2463e0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ecd814; end: 106ecd87f; -[SOCKSProxySocket disconnect] */

void FUN_106ecd814(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c119f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf81280();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0eea60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf81280();
  _objc_release(uVar1);
  func_0x00010c1e5520(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1d6e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setOutgoingSocket__1126535c0,0);
  return;
}



/* Entry: 106ecd880; end: 106ece0af; -[SOCKSProxySocket socket:didReadData:withTag:] */

void FUN_106ecd880(ushort *param_1,undefined8 param_2,undefined8 param_3,ushort *param_4,
                  long param_5)

{
  char cVar1;
  undefined *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 < 0x27d9) {
    if (param_5 < 0x2777) {
      if (param_5 == 0x2774) {
        puVar3 = param_4;
        func_0x00010c08fa60();
        if (puVar3 != (ushort *)0x2) goto LAB_106ece05c;
        _objc_retainAutorelease();
        func_0x00010bf25f00();
        uVar8 = 0xbff0000000000000;
      }
      else {
        if (param_5 != 0x2775) {
          if ((param_5 != 0x2776) ||
             (puVar3 = param_4, func_0x00010c08fa60(), puVar3 < (ushort *)0x2)) goto LAB_106ece05c;
          func_0x00010c08fa60(param_4);
          puVar3 = param_4;
          func_0x00010c25eac0(param_4);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = (ushort *)PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
          func_0x00010c008340();
          func_0x00010c21f760(param_1);
          func_0x00010c08fa60(param_4);
          puVar5 = param_4;
          func_0x00010c25eac0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c08fa60();
          if (puVar6 == (ushort *)0x1) {
            _objc_retainAutorelease();
            func_0x00010bf25f00();
            func_0x00010c1213c0(0xbff0000000000000,param_3);
          }
          _objc_release(puVar5);
          goto LAB_106ece04c;
        }
        puVar3 = param_4;
        func_0x00010c08fa60();
        if (puVar3 != (ushort *)0x2) goto LAB_106ece05c;
        _objc_retainAutorelease();
        func_0x00010bf25f00();
        uVar8 = 0xbff0000000000000;
      }
    }
    else {
      if (param_5 == 0x2777) {
        puVar3 = (ushort *)PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x00010c008340();
        puVar4 = param_1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_1;
        func_0x00010c294420(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c119f60();
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar4 = (ushort *)PTR__OBJC_CLASS___NSData_1126ae778;
        if ((int)puVar6 == 0) {
          func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2bdb20(0xbff0000000000000,param_3);
          func_0x00010bf812a0(param_3);
        }
        else {
          func_0x00010bf64a00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2bdb20(0xbff0000000000000,param_3);
          func_0x00010c1213c0(0x4020000000000000,param_3);
        }
        func_0x00010c21f760(param_1);
LAB_106ece04c:
        _objc_release(puVar4);
        goto LAB_106ece058;
      }
      if (param_5 == 0x2778) {
        func_0x00010c08fa60(param_4);
        puVar7 = (undefined2 *)0x2;
        _malloc();
        *puVar7 = 0x205;
        puVar3 = (ushort *)PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bdb20(0xbff0000000000000,param_3);
        func_0x00010c1213c0(0xbff0000000000000,param_3);
        goto LAB_106ece058;
      }
      if (param_5 != 0x27d8) goto LAB_106ece05c;
      puVar3 = param_4;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      cVar1 = *(char *)((long)puVar3 + 3);
      if (cVar1 == '\x04') {
        uVar8 = 0xbff0000000000000;
      }
      else if (cVar1 == '\x03') {
        uVar8 = 0x4020000000000000;
      }
      else {
        if (cVar1 != '\x01') goto LAB_106ece05c;
        uVar8 = 0xbff0000000000000;
      }
    }
  }
  else {
    if (0x27e1 < param_5) {
      if (param_5 < 0x28a0) {
        if (param_5 == 0x27e2) {
          puVar3 = param_4;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          param_1[4] = *puVar3 >> 8 | *puVar3 << 8;
          puVar3 = param_1;
          func_0x00010c0eea60(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = param_1;
          func_0x00010bf6ec40(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6eda0(param_1);
          func_0x00010bf483e0(puVar3);
          goto LAB_106ece04c;
        }
        if (param_5 != 0x27e4) goto LAB_106ece05c;
        _objc_retainAutorelease();
        func_0x00010bf25f00();
        uVar8 = 0x4020000000000000;
        goto LAB_106ecde6c;
      }
      if (param_5 == 0x28a0) {
        puVar3 = param_1;
        func_0x00010c0eea60(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bdb20(0xbff0000000000000);
        _objc_release(puVar3);
        puVar3 = param_1;
        func_0x00010c0eea60(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c121420(0xbff0000000000000);
        _objc_release(puVar3);
        puVar3 = param_1;
        func_0x00010c119f40(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c121420(0xbff0000000000000);
        _objc_release(puVar3);
        func_0x00010c08fa60();
        func_0x00010c276120(param_1);
        func_0x00010c218040(param_1);
        puVar3 = param_1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (ushort *)0x0) goto LAB_106ece05c;
        puVar4 = param_1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        _objc_opt_respondsToSelector();
        _objc_release(puVar4);
        _objc_release(puVar3);
        if (((ulong)puVar5 & 1) == 0) goto LAB_106ece05c;
        func_0x00010bf28660(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_1;
      }
      else {
        if (param_5 != 0x2904) goto LAB_106ece05c;
        puVar3 = param_1;
        func_0x00010c119f40(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bdb20(0xbff0000000000000);
        _objc_release(puVar3);
        puVar3 = param_1;
        func_0x00010c119f40(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c121420(0xbff0000000000000);
        _objc_release(puVar3);
        puVar3 = param_1;
        func_0x00010c0eea60(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c121420(0xbff0000000000000);
        _objc_release(puVar3);
        func_0x00010c08fa60();
        func_0x00010c2760e0(param_1);
        func_0x00010c218020(param_1);
        puVar3 = param_1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (ushort *)0x0) goto LAB_106ece05c;
        puVar4 = param_1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        _objc_opt_respondsToSelector();
        _objc_release(puVar4);
        _objc_release(puVar3);
        if (((ulong)puVar5 & 1) == 0) goto LAB_106ece05c;
        func_0x00010bf28660(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_1;
      }
      func_0x00010007380c();
LAB_106ece058:
      _objc_release(puVar3);
      goto LAB_106ece05c;
    }
    if (param_5 == 0x27d9) {
      uVar8 = 0x10;
      _malloc(0x10);
      puVar3 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bf25f00();
      _inet_ntop(2,puVar3,uVar8,0x10);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
LAB_106ecde00:
      func_0x00010bffa1c0();
    }
    else {
      if (param_5 != 0x27da) {
        if (param_5 != 0x27db) goto LAB_106ece05c;
        uVar8 = 0x2e;
        _malloc(0x2e);
        puVar3 = param_4;
        _objc_retainAutorelease(param_4);
        func_0x00010bf25f00();
        _inet_ntop(0x1e,puVar3,uVar8,0x2e);
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        goto LAB_106ecde00;
      }
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      _objc_retainAutorelease(param_4);
      func_0x00010bf25f00();
      func_0x00010c08fa60(param_4);
      func_0x00010bffa180();
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar8);
    uVar8 = 0x4020000000000000;
  }
LAB_106ecde6c:
  func_0x00010c1213c0(uVar8,param_3);
LAB_106ece05c:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ece0b0; end: 106ece127;  */

void FUN_106ece0b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c119fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ece128; end: 106ece163; -[SOCKSProxySocket socksOpen] */

void FUN_106ece128(undefined8 param_1)

{
  func_0x00010c119f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1213c0(0x4020000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ece164; end: 106ece267; -[SOCKSProxySocket socketDidDisconnect:withError:] */

void FUN_106ece164(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010bf28660(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_106ece268;
      puStack_58 = &UNK_110841f80;
      uStack_50 = param_1;
      _objc_retain(param_4);
      uStack_48 = param_4;
      func_0x00010007380c(uVar1,&puStack_70);
      _objc_release(uVar1);
      _objc_release(uStack_48);
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106ece268; end: 106ece2a3;  */

void FUN_106ece268(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c119fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ece2a4; end: 106ece3c3; -[SOCKSProxySocket socket:didConnectToHost:port:] */

void FUN_106ece2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  uint param_5)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fac0();
  puVar2 = (undefined4 *)(lVar1 + 7);
  _malloc();
  *puVar2 = 0x3000005;
  *(char *)(puVar2 + 1) = (char)lVar1;
  lVar3 = param_4;
  _objc_retainAutorelease(param_4);
  func_0x00010bdc3520();
  _objc_release(param_4);
  _memcpy((long)puVar2 + 5,lVar3,lVar1);
  *(ushort *)((long)puVar2 + 5 + lVar1) =
       (ushort)(param_5 >> 8) & 0xff | (ushort)((param_5 & 0xff00ff) << 8);
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c119f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bdb20(0xbff0000000000000);
  _objc_release(uVar5);
  func_0x00010c119f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121420(0xbff0000000000000);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106ece3c4; end: 106ece3cb; -[SOCKSProxySocket destinationPort] */

undefined2 FUN_106ece3c4(long param_1)

{
  return *(undefined2 *)(param_1 + 8);
}



/* Entry: 106ece3cc; end: 106ece3d3; -[SOCKSProxySocket destinationHost] */

undefined8 FUN_106ece3cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ece3d4; end: 106ece3eb; -[SOCKSProxySocket delegate] */

void FUN_106ece3d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ece3ec; end: 106ece3f7; -[SOCKSProxySocket setDelegate:] */

void FUN_106ece3ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106ece3f8; end: 106ece3ff; -[SOCKSProxySocket callbackQueue] */

undefined8 FUN_106ece3f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ece400; end: 106ece42f; -[SOCKSProxySocket setCallbackQueue:] */

void FUN_106ece400(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ece430; end: 106ece437; -[SOCKSProxySocket totalBytesWritten] */

undefined8 FUN_106ece430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ece438; end: 106ece43f; -[SOCKSProxySocket setTotalBytesWritten:] */

void FUN_106ece438(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 106ece440; end: 106ece447; -[SOCKSProxySocket totalBytesRead] */

undefined8 FUN_106ece440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ece448; end: 106ece44f; -[SOCKSProxySocket setTotalBytesRead:] */

void FUN_106ece448(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 106ece450; end: 106ece457; -[SOCKSProxySocket proxySocket] */

undefined8 FUN_106ece450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106ece458; end: 106ece487; -[SOCKSProxySocket setProxySocket:] */

void FUN_106ece458(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ece488; end: 106ece48f; -[SOCKSProxySocket outgoingSocket] */

undefined8 FUN_106ece488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106ece490; end: 106ece4bf; -[SOCKSProxySocket setOutgoingSocket:] */

void FUN_106ece490(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ece4c0; end: 106ece4c7; -[SOCKSProxySocket delegateQueue] */

undefined8 FUN_106ece4c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106ece4c8; end: 106ece4f7; -[SOCKSProxySocket setDelegateQueue:] */

void FUN_106ece4c8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ece4f8; end: 106ece4ff; -[SOCKSProxySocket username] */

undefined8 FUN_106ece4f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106ece500; end: 106ece52f; -[SOCKSProxySocket setUsername:] */

void FUN_106ece500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ece530; end: 106ece597; -[SOCKSProxySocket .cxx_destruct] */

void FUN_106ece530(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106ece598; end: 106ece5f7; -[GCDAsyncSocketPreBuffer initWithCapacity:] */

undefined1 * FUN_106ece598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7bf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _malloc();
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
  }
  return (undefined1 *)puVar1;
}


