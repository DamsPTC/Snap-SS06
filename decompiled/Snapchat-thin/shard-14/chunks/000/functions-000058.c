/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af86b08; end: 10af86b0b; -[SCTracingServicesNativeSDKDataProducer willStart] */

void FUN_10af86b08(void)

{
  return;
}



/* Entry: 10af86b0c; end: 10af86b17; -[SCTracingServicesNativeSDKDataProducer dataProducerName] */

undefined ** FUN_10af86b0c(void)

{
  return &PTR____CFConstantStringClassReference_110f3e6f8;
}



/* Entry: 10af86b18; end: 10af86b57; -[SCTracingServicesNativeSDKDataProducer start] */

void FUN_10af86b18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ded90;
  puVar2 = PTR_PTR_1126ded98;
  _objc_alloc_init(PTR_PTR_1126ded98);
  func_0x00010c064760(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10af86b58; end: 10af86b67; -[SCTracingServicesNativeSDKDataProducer stop] */

void FUN_10af86b58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c064770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ded90,PTR_s_initialize__1125f6be8,0);
  return;
}



/* Entry: 10af86b68; end: 10af86c23; +[SCTracingServicesNetworkingDataProducer sharedProducerWithBandwidthEstimator:] */

void FUN_10af86b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = lRam00000001137f0eb8;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10af86c24;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar3 = param_3;
  if (lVar2 != -1) {
    func_0x000107c27d9c(0x1137f0eb8,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar1 = uRam00000001137f0eb0;
  _objc_retain(uRam00000001137f0eb0);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af86c24; end: 10af86c63;  */

void FUN_10af86c24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126deda0;
  _objc_alloc();
  func_0x00010bff6920();
  uVar1 = puRam00000001137f0eb0;
  puRam00000001137f0eb0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af86c64; end: 10af86d1f; -[SCTracingServicesNetworkingDataProducer initWithBandwidthEstimator:] */

undefined1 * FUN_10af86c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703010;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = &UNK_10f6ee8a3;
    _dispatch_queue_create(&UNK_10f6ee8a3,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR___dispatch_source_type_timer_11034be38;
    _dispatch_source_create
              (PTR___dispatch_source_type_timer_11034be38,0,0,*(undefined8 *)((long)puVar1 + 0x10));
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af86d20; end: 10af86dcb; -[SCTracingServicesNetworkingDataProducer logNetworkBandwidthStats] */

void FUN_10af86d20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010bf27000();
    lVar2 = *(long *)(param_1 + 0x20);
    if ((lVar2 == 0) || (func_0x00010c0b4ca0(), lVar2 != lVar1)) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar3;
      _objc_release(uVar4);
      puVar3 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf27000(uVar4);
      func_0x00010c277620(puVar3,param_2,&PTR____CFConstantStringClassReference_110f3e718,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 10af86dcc; end: 10af86e5b; -[SCTracingServicesNetworkingDataProducer willStart] */

void FUN_10af86dcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = 0;
  _dispatch_time(0,1000000000);
  _dispatch_source_set_timer(uVar2,uVar1,1000000000,1000000000);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10af86e5c;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  _dispatch_source_set_event_handler(*(undefined8 *)(param_1 + 0x18),&puStack_48);
  return;
}



/* Entry: 10af86e5c; end: 10af86e63;  */

void FUN_10af86e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0aad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logNetworkBandwidthStats_112608570);
  return;
}



/* Entry: 10af86e64; end: 10af86e6b; -[SCTracingServicesNetworkingDataProducer start] */

void FUN_10af86e64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_resume_11034c118)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10af86e6c; end: 10af86e93; -[SCTracingServicesNetworkingDataProducer stop] */

void FUN_10af86e6c(long param_1)

{
  _dispatch_suspend(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c0aad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logNetworkBandwidthStats_112608570);
  return;
}



/* Entry: 10af86e94; end: 10af86e9f; -[SCTracingServicesNetworkingDataProducer dataProducerName] */

undefined ** FUN_10af86e94(void)

{
  return &PTR____CFConstantStringClassReference_110f3e738;
}



/* Entry: 10af86ea0; end: 10af86ee7; -[SCTracingServicesNetworkingDataProducer .cxx_destruct] */

void FUN_10af86ea0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af86ee8; end: 10af86f3b; +[SCTracingServicesPerfLoggerDataProducer sharedPerfDP] */

