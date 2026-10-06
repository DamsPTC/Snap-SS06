/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090aed08; end: 1090aed53;  */

void FUN_1090aed08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x0001090aede0();
  func_0x00010be69e00((double)param_4 / 1000000000.0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090aed54; end: 1090aee4b;  */

void FUN_1090aed54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090aee4c; end: 1090aef5f; -[SCNeoPlayerConfiguration initWithCurrentTimeUpdateInterval:bufferProcessingPipelineSize:maxForwardDecodedFramesSize:maxDecodingFramesInFlight:useCppNeoPlayer:enableCustomOutputImplementation:subtitleSchedulingMode:rendererCreationThreadMode:spsReorderDepthThreshold:invalidSessionRetryLimit:enableBackgroundRecoveryRevamp:enableFrozenFrameRecovery:enableConsoleLogging:minLogLevel:parserType:requireVideoFrameOutputSufficientBuffer:shouldCheckPipelineBackPressure:enableSafeVideoRendererTeardown:enableFileReopenPerRead:enablePerPlayerMediaQueue:mediaQueuePriority:enableResizeScaleSync:discardStaleVideoFramesOnSeek:] */

void FUN_1090aee4c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined4 param_16,
                  undefined1 param_17,undefined8 param_18,undefined4 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112700568;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    *(undefined8 *)((long)puVar1 + 0x80) = param_3[2];
    *(undefined8 *)((long)puVar1 + 0x78) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    uVar2 = uRam0000000113829b60;
    *(undefined8 *)((long)puVar1 + 0x90) = uRam0000000113829b68;
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x98) = uRam0000000113829b70;
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 0xb) = param_13._1_1_;
    *(undefined1 *)((long)puVar1 + 0x11) = param_13._2_1_;
    *(undefined4 *)((long)puVar1 + 0x18) = param_14;
    *(undefined8 *)((long)puVar1 + 0x50) = param_12;
    *(undefined8 *)((long)puVar1 + 0x58) = param_15;
    *(undefined1 *)((long)puVar1 + 0x12) = (undefined1)param_16;
    *(undefined1 *)((long)puVar1 + 0x13) = param_16._1_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = param_16._2_1_;
    *(undefined1 *)((long)puVar1 + 0x10) = param_16._3_1_;
    *(undefined1 *)((long)puVar1 + 0x14) = param_17;
    *(undefined8 *)((long)puVar1 + 0x60) = param_18;
    *(undefined1 *)((long)puVar1 + 0x15) = (undefined1)param_19;
    *(undefined1 *)((long)puVar1 + 0xf) = param_19._1_1_;
  }
  return;
}



/* Entry: 1090aef60; end: 1090aef67; +[SCNeoPlayerConfiguration makeTestConfigurationWithEnableCpp:useCustomOutput:parserType:] */

void FUN_1090aef60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b79b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_makeTestConfigurationWithEnableC_11260b880);
  return;
}



/* Entry: 1090aef68; end: 1090af01b; +[SCNeoPlayerConfiguration makeTestConfigurationWithEnableCpp:useCustomOutput:parserType:enableBackgroundRecoveryRevamp:] */

void FUN_1090aef68(void)

{
  _objc_alloc(PTR_PTR_1126dd4c8);
  func_0x00010c0073a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090af01c; end: 1090af02f; -[SCNeoPlayerConfiguration currentTimeUpdateInterval] */

void FUN_1090af01c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  param_1[1] = *(undefined8 *)(param_2 + 0x78);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x80);
  return;
}



/* Entry: 1090af030; end: 1090af037; -[SCNeoPlayerConfiguration bufferProcessingPipelineSize] */

undefined8 FUN_1090af030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090af038; end: 1090af03f; -[SCNeoPlayerConfiguration maxForwardDecodedFramesSize] */

undefined8 FUN_1090af038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1090af040; end: 1090af047; -[SCNeoPlayerConfiguration cppPlayer] */