void FUN_10af86ee8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f0ec8 != -1) {
    func_0x000107c27d9c(0x1137f0ec8,&PTR___NSConcreteGlobalBlock_110c9b858);
  }
  uVar1 = uRam00000001137f0ec0;
  _objc_retain(uRam00000001137f0ec0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af86f3c; end: 10af86f67;  */

void FUN_10af86f3c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ded78;
  _objc_alloc_init();
  uVar1 = puRam00000001137f0ec0;
  puRam00000001137f0ec0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af86f68; end: 10af86fa3; -[SCTracingServicesPerfLoggerDataProducer init] */

void FUN_10af86f68(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_112703018;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 10af86fa4; end: 10af87007; -[SCTracingServicesPerfLoggerDataProducer logMetric:] */

void FUN_10af86fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  if (*(char *)(param_1 + 8) == '\x01') {
    _objc_retain(param_3);
    func_0x00010c22b6a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac1e0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10af87008; end: 10af87013; -[SCTracingServicesPerfLoggerDataProducer dataProducerName] */

undefined ** FUN_10af87008(void)

{
  return &PTR____CFConstantStringClassReference_110f3e758;
}



/* Entry: 10af87014; end: 10af87017; -[SCTracingServicesPerfLoggerDataProducer willStart] */

void FUN_10af87014(void)

{
  return;
}



/* Entry: 10af87018; end: 10af87023; -[SCTracingServicesPerfLoggerDataProducer start] */

void FUN_10af87018(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 10af87024; end: 10af8702b; -[SCTracingServicesPerfLoggerDataProducer stop] */

void FUN_10af87024(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10af8702c; end: 10af870fb; -[SCTracingServicesSystemStatsDataProducer init] */

undefined8 * FUN_10af8702c(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112703020;
  puVar2 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    uVar1 = SUB84(&uStack_38,0);
    _mach_timebase_info();
    dVar5 = (double)NEON_ucvtf((ulong)uStack_38);
    dVar6 = (double)NEON_ucvtf((ulong)uStack_34);
    puVar2[10] = dVar5 / dVar6;
    _getpid();
    *(undefined4 *)(puVar2 + 0xb) = uVar1;
    puVar3 = &UNK_10f6ee960;
    _dispatch_queue_create(&UNK_10f6ee960,0);
    uVar4 = puVar2[0xc];
    puVar2[0xc] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR___dispatch_source_type_timer_11034be38;
    _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,puVar2[0xc]);
    uVar4 = puVar2[0xd];
    puVar2[0xd] = puVar3;
    _objc_release(uVar4);
    *(undefined4 *)(puVar2 + 0xe) = 0;
  }
  return puVar2;
}



/* Entry: 10af870fc; end: 10af8711b; -[SCTracingServicesSystemStatsDataProducer systemStatToMilliseconds:] */

long FUN_10af870fc(long param_1,undefined8 param_2,ulong param_3)

{
  return (long)((*(double *)(param_1 + 0x50) * (double)param_3) / 1000000.0);
}



/* Entry: 10af8711c; end: 10af87197; -[SCTracingServicesSystemStatsDataProducer logCounter:previousValue:name:] */

void FUN_10af8711c(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  if (*param_4 != param_3) {
    _objc_retain(param_5);
    func_0x00010c22b6a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277620();
    _objc_release(param_5);
    _objc_release(puVar1);
  }
  *param_4 = param_3;
  return;
}



/* Entry: 10af87198; end: 10af8736f; -[SCTracingServicesSystemStatsDataProducer sampleSystemStats] */

void FUN_10af87198(long *param_1,double param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_2c8 [72];
  long *plStack_280;
  long lStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined4 uStack_254;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  undefined4 uStack_230;
  undefined1 auStack_22c [144];
  long lStack_19c;
  undefined1 auStack_b8 [96];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = *(int *)(param_3 + 0x58);
  _proc_pid_rusage(iVar2,0,auStack_b8);
  puVar1 = PTR__mach_task_self__11034c5c8;
  uStack_254 = 8;
  piVar3 = (int *)(ulong)*(uint *)PTR__mach_task_self__11034c5c8;
  _task_info(piVar3,2,&iStack_250,&uStack_254);
  if (iVar2 == 0 && (int)piVar3 == 0) {
    uStack_230 = 0x5d;
    iVar2 = *(int *)puVar1;
    _task_info(iVar2,0x17,auStack_22c,&uStack_230);
    lVar4 = lStack_19c + 0x3ff;
    if (-1 < lStack_19c) {
      lVar4 = lStack_19c;
    }
    lVar4 = lVar4 >> 10;
    if (iVar2 != 0) {
      lVar4 = 0;
    }
    *param_1 = lVar4;
    lVar4 = param_3;
    func_0x00010c267360();
    param_1[1] = lVar4;
    lVar8 = param_3;
    func_0x00010c267360();
    param_1[2] = lVar8;
    func_0x00010c0b6dc0(PTR_PTR_1126ae4f0);
    dVar6 = 0.0;
    if (0.0 <= param_2) {
      dVar6 = param_2;
    }
    param_1[3] = (long)dVar6;
    piVar3 = (int *)PTR_PTR_1126ae4f0;
    func_0x00010c0b6d80(PTR_PTR_1126ae4f0);
    dVar7 = 0.0;
    if (0.0 <= dVar6) {
      dVar7 = dVar6;
    }
    param_1[5] = (long)dVar7;
    lVar9 = *(long *)(param_3 + 0x18) + *(long *)(param_3 + 0x10);
    lVar5 = 0;
    if (lVar9 != 0) {
      lVar5 = (long)(((double)(ulong)((lVar8 + lVar4) - lVar9) * 100.0) / 100.0);
    }
    param_1[4] = lVar5;
    param_1[7] = (long)iStack_250 - (long)iStack_24c;
    param_1[8] = (long)iStack_248;
    param_1[6] = (long)iStack_24c;
    *(undefined4 *)(param_3 + 0x70) = 0;
  }
  else {
    ___error();
    if (*piVar3 != *(int *)(param_3 + 0x70)) {
      ___error();
      *(int *)(param_3 + 0x70) = *piVar3;
    }
    lVar8 = *(long *)(param_3 + 0x20);
    lVar4 = *(long *)(param_3 + 0x18);
    lVar9 = *(long *)(param_3 + 0x28);
    lVar10 = *(long *)(param_3 + 0x40);
    lVar5 = *(long *)(param_3 + 0x38);
    param_1[5] = *(long *)(param_3 + 0x30);
    param_1[4] = lVar9;
    param_1[7] = lVar10;
    param_1[6] = lVar5;
    param_1[8] = *(long *)(param_3 + 0x48);
    lVar9 = *(long *)(param_3 + 8);
    param_1[1] = *(long *)(param_3 + 0x10);
    *param_1 = lVar9;
    param_1[3] = lVar8;
    param_1[2] = lVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_10af87370;
  plStack_280 = param_1;
  lStack_278 = param_3;
  puStack_270 = &stack0xfffffffffffffff0;
  func_0x00010c1498a0(auStack_2c8);
  func_0x00010c0a3fa0(piVar3);
  func_0x00010c0a3fa0(piVar3);
  func_0x00010c0a3fa0(piVar3);
  func_0x00010c0a3fa0(piVar3);
  func_0x00010c0a3fa0(piVar3);
  func_0x00010c0a3fa0(piVar3);
  func_0x00010c0a3fa0(piVar3);
  func_0x00010c0a3fa0(piVar3);
  func_0x00010c0a3fa0(piVar3);
  return;
}



/* Entry: 10af87370; end: 10af87473; -[SCTracingServicesSystemStatsDataProducer traceSystemStats] */

void FUN_10af87370(long param_1,undefined8 param_2)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c1498a0(&uStack_68);
  func_0x00010c0a3fa0(param_1,param_2,uStack_68,param_1 + 8,
                      &PTR____CFConstantStringClassReference_110f3e778);
  func_0x00010c0a3fa0(param_1,param_2,uStack_60,param_1 + 0x10,
                      &PTR____CFConstantStringClassReference_110f3e798);
  func_0x00010c0a3fa0(param_1,param_2,uStack_58,param_1 + 0x18,
                      &PTR____CFConstantStringClassReference_110f3e7b8);
  func_0x00010c0a3fa0(param_1,param_2,uStack_50,param_1 + 0x20,
                      &PTR____CFConstantStringClassReference_110f3e7d8);
  func_0x00010c0a3fa0(param_1,param_2,uStack_48,param_1 + 0x28,
                      &PTR____CFConstantStringClassReference_110f3e7f8);
  func_0x00010c0a3fa0(param_1,param_2,uStack_40,param_1 + 0x30,
                      &PTR____CFConstantStringClassReference_110f3e818);
  func_0x00010c0a3fa0(param_1,param_2,uStack_38,param_1 + 0x38,
                      &PTR____CFConstantStringClassReference_110f3e838);
  func_0x00010c0a3fa0(param_1,param_2,uStack_30,param_1 + 0x40,
                      &PTR____CFConstantStringClassReference_110f3e858);
  func_0x00010c0a3fa0(param_1,param_2,uStack_28,param_1 + 0x48,
                      &PTR____CFConstantStringClassReference_110f3e878);
  return;
}



/* Entry: 10af87474; end: 10af8747f; -[SCTracingServicesSystemStatsDataProducer dataProducerName] */

undefined ** FUN_10af87474(void)

{
  return &PTR____CFConstantStringClassReference_110f3e898;
}



/* Entry: 10af87480; end: 10af8750b; -[SCTracingServicesSystemStatsDataProducer willStart] */

void FUN_10af87480(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = 0;
  _dispatch_time(0,100000000);
  _dispatch_source_set_timer(*(undefined8 *)(param_1 + 0x68),uVar1,100000000,100000000);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10af8750c;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  _dispatch_source_set_event_handler(*(undefined8 *)(param_1 + 0x68),&puStack_48);
  return;
}



/* Entry: 10af8750c; end: 10af87513;  */

void FUN_10af8750c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c277850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_traceSystemStats_11267b838);
  return;
}



/* Entry: 10af87514; end: 10af8751b; -[SCTracingServicesSystemStatsDataProducer start] */

void FUN_10af87514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_resume_11034c118)(*(undefined8 *)(param_1 + 0x68));
  return;
}