undefined1 FUN_1090af040(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1090af048; end: 1090af04f; -[SCNeoPlayerConfiguration enableCustomOutputImplementation] */

undefined1 FUN_1090af048(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1090af050; end: 1090af057; -[SCNeoPlayerConfiguration maxDecodingFramesInFlight] */

undefined8 FUN_1090af050(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1090af058; end: 1090af05f; -[SCNeoPlayerConfiguration subtitleSchedulingMode] */

undefined8 FUN_1090af058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1090af060; end: 1090af067; -[SCNeoPlayerConfiguration setSubtitleSchedulingMode:] */

void FUN_1090af060(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 1090af068; end: 1090af07b; -[SCNeoPlayerConfiguration subtitlePollingInterval] */

void FUN_1090af068(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[1] = *(undefined8 *)(param_2 + 0x90);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x98);
  return;
}



/* Entry: 1090af07c; end: 1090af08f; -[SCNeoPlayerConfiguration setSubtitlePollingInterval:] */

void FUN_1090af07c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x98) = param_3[2];
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}



/* Entry: 1090af090; end: 1090af097; -[SCNeoPlayerConfiguration spsReorderDepthThreshold] */

undefined8 FUN_1090af090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1090af098; end: 1090af09f; -[SCNeoPlayerConfiguration rendererCreationThreadMode] */

undefined8 FUN_1090af098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1090af0a0; end: 1090af0a7; -[SCNeoPlayerConfiguration invalidSessionRetryLimit] */

undefined8 FUN_1090af0a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1090af0a8; end: 1090af0af; -[SCNeoPlayerConfiguration enableBackgroundRecoveryRevamp] */

undefined1 FUN_1090af0a8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1090af0b0; end: 1090af0b7; -[SCNeoPlayerConfiguration enableFrozenFrameRecovery] */

undefined1 FUN_1090af0b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1090af0b8; end: 1090af0bf; -[SCNeoPlayerConfiguration enableSafeVideoRendererTeardown] */

undefined1 FUN_1090af0b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1090af0c0; end: 1090af0c7; -[SCNeoPlayerConfiguration enableFirstFrameRevealHandoff] */

undefined1 FUN_1090af0c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 1090af0c8; end: 1090af0cf; -[SCNeoPlayerConfiguration setEnableFirstFrameRevealHandoff:] */

void FUN_1090af0c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 1090af0d0; end: 1090af0d7; -[SCNeoPlayerConfiguration gateStallOnPlaybackRequested] */

undefined1 FUN_1090af0d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 1090af0d8; end: 1090af0df; -[SCNeoPlayerConfiguration setGateStallOnPlaybackRequested:] */

void FUN_1090af0d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xe) = param_3;
  return;
}



/* Entry: 1090af0e0; end: 1090af0e7; -[SCNeoPlayerConfiguration discardStaleVideoFramesOnSeek] */

undefined1 FUN_1090af0e0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 1090af0e8; end: 1090af0ef; -[SCNeoPlayerConfiguration setDiscardStaleVideoFramesOnSeek:] */

void FUN_1090af0e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf) = param_3;
  return;
}



/* Entry: 1090af0f0; end: 1090af0f7; -[SCNeoPlayerConfiguration enableFileReopenPerRead] */

undefined1 FUN_1090af0f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1090af0f8; end: 1090af0ff; -[SCNeoPlayerConfiguration enableConsoleLogging] */

undefined1 FUN_1090af0f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 1090af100; end: 1090af107; -[SCNeoPlayerConfiguration minLogLevel] */

undefined4 FUN_1090af100(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 1090af108; end: 1090af10f; -[SCNeoPlayerConfiguration parserType] */

undefined8 FUN_1090af108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1090af110; end: 1090af117; -[SCNeoPlayerConfiguration requireVideoFrameOutputSufficientBuffer] */

undefined1 FUN_1090af110(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 1090af118; end: 1090af11f; -[SCNeoPlayerConfiguration shouldCheckPipelineBackPressure] */

undefined1 FUN_1090af118(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 1090af120; end: 1090af127; -[SCNeoPlayerConfiguration enablePerPlayerMediaQueue] */

undefined1 FUN_1090af120(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 1090af128; end: 1090af12f; -[SCNeoPlayerConfiguration mediaQueuePriority] */

undefined8 FUN_1090af128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1090af130; end: 1090af137; -[SCNeoPlayerConfiguration enableResizeScaleSync] */

undefined1 FUN_1090af130(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 1090af138; end: 1090af13f; -[SCNeoPlayerConfiguration externalVideoRenderer] */

undefined8 FUN_1090af138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1090af140; end: 1090af16f; -[SCNeoPlayerConfiguration setExternalVideoRenderer:] */

void FUN_1090af140(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090af170; end: 1090af177; -[SCNeoPlayerConfiguration copyEncodedSampleData] */

undefined1 FUN_1090af170(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 1090af178; end: 1090af17f; -[SCNeoPlayerConfiguration setCopyEncodedSampleData:] */

void FUN_1090af178(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x16) = param_3;
  return;
}



/* Entry: 1090af180; end: 1090af18b; -[SCNeoPlayerConfiguration .cxx_destruct] */

void FUN_1090af180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x68,0);
  return;
}



/* Entry: 1090af18c; end: 1090af427; -[SCNeoPlayerDynamicMediaSampleBufferProvider initWithURL:dataProviderFactory:instruments:mediaAssetConfiguration:playerConfiguration:mediaQueue:] */

undefined8 *
FUN_1090af18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x0001090afd80();
  func_0x0001090afddc();
  func_0x0001090afd98();
  _objc_retain(param_6);
  func_0x0001090afdd4();
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_112700570;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    func_0x0001090afddc();
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    func_0x0001090afda8(uVar2);
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126dd4c0;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x0001090afda8(uVar2);
    func_0x0001090afdd4();
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bff60;
    _objc_alloc();
    func_0x00010c01e480();
    func_0x00010c11de00(puVar1[0xb]);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf12140(puVar3);
    func_0x0001090afdb8();
    _objc_retain(puVar3);
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    func_0x0001090afd98();
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126dd4d0;
    _objc_alloc();
    uVar2 = puVar1[0xb];
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e6e0();
    uVar5 = puVar1[7];
    puVar1[7] = puVar4;
    func_0x0001090afda8(uVar5);
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = puVar1[0xb];
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf850c0(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar3);
  }
  func_0x0001090afdc0();
  _objc_release(param_7);
  _objc_release(param_6);
  func_0x0001090afd68();
  func_0x0001090afda0();
  func_0x0001090afd4c();
  return puVar1;
}



/* Entry: 1090af428; end: 1090af4a3;  */

void FUN_1090af428(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c066e20(*(undefined8 *)(param_1 + 0x38),param_2,0,*(undefined8 *)(param_1 + 0x18),0,
                        0);
    func_0x00010c187b00(*(undefined8 *)(param_1 + 0x38),param_2,0,1);
    func_0x00010c1be780(*(undefined8 *)(param_1 + 0x38),param_2,1,0);
    func_0x00010c18b620(*(undefined8 *)(param_1 + 0x38),param_2,param_1,0);
    func_0x00010c195460(*(undefined8 *)(param_1 + 0x38),param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090af4a4; end: 1090af4bb; -[SCNeoPlayerDynamicMediaSampleBufferProvider delegate] */

void FUN_1090af4a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090af4bc; end: 1090af4f7; -[SCNeoPlayerDynamicMediaSampleBufferProvider innerSampleBufferProvider] */

void FUN_1090af4bc(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001090afddc();
  _objc_sync_exit(param_1);
  func_0x0001090afd4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090af4f8; end: 1090af547; -[SCNeoPlayerDynamicMediaSampleBufferProvider setDelegate:] */

void FUN_1090af4f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001090afd80();
  _objc_storeWeak(param_1 + 0x40,param_3);
  func_0x00010c065560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  func_0x0001090afd4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090af548; end: 1090af5b7; -[SCNeoPlayerDynamicMediaSampleBufferProvider _onError:] */

void FUN_1090af548(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001090afd80();
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x38),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0e3f00(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149640();
    func_0x0001090afd68();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090af5b8; end: 1090af5bf; -[SCNeoPlayerDynamicMediaSampleBufferProvider mediaDataManager:didFailToLoadWithError:forSourceIndex:] */

void FUN_1090af5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be690b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onError__112577dc8,param_4);
  return;
}



/* Entry: 1090af5c0; end: 1090af8a7; -[SCNeoPlayerDynamicMediaSampleBufferProvider mediaDataManager:didUpdateBufferAtByteOffset:forSourceIndex:loadLatency:loadSize:] */

void FUN_1090af5c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [7];
  undefined1 uStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001090afd80();
  uVar3 = param_3;
  func_0x00010bf21ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf51ee0();
  if ((int)uVar4 != 0) {
    uStack_69 = 0;
    iVar1 = 0xf54dbb7;
    _memcmp(&DAT_10f54dbb7,auStack_70,7);
    func_0x00010c2778c0(*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    if (iVar1 == 0) {
      func_0x0001090afdc8();
      func_0x0001090afd5c();
      func_0x00010c089aa0(uVar3);
      uVar4 = uVar3;
      func_0x00010bf4baa0();
      if ((int)uVar4 != 0) {
        func_0x0001090afd88();
        func_0x00010c195460(param_3);
        func_0x00010bf51ec0(uVar3);
        puVar2 = PTR_PTR_1126dd4d8;
        _objc_alloc(PTR_PTR_1126dd4d8);
        func_0x00010bf46560(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        _objc_loadWeakRetained();
        func_0x00010c0579e0(puVar2);
        func_0x0001090afd5c();
        _objc_release(param_3);
        func_0x0001090afd98();
        _objc_sync_enter(param_1);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x20) = uVar4;
        _objc_release(uVar3);
        _objc_sync_exit(param_1);
        func_0x0001090afd68();
        func_0x0001090afdb8();
      }
      func_0x00010c2778c0(*(undefined8 *)(param_1 + 0x30));
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001090afdc8();
      func_0x0001090afd5c();
      func_0x00010bf18e80(*(undefined8 *)(param_1 + 0x38));
      func_0x0001090afd88();
      puVar2 = PTR_PTR_1126dd4e0;
      _objc_alloc();
      func_0x00010c24ca00(*(undefined8 *)(param_1 + 0x50));
      _objc_loadWeakRetained(param_1 + 0x40);
      func_0x00010c029280();
      func_0x0001090afdb8();
      func_0x0001090afd98();
      _objc_sync_enter(param_1);
      *(undefined **)(param_1 + 0x20) = puVar2;
      func_0x0001090afdd4();
      func_0x0001090afdc0();
      _objc_sync_exit(param_1);
      func_0x0001090afd68();
      _objc_opt_new(PTR_PTR_1126dd4e8);
      func_0x00010c064840(puVar2);
      func_0x0001090afdc0();
      func_0x00010bf95a20(*(undefined8 *)(param_1 + 0x38));
      func_0x00010c2778c0(*(undefined8 *)(param_1 + 0x30));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    func_0x00010bf941e0();
    func_0x0001090afd68();
  }
  func_0x0001090afda0();
  func_0x0001090afd4c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1090af8a8; end: 1090af8ab; -[SCNeoPlayerDynamicMediaSampleBufferProvider mediaDataManager:didReachEndforSourceIndex:] */

void FUN_1090af8a8(void)

{
  return;
}



/* Entry: 1090af8ac; end: 1090af8ef; -[SCNeoPlayerDynamicMediaSampleBufferProvider dequeueNextAudioSampleBufferWithError:] */

void FUN_1090af8ac(undefined8 param_1)

{
  func_0x00010c065560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6df60();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090afda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1090af8f0; end: 1090af933; -[SCNeoPlayerDynamicMediaSampleBufferProvider dequeueNextVideoSampleBufferWithError:] */

void FUN_1090af8f0(undefined8 param_1)

{
  func_0x00010c065560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6dfe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090afda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1090af934; end: 1090af963; -[SCNeoPlayerDynamicMediaSampleBufferProvider hasNextAudioSampleBuffer] */

void FUN_1090af934(void)

{
  func_0x00010c065560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd9700();
  FUN_1090afd40();
  return;
}



/* Entry: 1090af964; end: 1090af993; -[SCNeoPlayerDynamicMediaSampleBufferProvider hasNextVideoSampleBuffer] */

void FUN_1090af964(void)

{
  func_0x00010c065560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd9760();
  FUN_1090afd40();
  return;
}



/* Entry: 1090af994; end: 1090af9c3; -[SCNeoPlayerDynamicMediaSampleBufferProvider didReachEndOfAudioTrack] */

void FUN_1090af994(void)

{
  func_0x00010c065560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78e20();
  FUN_1090afd40();
  return;
}



/* Entry: 1090af9c4; end: 1090af9f3; -[SCNeoPlayerDynamicMediaSampleBufferProvider didReachEndOfVideoTrack] */

void FUN_1090af9c4(void)

{
  func_0x00010c065560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78ea0();
  FUN_1090afd40();
  return;
}



/* Entry: 1090af9f4; end: 1090afa9f; -[SCNeoPlayerDynamicMediaSampleBufferProvider seekToTime:toleranceBefore:toleranceAfter:] */

void FUN_1090af9f4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x00010c065560();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_58 = param_4[1];
    uStack_60 = *param_4;
    uStack_50 = param_4[2];
    uStack_78 = param_5[1];
    uStack_80 = *param_5;
    uStack_70 = param_5[2];
    uStack_98 = param_6[1];
    uStack_a0 = *param_6;
    uStack_90 = param_6[2];
    func_0x00010c1572c0(param_1,param_2,param_3,&uStack_60,&uStack_80,&uStack_a0);
  }
  func_0x0001090afd4c();
  return;
}



/* Entry: 1090afaa0; end: 1090afadb; -[SCNeoPlayerDynamicMediaSampleBufferProvider timebase] */

undefined8 FUN_1090afaa0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf99fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fdc0();
  func_0x0001090afd4c();
  return uVar1;
}



/* Entry: 1090afadc; end: 1090afb47; -[SCNeoPlayerDynamicMediaSampleBufferProvider setVideoTrackId:audioTrackId:currentTime:] */

void FUN_1090afadc(undefined8 param_1)

{
  func_0x00010c065560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222100();
  _objc_release(param_1);
  return;
}



/* Entry: 1090afb48; end: 1090afb5f; -[SCNeoPlayerDynamicMediaSampleBufferProvider computeMediaDataManagerMetrics] */

void FUN_1090afb48(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf45910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_2 + 0x38),PTR_s_computeMetrics_1125aefe8)
    ;
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1090afb60; end: 1090afb9b; -[SCNeoPlayerDynamicMediaSampleBufferProvider loadedTimeRanges] */

void FUN_1090afb60(undefined8 param_1)

{
  func_0x00010c065560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ca60();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090afd4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1090afb9c; end: 1090afbd7; -[SCNeoPlayerDynamicMediaSampleBufferProvider trackInfos] */

void FUN_1090afb9c(undefined8 param_1)

{
  func_0x00010c065560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090afd4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1090afbd8; end: 1090afc07; -[SCNeoPlayerDynamicMediaSampleBufferProvider loadedTrackInfos] */

void FUN_1090afbd8(void)

{
  func_0x00010c065560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ca80();
  FUN_1090afd40();
  return;
}



/* Entry: 1090afc08; end: 1090afc83; -[SCNeoPlayerDynamicMediaSampleBufferProvider error] */

void FUN_1090afc08(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c065560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090afd68();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  func_0x0001090afd4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1090afc84; end: 1090afccb; -[SCNeoPlayerDynamicMediaSampleBufferProvider duration] */

void FUN_1090afc84(undefined8 *param_1,long param_2)

{
  func_0x00010c065560();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010bf8b160(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1090afccc; end: 1090afd3f; -[SCNeoPlayerDynamicMediaSampleBufferProvider .cxx_destruct] */

void FUN_1090afccc(long param_1)

{
  func_0x0001090afd54(param_1 + 0x58);
  func_0x0001090afd54(param_1 + 0x50);
  func_0x0001090afd54(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  func_0x0001090afd54(param_1 + 0x38);
  func_0x0001090afd54(param_1 + 0x30);
  func_0x0001090afd54(param_1 + 0x28);
  func_0x0001090afd54(param_1 + 0x20);
  func_0x0001090afd54(param_1 + 0x18);
  func_0x0001090afd54(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090afd40; end: 1090afde3;  */

void FUN_1090afd40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090afde4; end: 1090affbb; -[SCNeoPlayerEventLogger initWithMinLogLevel:playItemIdentifier:playerItemURL:configuration:] */

undefined8 *
FUN_1090afde4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined **param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x0001090b057c();
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_112700578;
  puVar2 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = param_3;
    if ((param_4 == (undefined **)0x0) ||
       (ppuVar3 = param_4, func_0x00010c08fa60(), ppuVar3 == (undefined **)0x0)) {
      func_0x0001090b054c();
      param_4 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    _objc_retain(param_4);
    uVar4 = puVar2[3];
    puVar2[3] = param_4;
    _objc_release(uVar4);
    func_0x0001090b0584();
    func_0x00010bf53a00(param_6);
    func_0x00010beec820(param_5);
    _objc_retainAutoreleasedReturnValue();
    FUN_109095bd4(auStack_78);
    func_0x00010bf8fb20(param_6);
    uVar4 = 0x68;
    __Znwm();
    FUN_1090e41c0();
    puVar1 = puVar2 + 2;
    uStack_68 = uVar4;
    if (puVar1 != &uStack_68) {
      uStack_68 = 0;
      uVar5 = *puVar1;
      *puVar1 = uVar4;
      FUN_109097138(uVar5);
    }
    FUN_109097110(&uStack_68);
    func_0x0001090b0544();
    _objc_release(param_5);
    func_0x0001090b0564();
    uVar4 = param_6;
    func_0x00010bf8fb20();
    if ((int)uVar4 != 0) {
      FUN_1090e42f8(puVar2[2],*(undefined4 *)(puVar2 + 1));
    }
  }
  _objc_release(param_6);
  func_0x0001090b055c();
  func_0x0001090b054c();
  return puVar2;
}



/* Entry: 1090affbc; end: 1090b0023; -[SCNeoPlayerEventLogger dealloc] */

void FUN_1090affbc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_30;
  undefined *puStack_28;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  puStack_28 = PTR_PTR_112700578;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090b0024; end: 1090b002b; -[SCNeoPlayerEventLogger instance] */

undefined8 FUN_1090b0024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1090b002c; end: 1090b0053; -[SCNeoPlayerEventLogger loggingIdentifier] */

void FUN_1090b002c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090b0054; end: 1090b005b; -[SCNeoPlayerEventLogger didReceiveNewItem] */

void FUN_1090b0054(long param_1)

{
  FUN_1090e4ed0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58));
  func_0x0001090e4f20();
  return;
}



/* Entry: 1090b005c; end: 1090b011b; -[SCNeoPlayerEventLogger willTransitionFromState:toState:debugMessage:] */

void FUN_1090b005c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x0001090b057c();
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_109095bd4(auStack_38,param_3);
  func_0x0001090b0584();
  FUN_109095bd4(auStack_48,param_5);
  FUN_1090e44f4(uVar1,auStack_38,auStack_40,auStack_48);
  func_0x0001090b0544();
  func_0x0001090b0564();
  func_0x000107c278f4(auStack_38);
  func_0x0001090b055c();
  func_0x0001090b054c();
  return;
}



/* Entry: 1090b011c; end: 1090b0137; -[SCNeoPlayerEventLogger didSeekAtTime:forTrackId:] */

void FUN_1090b011c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001090e4f20(*(undefined8 *)(param_1 + 0x10),param_4,&UNK_10f550989);
  return;
}



/* Entry: 1090b0138; end: 1090b014f; -[SCNeoPlayerEventLogger willParseBuffer:tmpDataLength:moovSectionLength:moovSectionOffset:] */

void FUN_1090b0138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001090e4f70(*(undefined8 *)(param_1 + 0x10),param_3,param_4,param_5,param_6);
  func_0x0001090e4f20();
  return;
}



/* Entry: 1090b0150; end: 1090b019b; -[SCNeoPlayerEventLogger didParseBuffer:parsedLength:parserResult:] */

void FUN_1090b0150(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_109095bd4(auStack_38,param_5);
  func_0x0001090e46f0(uVar1,param_3,param_4,auStack_38);
  func_0x0001090b0544();
  return;
}



/* Entry: 1090b019c; end: 1090b01e7; -[SCNeoPlayerEventLogger didLocateBox:offset:size:] */

void FUN_1090b019c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_109095bd4(auStack_38,param_3);
  func_0x0001090e4720(uVar1,auStack_38,param_4,param_5);
  func_0x0001090b0544();
  return;
}



/* Entry: 1090b01e8; end: 1090b0207; -[SCNeoPlayerEventLogger didDequeueSampleBufferAtTime:dataLen:forTrackId:] */

void FUN_1090b01e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_1090e47f0();
  FUN_1090e4460(uVar1,0,&UNK_10f550b1c);
  return;
}



/* Entry: 1090b0208; end: 1090b0247; -[SCNeoPlayerEventLogger didFailToDequeueSampleBufferForTrackId:error:] */

void FUN_1090b0208(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_109095b5c(auStack_28,param_4);
  FUN_1090e4868(uVar1,param_3,auStack_28);
  func_0x0001090b0554();
  return;
}



/* Entry: 1090b0248; end: 1090b0283; -[SCNeoPlayerEventLogger didLoadTrackInfoForTrackId:type:] */

void FUN_1090b0248(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
    func_0x0001090e4f30(*(undefined8 *)(param_1 + 0x10),param_3,&UNK_10f550bdc);
  }
  else if (param_4 == 1) {
    func_0x0001090e4f30(*(undefined8 *)(param_1 + 0x10),param_3,&UNK_10f550bbb);
  }
  else {
    if (param_4 != 0) {
      return;
    }
    func_0x0001090e4f30(*(undefined8 *)(param_1 + 0x10),param_3,&UNK_10f550b92);
  }
  return;
}



/* Entry: 1090b0284; end: 1090b0293; -[SCNeoPlayerEventLogger didUpdateActiveVideoTrackId:audioTrackId:] */

void FUN_1090b0284(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001090e4f30(*(undefined8 *)(param_1 + 0x10),param_3,&UNK_10f550ae0);
  return;
}



/* Entry: 1090b0294; end: 1090b02bb; -[SCNeoPlayerEventLogger didEncounterMediaParseError:] */

void FUN_1090b0294(void)

{
  func_0x0001090b0510();
  func_0x0001090b0590();
  FUN_1090e4944();
  func_0x0001090b0554();
  return;
}



/* Entry: 1090b02bc; end: 1090b02e3; -[SCNeoPlayerEventLogger didEncounterPlaybackError:] */

void FUN_1090b02bc(void)

{
  func_0x0001090b0510();
  func_0x0001090b0590();
  func_0x0001090e4974();
  func_0x0001090b0554();
  return;
}



/* Entry: 1090b02e4; end: 1090b02ef; -[SCNeoPlayerEventLogger didLoadTopLevelHLSStreamsWithCount:] */

void FUN_1090b02e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001090e4f30(*(undefined8 *)(param_1 + 0x10),param_3,&UNK_10f550c46);
  return;
}



/* Entry: 1090b02f0; end: 1090b0317; -[SCNeoPlayerEventLogger didLoadSegmetsInHLSStream:count:] */

void FUN_1090b02f0(void)

{
  func_0x0001090b0520();
  func_0x0001090b056c();
  func_0x0001090e49c8();
  func_0x0001090b0544();
  return;
}



/* Entry: 1090b0318; end: 1090b033f; -[SCNeoPlayerEventLogger didUpdateTopLevelHLSStream:streamId:] */

void FUN_1090b0318(void)

{
  func_0x0001090b0520();
  func_0x0001090b056c();
  func_0x0001090e49f4();
  func_0x0001090b0544();
  return;
}



/* Entry: 1090b0340; end: 1090b0367; -[SCNeoPlayerEventLogger didUpdateAudioHLSStream:streamId:] */

void FUN_1090b0340(void)

{
  func_0x0001090b0520();
  func_0x0001090b056c();
  func_0x0001090e4a20();
  func_0x0001090b0544();
  return;
}



/* Entry: 1090b0368; end: 1090b0373; -[SCNeoPlayerEventLogger didUpdateHLSVideoSegmentMediaSequence:] */

void FUN_1090b0368(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001090e4f30(*(undefined8 *)(param_1 + 0x10),param_3,&UNK_10f550cee);
  return;
}



/* Entry: 1090b0374; end: 1090b037f; -[SCNeoPlayerEventLogger didUpdateHLSAudioSegmentMediaSequence:] */

void FUN_1090b0374(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001090e4f30(*(undefined8 *)(param_1 + 0x10),param_3,&UNK_10f550d20);
  return;
}



/* Entry: 1090b0380; end: 1090b0387; -[SCNeoPlayerEventLogger didLoadHLSSegmentStreamMediaInfo] */

void FUN_1090b0380(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar2 + 0x60) == '\x01') {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x10) + 8);
    for (lVar3 = *(long *)(lVar2 + 0x18) << 4; lVar3 != 0; lVar3 = lVar3 + -0x10) {
      if (*(uint *)(puVar1 + -1) < 2) {
        (*(code *)*puVar1)(1,*(undefined4 *)(lVar2 + 0x50),lVar2 + 0x48,&UNK_10f550d52,
                           &stack0x00000000);
      }
      puVar1 = puVar1 + 2;
    }
  }
  return;
}