/* Entry: 10af8751c; end: 10af8755f; -[SCTracingServicesSystemStatsDataProducer stop] */

void FUN_10af8751c(long param_1)

{
  _dispatch_suspend(*(undefined8 *)(param_1 + 0x68));
  func_0x00010c277840(param_1);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10af87560; end: 10af8758f; -[SCTracingServicesSystemStatsDataProducer .cxx_destruct] */

void FUN_10af87560(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x60,0);
  return;
}



/* Entry: 10af87590; end: 10af875e3; +[SCTracingServicesDataProducerManager shared] */

void FUN_10af87590(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f0ed0 != -1) {
    func_0x000107c27d9c(0x1137f0ed0,&PTR___NSConcreteGlobalBlock_110c9b878);
  }
  uVar1 = uRam00000001137f0ed8;
  _objc_retain(uRam00000001137f0ed8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af875e4; end: 10af8760f;  */

void FUN_10af875e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126deda8;
  _objc_alloc_init();
  uVar1 = puRam00000001137f0ed8;
  puRam00000001137f0ed8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af87610; end: 10af87697; -[SCTracingServicesDataProducerManager init] */

undefined1 * FUN_10af87610(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112703028;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = &UNK_10f6ee986;
    _dispatch_queue_create(&UNK_10f6ee986,0);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10af87698; end: 10af87723; -[SCTracingServicesDataProducerManager addDataProducer:] */

void FUN_10af87698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10af87724;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c27da4(uVar1,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af87724; end: 10af8776f;  */

void FUN_10af87724(long param_1,undefined8 param_2)

{
  int iVar1;
  
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf09900();
  if (iVar1 != 0) {
    func_0x00010c2a6be0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_start_112671080);
    return;
  }
  return;
}



/* Entry: 10af87770; end: 10af877d7; -[SCTracingServicesDataProducerManager prepareDataProducers] */

void FUN_10af87770(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  ulong uStack_28;
  
  uVar1 = param_1;
  func_0x00010bf09900();
  if ((uVar1 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10af877d8;
    puStack_30 = &UNK_110842e18;
    uStack_28 = param_1;
    func_0x000107c27da4(*(undefined8 *)(param_1 + 0x10),&puStack_48);
  }
  return;
}



/* Entry: 10af877d8; end: 10af877f3;  */

void FUN_10af877d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_enumerateObjectsUsingBlock__1125c3948,&PTR___NSConcreteGlobalBlock_110c9b8b8);
  return;
}



/* Entry: 10af877f4; end: 10af87863; -[SCTracingServicesDataProducerManager startDataProducers] */

void FUN_10af877f4(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  ulong uStack_28;
  
  uVar1 = param_1;
  func_0x00010bf09900();
  if ((uVar1 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10af87864;
    puStack_30 = &UNK_110842e18;
    uStack_28 = param_1;
    func_0x000107c27da4(*(undefined8 *)(param_1 + 0x10),&puStack_48);
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



/* Entry: 10af87864; end: 10af8787f;  */

void FUN_10af87864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_enumerateObjectsUsingBlock__1125c3948,&PTR___NSConcreteGlobalBlock_110c9b8d8);
  return;
}



/* Entry: 10af87880; end: 10af878eb; -[SCTracingServicesDataProducerManager stopDataProducers] */

void FUN_10af87880(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010bf09900();
  if ((int)lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10af878ec;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000107c27da4(*(undefined8 *)(param_1 + 0x10),&puStack_48);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10af878ec; end: 10af87907;  */

void FUN_10af878ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_enumerateObjectsUsingBlock__1125c3948,&PTR___NSConcreteGlobalBlock_110c9b8f8);
  return;
}



/* Entry: 10af87908; end: 10af8790f; -[SCTracingServicesDataProducerManager areDataProducersRunning] */

undefined1 FUN_10af87908(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10af87910; end: 10af8793f; -[SCTracingServicesDataProducerManager .cxx_destruct] */

void FUN_10af87910(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af87940; end: 10af87947; -[SCMemoryUsageServices memoryUsageInfoProvider] */

undefined8 FUN_10af87940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af87948; end: 10af87977; -[SCMemoryUsageServices .cxx_destruct] */

void FUN_10af87948(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af87978; end: 10af879c3; +[SCMemoryPressureState critical] */

void FUN_10af87978(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126daf98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af879c4; end: 10af87a0b; +[SCMemoryPressureState normal] */

void FUN_10af879c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126daf98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af87a0c; end: 10af87a57; +[SCMemoryPressureState warning] */

void FUN_10af87a0c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126daf98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af87a58; end: 10af87a7b; -[SCMemoryPressureState copyWithZone:] */

undefined8 FUN_10af87a58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af87a7c; end: 10af87a83; -[SCMemoryPressureState hash] */

undefined8 FUN_10af87a7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af87a84; end: 10af87ac7; -[SCMemoryPressureState internalInit] */

void FUN_10af87a84(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703038;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af87ac8; end: 10af87b4f; -[SCMemoryPressureState isEqual:] */

bool FUN_10af87ac8(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af87b50; end: 10af87beb; -[SCMemoryPressureState matchNormal:warning:critical:] */

void FUN_10af87b50(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = param_5;
  if ((((lVar2 == 2) || (lVar1 = param_4, lVar2 == 1)) || (lVar1 = param_3, lVar2 == 0)) &&
     (lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))();
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af87bec; end: 10af87c3f;  */

void FUN_10af87bec(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f0ee0 != -1) {
    func_0x000107c27d9c(0x1137f0ee0,&PTR___NSConcreteGlobalBlock_110c9b918);
  }
  uVar1 = uRam00000001137f0ee8;
  _objc_retain(uRam00000001137f0ee8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af87c40; end: 10af87cf3;  */

void FUN_10af87c40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111183a40);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f0ee8;
  puRam00000001137f0ee8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af87cf4; end: 10af87d63;  */

void FUN_10af87cf4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  puVar3 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                      &PTR____CFConstantStringClassReference_110f3ec78,0,&uStack_28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uStack_28;
  _objc_retain(uStack_28);
  uVar1 = puRam00000001137f0f18;
  puRam00000001137f0f18 = puVar3;
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 10af87d64; end: 10af87e6b;  */

void FUN_10af87d64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2760;
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2778;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2790;
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d27a8;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d27c0;
  ppuStack_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d27d8;
  ppuStack_20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d27f0;
  pppuVar4 = &ppuStack_50;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f0f28;
  puRam00000001137f0f28 = puVar5;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar4);
  if (pppuVar4 == (undefined ***)0x0) {
    puVar5 = (undefined *)0x0;
    goto LAB_10af88144;
  }
  pppuVar2 = pppuVar4;
  func_0x00010bf44740(pppuVar4,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = pppuVar2;
  func_0x00010bf529e0();
  if (pppuVar3 == (undefined ***)0x8) {
    pppuVar3 = pppuVar2;
    func_0x00010c0dfd40(pppuVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar3;
    func_0x00010c067fc0();
    _objc_release(pppuVar3);
    if ((undefined ***)0x3 < pppuVar6) goto LAB_10af87f24;
    pppuVar3 = pppuVar2;
    func_0x00010c0dfd40(pppuVar2,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar3;
    func_0x00010c0720c0();
    if (((ulong)pppuVar6 & 1) == 0) {
      pppuVar6 = pppuVar2;
      func_0x00010c0dfd40(pppuVar2,param_2,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      pppuVar6 = (undefined ***)0x0;
    }
    _objc_release(pppuVar3);
    pppuVar3 = pppuVar2;
    func_0x00010c0dfd40(pppuVar2,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(pppuVar3);
    pppuVar3 = pppuVar2;
    func_0x00010c0dfd40(pppuVar2,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar3;
    func_0x00010c0720c0();
    if (((ulong)pppuVar7 & 1) == 0) {
      pppuVar7 = pppuVar2;
      func_0x00010c0dfd40(pppuVar2,param_2,3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      pppuVar7 = (undefined ***)0x0;
    }
    _objc_release(pppuVar3);
    pppuVar3 = pppuVar2;
    func_0x00010c0dfd40(pppuVar2,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar3;
    func_0x00010c0720c0();
    if (((ulong)pppuVar8 & 1) == 0) {
      pppuVar8 = pppuVar2;
      func_0x00010c0dfd40(pppuVar2,param_2,4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      pppuVar8 = (undefined ***)0x0;
    }
    _objc_release(pppuVar3);
    pppuVar3 = pppuVar2;
    func_0x00010c0dfd40(pppuVar2,param_2,5);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar3;
    func_0x00010c0720c0();
    if (((ulong)pppuVar9 & 1) == 0) {
      pppuVar9 = pppuVar2;
      func_0x00010c0dfd40(pppuVar2,param_2,5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      pppuVar9 = (undefined ***)0x0;
    }
    _objc_release(pppuVar3);
    pppuVar3 = pppuVar2;
    func_0x00010c0dfd40(pppuVar2,param_2,6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(pppuVar3);
    pppuVar3 = pppuVar2;
    func_0x00010c0dfd40(pppuVar2,param_2,7);
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar3;
    func_0x00010c0720c0();
    if (((ulong)pppuVar10 & 1) == 0) {
      pppuVar10 = pppuVar2;
      func_0x00010c0dfd40(pppuVar2,param_2,7);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      pppuVar10 = (undefined ***)0x0;
    }
    _objc_release(pppuVar3);
    puVar5 = PTR_PTR_1126b6e68;
    _objc_alloc(PTR_PTR_1126b6e68);
    func_0x00010c02f020();
    _objc_release(pppuVar10);
    _objc_release(pppuVar9);
    _objc_release(pppuVar8);
    _objc_release(pppuVar7);
    _objc_release(pppuVar6);
  }
  else {
LAB_10af87f24:
    puVar5 = (undefined *)0x0;
  }
  _objc_release(pppuVar2);
LAB_10af88144:
  _objc_release(pppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10af87e6c; end: 10af8816f; +[SCNetworkActivityAttributionIdentifier extractAttributionIdentifierFromDescription:] */

void FUN_10af87e6c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
    goto LAB_10af88144;
  }
  uVar1 = param_3;
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 == 8) {
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c067fc0();
    _objc_release(uVar2);
    if (3 < uVar4) goto LAB_10af87f24;
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar4 = 0;
    }
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0720c0();
    if ((uVar5 & 1) == 0) {
      uVar5 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar5 = 0;
    }
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0720c0();
    if ((uVar6 & 1) == 0) {
      uVar6 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar6 = 0;
    }
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0720c0();
    if ((uVar7 & 1) == 0) {
      uVar7 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar7 = 0;
    }
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c0720c0();
    if ((uVar8 & 1) == 0) {
      uVar8 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,7);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar8 = 0;
    }
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b6e68;
    _objc_alloc(PTR_PTR_1126b6e68);
    func_0x00010c02f020();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
LAB_10af87f24:
    puVar3 = (undefined *)0x0;
  }
  _objc_release(uVar1);
LAB_10af88144:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10af88170; end: 10af8833f; -[SCNetworkActivityAttributionIdentifier initWithNetworkActivityAttributionInfo:] */

undefined1 * FUN_10af88170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112703040;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0d7880();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010c136da0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c081c40();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0c46a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bfcfa20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6ff60(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0f5800(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar4 = param_3;
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be18cc0(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bdd5aa0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af88340; end: 10af8848f; -[SCNetworkActivityAttributionIdentifier initWithNetworkActivitySourceType:requestTypeStr:isUIAssetRequest:host:formattedPath:boltUseCase:mediaContextType:grpcFeature:] */

undefined1 *
FUN_10af88340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112703040;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    func_0x00010bdd5aa0(puVar1);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af88490; end: 10af8886b; -[SCNetworkActivityAttributionIdentifier _formattedPathForAttributionWithOriginalPath:url:] */

void FUN_10af88490(ulong param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0d7880();
  ppuVar9 = param_3;
  if (uVar1 != 0) goto LAB_10af88800;
  uVar1 = param_1;
  func_0x00010c136da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  ppuVar5 = param_4;
  ppuVar8 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = param_1;
    func_0x00010c136da0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) {
      uVar2 = param_1;
      func_0x00010c136da0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar4 == 0) {
        uVar1 = param_1;
        func_0x00010c136da0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((int)uVar2 == 0) goto LAB_10af88800;
        if (lRam00000001137f0f00 != -1) {
          func_0x000107c27d9c(0x1137f0f00,&PTR___NSConcreteGlobalBlock_110c9b958);
        }
        uVar1 = uRam00000001137f0f08;
        _objc_retain(uRam00000001137f0f08);
        uVar2 = uVar1;
        func_0x00010bf4b900();
        _objc_release(uVar1);
        if ((uVar2 & 1) != 0) goto LAB_10af88800;
        goto LAB_10af88540;
      }
    }
    else {
      _objc_release(uVar1);
    }
    if (lRam00000001137f0ef0 != -1) {
      func_0x000107c27d9c(0x1137f0ef0,&PTR___NSConcreteGlobalBlock_110c9b938);
    }
    uVar1 = uRam00000001137f0ef8;
    _objc_retain(uRam00000001137f0ef8);
    uVar2 = uVar1;
    func_0x00010bf4b900();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) goto LAB_10af88800;
    func_0x00010c0f5860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bf529e0();
    if ((undefined **)0x1 < ppuVar6) {
      FUN_10af87bec();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar5;
      func_0x00010c0dfd40(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010bf4b900();
      _objc_release(ppuVar9);
      _objc_release(ppuVar6);
      if (((ulong)ppuVar7 & 1) != 0) goto LAB_10af88710;
LAB_10af887e0:
      ppuVar9 = (undefined **)0x0;
      goto LAB_10af887e8;
    }
  }
  else {
    uVar1 = param_1;
    func_0x00010c0c46a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c0f5860();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010bf529e0();
      if ((undefined **)0x1 < ppuVar6) {
        FUN_10af87bec();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar5;
        func_0x00010c0dfd40(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar6;
        func_0x00010bf4b900();
        _objc_release(ppuVar7);
        _objc_release(ppuVar6);
        if (((ulong)ppuVar3 & 1) == 0) {
          func_0x00010bf529e0(ppuVar5);
          ppuVar6 = ppuVar5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar6;
          func_0x00010c0720c0();
          _objc_release(ppuVar6);
          if (((ulong)ppuVar7 & 1) == 0) {
            uVar1 = param_1;
            func_0x00010bf1f240();
            if (uVar1 == 0) goto LAB_10af887f8;
            goto LAB_10af887e0;
          }
          ppuVar9 = &PTR____CFConstantStringClassReference_110f3ecd8;
        }
        else {
LAB_10af88710:
          ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          ppuVar8 = ppuVar5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(ppuVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_3);
        }
LAB_10af887e8:
        _objc_release(ppuVar8);
      }
    }
    else {
LAB_10af88540:
      ppuVar5 = param_3;
      ppuVar9 = (undefined **)0x0;
    }
  }
LAB_10af887f8:
  _objc_release(ppuVar5);
LAB_10af88800:
  func_0x00010c19ecc0(param_1);
  _objc_release(ppuVar9);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af8886c; end: 10af88a4b; -[SCNetworkActivityAttributionIdentifier _parseBoltUseCaseFromUrl:] */

void FUN_10af8886c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c136da0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) {
      uVar3 = param_1;
      func_0x00010c136da0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((int)uVar4 == 0) goto LAB_10af88a10;
    }
    else {
      _objc_release(uVar2);
    }
    if (lRam00000001137f0f10 != -1) {
      func_0x000107c27d9c(0x1137f0f10,&PTR___NSConcreteGlobalBlock_110c9b978);
    }
    lVar1 = lRam00000001137f0f18;
    _objc_retain(lRam00000001137f0f18);
    lVar5 = param_3;
    func_0x00010c11d080(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c11d080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    lVar7 = lVar1;
    func_0x00010bfb1800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar1);
    if (lVar7 != 0) {
      func_0x00010c11f2c0(lVar7);
      lVar1 = param_3;
      func_0x00010c11d080(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      _objc_release(lVar5);
      _objc_release(lVar1);
    }
    _objc_release(lVar7);
  }
LAB_10af88a10:
  func_0x00010c172f80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af88a4c; end: 10af88c73; -[SCNetworkActivityAttributionIdentifier _buildActivityAttributionIdentifierDescription] */

undefined * FUN_10af88a4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0d7880();
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c136da0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c081c40(param_1);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfb60c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0c46a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf1f240(param_1);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bfcfa20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(puVar9);
  puVar9 = puVar8;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c0c0(param_1);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar9 = puVar8;
  func_0x00010c0d7880();
  if (puVar9 == (undefined *)0x0) {
    puVar9 = puVar8;
    func_0x00010c136da0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c0720c0();
    _objc_release(puVar9);
    if ((int)puVar2 == 0) {
      if (lRam00000001137f0f20 != -1) {
        func_0x000107c27d9c(0x1137f0f20,&PTR___NSConcreteGlobalBlock_110c9b998);
      }
      puVar2 = puRam00000001137f0f28;
      _objc_retain(puRam00000001137f0f28);
      func_0x00010c136da0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c0e00e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      func_0x00010c067fc0();
      _objc_release(puVar6);
      _objc_release(puVar8);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c081c40();
      puVar9 = (undefined *)0x3;
      if ((int)puVar8 == 0) {
        puVar9 = (undefined *)0x4;
      }
    }
  }
  else {
    puVar9 = (undefined *)0xffffffffffffffff;
  }
  return puVar9;
}



/* Entry: 10af88c74; end: 10af88d77; -[SCNetworkActivityAttributionIdentifier networkTaskType] */

undefined8 FUN_10af88c74(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = param_1;
  func_0x00010c0d7880();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c136da0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    if ((int)lVar4 == 0) {
      if (lRam00000001137f0f20 != -1) {
        func_0x000107c27d9c(0x1137f0f20,&PTR___NSConcreteGlobalBlock_110c9b998);
      }
      uVar1 = uRam00000001137f0f28;
      _objc_retain(uRam00000001137f0f28);
      func_0x00010c136da0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c0e00e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c067fc0();
      _objc_release(uVar5);
      _objc_release(param_1);
      _objc_release(uVar1);
    }
    else {
      func_0x00010c081c40();
      uVar3 = 3;
      if ((int)param_1 == 0) {
        uVar3 = 4;
      }
    }
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}



/* Entry: 10af88d78; end: 10af88dcb; -[SCNetworkActivityAttributionIdentifier networkActivityGroup] */

void FUN_10af88d78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0d7880();
  if (((lVar1 != 0) && (lVar1 = param_1, func_0x00010c0d7880(), lVar1 != 1)) &&
     (func_0x00010c0d7880(), param_1 != 2)) {
    func_0x00010c0d7880();
  }
  return;
}



/* Entry: 10af88dcc; end: 10af88dd3; -[SCNetworkActivityAttributionIdentifier networkActivitySourceType] */

undefined8 FUN_10af88dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af88dd4; end: 10af88ddb; -[SCNetworkActivityAttributionIdentifier setNetworkActivitySourceType:] */

void FUN_10af88dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10af88ddc; end: 10af88de3; -[SCNetworkActivityAttributionIdentifier requestTypeStr] */

undefined8 FUN_10af88ddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af88de4; end: 10af88deb; -[SCNetworkActivityAttributionIdentifier setRequestTypeStr:] */

void FUN_10af88de4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10af88dec; end: 10af88df3; -[SCNetworkActivityAttributionIdentifier isUIAssetRequest] */

undefined1 FUN_10af88dec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af88df4; end: 10af88dfb; -[SCNetworkActivityAttributionIdentifier setIsUIAssetRequest:] */

void FUN_10af88df4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10af88dfc; end: 10af88e03; -[SCNetworkActivityAttributionIdentifier host] */

undefined8 FUN_10af88dfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af88e04; end: 10af88e0b; -[SCNetworkActivityAttributionIdentifier setHost:] */

void FUN_10af88e04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10af88e0c; end: 10af88e13; -[SCNetworkActivityAttributionIdentifier formattedPath] */

undefined8 FUN_10af88e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af88e14; end: 10af88e1b; -[SCNetworkActivityAttributionIdentifier setFormattedPath:] */

void FUN_10af88e14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10af88e1c; end: 10af88e23; -[SCNetworkActivityAttributionIdentifier boltUseCase] */

undefined8 FUN_10af88e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af88e24; end: 10af88e2b; -[SCNetworkActivityAttributionIdentifier setBoltUseCase:] */

void FUN_10af88e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10af88e2c; end: 10af88e33; -[SCNetworkActivityAttributionIdentifier mediaContextType] */

undefined8 FUN_10af88e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af88e34; end: 10af88e3b; -[SCNetworkActivityAttributionIdentifier setMediaContextType:] */

void FUN_10af88e34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10af88e3c; end: 10af88e43; -[SCNetworkActivityAttributionIdentifier grpcFeature] */

undefined8 FUN_10af88e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10af88e44; end: 10af88e4b; -[SCNetworkActivityAttributionIdentifier setGrpcFeature:] */

void FUN_10af88e44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10af88e4c; end: 10af88e53; -[SCNetworkActivityAttributionIdentifier descriptionStr] */

undefined8 FUN_10af88e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10af88e54; end: 10af88e5b; -[SCNetworkActivityAttributionIdentifier setDescriptionStr:] */

void FUN_10af88e54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10af88e5c; end: 10af88ebb; -[SCNetworkActivityAttributionIdentifier .cxx_destruct] */

void FUN_10af88e5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10af88ebc; end: 10af88ee7;  */

undefined ** FUN_10af88ebc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dce198;
  if (param_1 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dce178;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dce1b8;
  if (param_1 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10af88ee8; end: 10af88f4b;  */

long FUN_10af88ee8(void)

{
  int iVar1;
  undefined4 uStack_198;
  undefined1 auStack_194 [48];
  long lStack_164;
  long lStack_134;
  long lStack_11c;
  
  uStack_198 = 0x5d;
  iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
  _task_info(iVar1,0x17,auStack_194,&uStack_198);
  if (iVar1 == 0) {
    lStack_134 = (lStack_11c + lStack_164) - lStack_134;
  }
  else {
    lStack_134 = 0;
  }
  return lStack_134;
}



/* Entry: 10af88f4c; end: 10af89003;  */

undefined8 FUN_10af88f4c(void)

{
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  _malloc_zone_statistics(0,auStack_30);
  return uStack_18;
}



/* Entry: 10af89004; end: 10af89057;  */

long FUN_10af89004(void)

{
  int iVar1;
  undefined4 uStack_198;
  undefined1 auStack_194 [8];
  int iStack_18c;
  
  uStack_198 = 0x5d;
  iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
  _task_info(iVar1,0x16,auStack_194,&uStack_198);
  if (iVar1 != 0) {
    iStack_18c = 0;
  }
  return (long)iStack_18c;
}



/* Entry: 10af89058; end: 10af890cf; +[SCAppResourceUsage mainThreadCpuUsage] */

double FUN_10af89058(void)

{
  int iVar1;
  double dVar2;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_44 = 10;
  iVar1 = iRam00000001137f0f40;
  _thread_info(iRam00000001137f0f40,3,&uStack_40,&uStack_44);
  dVar2 = -1.0;
  if ((iVar1 == 0) && (dVar2 = 0.0, (uStack_28._4_1_ >> 1 & 1) == 0)) {
    dVar2 = ((double)(int)uStack_30 / 1000.0) * 100.0;
  }
  return dVar2;
}



/* Entry: 10af890d0; end: 10af8922f; +[SCAppResourceUsage mainThreadCpuTime] */

double FUN_10af890d0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = 0;
  dVar6 = 0.0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_94 = 10;
  iVar1 = iRam00000001137f0f40;
  _thread_info(iRam00000001137f0f40,3,&uStack_90,&uStack_94);
  puVar4 = PTR____NSDictionary0__struct_11034ab58;
  if (iVar1 == 0) {
    dVar6 = 0.0;
    dVar5 = 0.0;
    if ((uStack_78._4_1_ >> 1 & 1) == 0) {
      dVar6 = (double)((int)uStack_90 * 1000) + (double)uStack_90._4_4_ * 0.001;
      dVar5 = (double)((int)uStack_88 * 1000) + (double)uStack_88._4_4_ * 0.001;
    }
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f3ed18;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_60 = &PTR____CFConstantStringClassReference_110f3ecf8;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_58 = puVar2;
    func_0x00010c0df720(dVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_a8 = FUN_10af89230;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_e4 = 10;
    puStack_b0 = &stack0xfffffffffffffff0;
    iVar1 = iRam00000001137f0f40;
    _thread_info(iRam00000001137f0f40,3,&uStack_e0,&uStack_e4);
    dVar6 = -1.0;
    if (iVar1 == 0) {
      dVar6 = 0.0;
      if ((uStack_c8._4_1_ >> 1 & 1) == 0) {
        dVar6 = (double)((int)uStack_e0 * 1000) + (double)uStack_e0._4_4_ * 0.001 +
                (double)((int)uStack_d8 * 1000) + (double)uStack_d8._4_4_ * 0.001;
      }
    }
    return dVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return dVar6;
}



/* Entry: 10af89230; end: 10af892bf; +[SCAppResourceUsage mainThreadTotalCpuTime] */

double FUN_10af89230(void)

{
  int iVar1;
  double dVar2;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_44 = 10;
  iVar1 = iRam00000001137f0f40;
  _thread_info(iRam00000001137f0f40,3,&uStack_40,&uStack_44);
  dVar2 = -1.0;
  if ((iVar1 == 0) && (dVar2 = 0.0, (uStack_28._4_1_ >> 1 & 1) == 0)) {
    dVar2 = (double)((int)uStack_40 * 1000) + (double)uStack_40._4_4_ * 0.001 +
            (double)((int)uStack_38 * 1000) + (double)uStack_38._4_4_ * 0.001;
  }
  return dVar2;
}



/* Entry: 10af892c0; end: 10af89423; +[SCAppResourceUsage cpuUsage] */

undefined1 * FUN_10af892c0(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  uint *puVar4;
  int extraout_w10;
  ulong unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puStack_1140;
  undefined *puStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  ulong uStack_1120;
  undefined *puStack_1118;
  undefined1 *puStack_1110;
  code *pcStack_1108;
  undefined4 uStack_1100;
  uint uStack_10fc;
  long lStack_10f8;
  undefined4 uStack_10ec;
  uint auStack_10e8 [32];
  uint auStack_1068 [1024];
  long lStack_68;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar1 = PTR__mach_task_self__11034c5c8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_10ec = 0x400;
  puVar2 = (undefined1 *)(ulong)*(uint *)PTR__mach_task_self__11034c5c8;
  puVar4 = auStack_1068;
  _task_info(puVar2,0x12,puVar4,&uStack_10ec);
  if ((int)puVar2 == 0) {
    puVar2 = (undefined1 *)(ulong)*(uint *)puVar1;
    puVar4 = &uStack_10fc;
    _task_threads(puVar2,&lStack_10f8);
    if ((int)puVar2 == 0) {
      if (uStack_10fc == 0) {
        puVar4 = (uint *)0x0;
      }
      else {
        unaff_x20 = 0;
        do {
          uStack_1100 = 0x20;
          puVar2 = (undefined1 *)(ulong)*(uint *)(lStack_10f8 + unaff_x20 * 4);
          puVar4 = auStack_10e8;
          _thread_info(puVar2,3,puVar4,&uStack_1100);
          if ((int)puVar2 != 0) goto LAB_10af893e0;
          _mach_port_deallocate(*(undefined4 *)puVar1,*(undefined4 *)(lStack_10f8 + unaff_x20 * 4));
          unaff_x20 = unaff_x20 + 1;
        } while (unaff_x20 < uStack_10fc);
        puVar4 = (uint *)((ulong)uStack_10fc << 2);
      }
      puVar2 = (undefined1 *)(ulong)*(uint *)puVar1;
      _vm_deallocate(puVar2,lStack_10f8);
    }
  }
LAB_10af893e0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_1140;
  puStack_1118 = puVar1;
  pcStack_1108 = FUN_10af89424;
  puStack_1138 = PTR_PTR_112703048;
  puStack_1140 = puVar2;
  uStack_1120 = unaff_x20;
  puStack_1110 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_1140,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined1 **)0x0) {
    uVar6 = *(undefined8 *)(puVar4 + 2);
    uVar5 = *(undefined8 *)puVar4;
    if (*(long *)(puVar4 + 2) != 0) {
      do {
        FUN_10af898c4();
      } while (extraout_w10 != 0);
    }
    uStack_1128 = *(undefined8 *)((long)ppuVar3 + 0x20);
    uStack_1130 = *(undefined8 *)((long)ppuVar3 + 0x18);
    *(undefined8 *)((long)ppuVar3 + 0x20) = uVar6;
    *(undefined8 *)((long)ppuVar3 + 0x18) = uVar5;
    FUN_10af89898(&uStack_1130);
  }
  return (undefined1 *)ppuVar3;
}



/* Entry: 10af89424; end: 10af8949b; -[SCNProfilingClientTrace initWithCpp:] */

undefined1 * FUN_10af89424(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112703048;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10af898c4();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10af89898(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10af8949c; end: 10af894f7; -[SCNProfilingClientTrace reset] */

void FUN_10af8949c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10af894f8; end: 10af89627; -[SCNProfilingClientTrace getTraceEvents] */

void FUN_10af894f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_48;
  long lStack_40;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(&lStack_48);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (lStack_40 - lStack_48) / 0x38);
  _objc_retainAutoreleasedReturnValue();
  for (; lStack_48 != lStack_40; lStack_48 = lStack_48 + 0x38) {
    lVar2 = lStack_48;
    FUN_10af89e2c(lStack_48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  func_0x00010af896ec(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10af89628; end: 10af89653;  */

void FUN_10af89628(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10af897b4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af89654; end: 10af896a7; -[SCNProfilingClientTrace .cxx_destruct] */

void FUN_10af89654(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110c9b9e8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10af89898((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}