/* Entry: 1090b0388; end: 1090b03af; -[SCNeoPlayerEventLogger didEncounterAudioBufferDequeueError:] */

void FUN_1090b0388(void)

{
  func_0x0001090b0510();
  func_0x0001090b0590();
  FUN_1090e4aa4();
  func_0x0001090b0554();
  return;
}



/* Entry: 1090b03b0; end: 1090b03d7; -[SCNeoPlayerEventLogger didEncounterVideoBufferDequeueError:] */

void FUN_1090b03b0(void)

{
  func_0x0001090b0510();
  func_0x0001090b0590();
  func_0x0001090e4ad4();
  func_0x0001090b0554();
  return;
}



/* Entry: 1090b03d8; end: 1090b03df; -[SCNeoPlayerEventLogger didOutputAudioSampleBuffer] */

void FUN_1090b03d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar1 + 0x54) >> 3 & 1) == 0) {
    func_0x0001090e4f20(lVar1,param_2,&UNK_10f550e15);
    *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) | 8;
  }
  return;
}



/* Entry: 1090b03e0; end: 1090b03e7; -[SCNeoPlayerEventLogger didOutputVideoSampleBuffer] */

void FUN_1090b03e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar1 + 0x54) >> 4 & 1) == 0) {
    func_0x0001090e4f20(lVar1,param_2,&UNK_10f550e42);
    *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) | 0x10;
  }
  return;
}



/* Entry: 1090b03e8; end: 1090b03ef; -[SCNeoPlayerEventLogger didUpdateSynchronizerRate:] */

void FUN_1090b03e8(long param_1,undefined8 param_2)

{
  func_0x0001090e4f20(*(undefined8 *)(param_1 + 0x10),param_2,&UNK_10f550e6f);
  return;
}



/* Entry: 1090b03f0; end: 1090b03f7; -[SCNeoPlayerEventLogger didDecodeAudioSampleBuffer] */

void FUN_1090b03f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar1 + 0x54) >> 5 & 1) == 0) {
    func_0x0001090e4f20(lVar1,param_2,&UNK_10f550e92);
    *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) | 0x20;
  }
  return;
}



/* Entry: 1090b03f8; end: 1090b03ff; -[SCNeoPlayerEventLogger didDecodeVideoSampleBuffer] */

void FUN_1090b03f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar1 + 0x54) >> 6 & 1) == 0) {
    func_0x0001090e4f20(lVar1,param_2,&UNK_10f550eb4);
    *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) | 0x40;
  }
  return;
}



/* Entry: 1090b0400; end: 1090b0407; -[SCNeoPlayerEventLogger didEnqueueProcessedAudioSampleBuffer] */

void FUN_1090b0400(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (-1 < *(char *)(lVar1 + 0x54)) {
    func_0x0001090e4f20(lVar1,param_2,&UNK_10f550ed6);
    *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) | 0x80;
  }
  return;
}



/* Entry: 1090b0408; end: 1090b040f; -[SCNeoPlayerEventLogger didEnqueueProcessedVideoSampleBuffer] */

void FUN_1090b0408(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar1 + 0x55) & 1) == 0) {
    func_0x0001090e4f20(lVar1,param_2,&UNK_10f550f03);
    *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) | 0x100;
  }
  return;
}



/* Entry: 1090b0410; end: 1090b0417; -[SCNeoPlayerEventLogger didKickoffRecoverFromRendererFailure] */

void FUN_1090b0410(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar2 + 0x60) == '\x01') {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x10) + 8);
    for (lVar3 = *(long *)(lVar2 + 0x18) << 4; lVar3 != 0; lVar3 = lVar3 + -0x10) {
      if (*(uint *)(puVar1 + -1) < 3) {
        (*(code *)*puVar1)(2,*(undefined4 *)(lVar2 + 0x50),lVar2 + 0x48,&UNK_10f550f30,
                           &stack0x00000000);
      }
      puVar1 = puVar1 + 2;
    }
  }
  return;
}


