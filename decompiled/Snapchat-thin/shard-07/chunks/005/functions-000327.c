/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055ed914; end: 1055ed91f; -[SCRealTimeScanConfig .cxx_destruct] */

void FUN_1055ed914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055ed920; end: 1055ed993; -[SCScanConfig initWithCircumstanceEngine:] */

undefined1 * FUN_1055ed920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e94e0;
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



/* Entry: 1055ed994; end: 1055ed9bf; -[SCScanConfig scanResultsReplayBufferSize] */

long FUN_1055ed994(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110df0d98,0,0);
  return (long)(int)uVar1;
}



/* Entry: 1055ed9c0; end: 1055ed9d7; -[SCScanConfig analyzerRaceConditionBugFixEnabled] */

void FUN_1055ed9c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df0d78,0,0);
  return;
}



/* Entry: 1055ed9d8; end: 1055ed9e3; -[SCScanConfig .cxx_destruct] */

void FUN_1055ed9d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055ed9e4; end: 1055eda57; -[SCScanEndpointConfig initWithLensDataConfigProvider:] */

undefined1 * FUN_1055ed9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e94e8;
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



/* Entry: 1055eda58; end: 1055eda5f; -[SCScanEndpointConfig snapTokenAccessType] */

undefined8 FUN_1055eda58(void)

{
  return 6;
}



/* Entry: 1055eda60; end: 1055edab3; -[SCScanEndpointConfig routingHeader] */

void FUN_1055eda60(undefined **param_1)

{
  undefined **ppuVar1;
  
  FUN_1055ee524();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    _objc_retain(param_1);
    ppuVar1 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1055edab4; end: 1055edb07; -[SCScanEndpointConfig scannablesRoutingHeader] */

void FUN_1055edab4(undefined **param_1)

{
  undefined **ppuVar1;
  
  func_0x0001055ee530();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    _objc_retain(param_1);
    ppuVar1 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1055edb08; end: 1055edbbf; -[SCScanEndpointConfig scannablesRequestHeaders] */

void FUN_1055edb08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  func_0x00010c14f7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110dadcb8);
  }
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055edbc0; end: 1055edbcb; -[SCScanEndpointConfig routeTagKey] */

undefined ** FUN_1055edbc0(void)

{
  return &PTR____CFConstantStringClassReference_110dadcb8;
}



/* Entry: 1055edbcc; end: 1055edc1f; -[SCScanEndpointConfig baseURL] */

void FUN_1055edbcc(undefined **param_1)

{
  undefined **ppuVar1;
  
  func_0x0001055ee53c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df0db8;
  }
  else {
    _objc_retain(param_1);
    ppuVar1 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1055edc20; end: 1055edc2b; -[SCScanEndpointConfig baseGRPCURL] */

undefined ** FUN_1055edc20(void)

{
  return &PTR____CFConstantStringClassReference_110db1dd8;
}



/* Entry: 1055edc2c; end: 1055edc37; -[SCScanEndpointConfig gRPCRequestPathPrefix] */

undefined ** FUN_1055edc2c(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 1055edc38; end: 1055edc3b; -[SCScanEndpointConfig freeformTweak] */

undefined ** FUN_1055edc38(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 1055edc3c; end: 1055edc47; -[SCScanEndpointConfig .cxx_destruct] */

void FUN_1055edc3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055edc48; end: 1055edcbb; -[SCScanPFEImageConfig initWithCircumstanceEngine:] */

undefined1 * FUN_1055edc48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e94f0;
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



/* Entry: 1055edcbc; end: 1055edd0f; -[SCScanPFEImageConfig desiredImageSizeForCategories:] */

undefined1  [16] FUN_1055edcbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  func_0x00010bde4880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2a5040();
  uVar2 = param_1;
  func_0x00010bfe0640(param_1);
  _objc_release(param_1);
  auVar3._8_8_ = (double)(int)uVar2;
  auVar3._0_8_ = (double)(int)uVar1;
  return auVar3;
}



/* Entry: 1055edd10; end: 1055edd4b; -[SCScanPFEImageConfig desiredImageCompressionQualityForCategories:] */

long FUN_1055edd10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bde4880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf45780();
  _objc_release(param_1);
  return (long)(int)uVar1;
}



/* Entry: 1055edd4c; end: 1055edd87; -[SCScanPFEImageConfig isFrontFacingUploadDisabled:] */

undefined8 FUN_1055edd4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bde4880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfbb2a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1055edd88; end: 1055ede6b; -[SCScanPFEImageConfig scanImageResolutionDataForCategories:] */

void FUN_1055edd88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bc090;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d3c80(param_3);
  _objc_release(param_3);
  func_0x00010c1f65e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ae780;
  func_0x00010c0cb140(PTR_PTR_1126ae780);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da6e0();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1195e0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df0df8,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055ede6c; end: 1055edf07; -[SCScanPFEImageConfig _configurationForCategories:] */

void FUN_1055ede6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_38;
  
  func_0x00010c14ece0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lStack_38 = 0;
    puVar1 = PTR_PTR_1126b3228;
    func_0x00010c0f40e0(PTR_PTR_1126b3228,param_2,param_1,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined *)0x0;
    if (lStack_38 == 0 && puVar1 != (undefined *)0x0) {
      _objc_retain(puVar1);
      puVar2 = puVar1;
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055edf08; end: 1055edf13; -[SCScanPFEImageConfig .cxx_destruct] */

void FUN_1055edf08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055edf14; end: 1055edf87; -[SCScanSnapcodesConfig initWithCircumstanceEngine:] */

undefined1 * FUN_1055edf14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e94f8;
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



/* Entry: 1055edf88; end: 1055edfa7; -[SCScanSnapcodesConfig useCaseEnabled:] */

uint FUN_1055edf88(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(4 < (param_3 >> 2 | param_3 << 0x3e)) |
         4U >> (ulong)((uint)(param_3 >> 2) & 0x1f) & 1;
}



/* Entry: 1055edfa8; end: 1055edfb3; -[SCScanSnapcodesConfig .cxx_destruct] */

void FUN_1055edfa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055edfb4; end: 1055ee173;  */

void FUN_1055edfb4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bded560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055ee174; end: 1055ee1f7; -[SCPerceptionConfigurationServiceProvider _createEndpointConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ee174(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bc0a0;
  _objc_alloc(PTR_PTR_1126bc0a0);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112726910;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c092300(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0236c0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055ee1f8; end: 1055ee273; -[SCPerceptionConfigurationServiceProvider _createPFEImageConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ee1f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bc0a8;
  _objc_alloc(PTR_PTR_1126bc0a8);
  param_1 = param_1 + _DAT_112726908;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055ee274; end: 1055ee2ef; -[SCPerceptionConfigurationServiceProvider _createRealTimeScanConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ee274(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bc0b0;
  _objc_alloc(PTR_PTR_1126bc0b0);
  param_1 = param_1 + _DAT_112726908;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055ee2f0; end: 1055ee36b; -[SCPerceptionConfigurationServiceProvider _createSnapcodesConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ee2f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bc0b8;
  _objc_alloc(PTR_PTR_1126bc0b8);
  param_1 = param_1 + _DAT_112726908;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055ee36c; end: 1055ee3e7; -[SCPerceptionConfigurationServiceProvider _createScanConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ee36c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bc0c0;
  _objc_alloc(PTR_PTR_1126bc0c0);
  param_1 = param_1 + _DAT_112726908;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055ee3e8; end: 1055ee463; -[SCPerceptionConfigurationServiceProvider _createDeepScanConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ee3e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bc0c8;
  _objc_alloc(PTR_PTR_1126bc0c8);
  param_1 = param_1 + _DAT_112726908;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055ee464; end: 1055ee4df; -[SCPerceptionConfigurationServiceProvider _createODINConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ee464(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bc0d0;
  _objc_alloc(PTR_PTR_1126bc0d0);
  param_1 = param_1 + _DAT_112726908;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055ee4e0; end: 1055ee523; -[SCPerceptionConfigurationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ee4e0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726910);
  _objc_destroyWeak(param_1 + _DAT_112726908);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272690c);
  return;
}



/* Entry: 1055ee524; end: 1055ee553;  */

undefined ** FUN_1055ee524(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 1055ee554; end: 1055ee5cf; +[SCPCNCOFScanSnapcodesRolloutConfigParams descriptor] */

undefined * FUN_1055ee554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd300 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a51530,
                        &PTR____CFConstantStringClassReference_110df0e18,&PTR_DAT_1130ee1a8,
                        &PTR_DAT_1130ee1c0,10,4,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bd300 = puVar1;
  }
  return puRam00000001136bd300;
}



/* Entry: 1055ee5d0; end: 1055ee65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ee5d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112726918;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010bfa2b80(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1055ee65c; end: 1055ee693; -[SCPerceptionFeatureSettingsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ee65c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726914);
  return;
}



/* Entry: 1055ee694; end: 1055ee69f; -[SCFeatureSettingsService isHasAcceptedScanFromLensOnboarding] */

void FUN_1055ee694(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110df0e38);
  return;
}



/* Entry: 1055ee6a0; end: 1055ee6ab; -[SCFeatureSettingsService hasAcceptedScanFromLensOnboardingServerParam] */

undefined ** FUN_1055ee6a0(void)

{
  return &PTR____CFConstantStringClassReference_110df0e38;
}



/* Entry: 1055ee6ac; end: 1055ee6bb; -[SCFeatureSettingsService setHasAcceptedScanFromLensOnboarding:] */

void FUN_1055ee6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110df0e38,param_3);
  return;
}



/* Entry: 1055ee6bc; end: 1055ee6c3; -[SCFeatureSettingsService SCAN_LENS_ONBOARDING_PROMPT_ACCEPTED_client_value:] */

undefined * FUN_1055ee6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1055ee6c4; end: 1055ee6cb; -[SCFeatureSettingsService SCAN_LENS_ONBOARDING_PROMPT_ACCEPTED_server_value:] */

void FUN_1055ee6c4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1055ee6cc; end: 1055ee6db; -[SCFeatureSettingsService hasAcceptedScanFromLensOnboarding] */

void FUN_1055ee6cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110df0e38,0);
  return;
}



/* Entry: 1055ee6dc; end: 1055ee74f; -[SCSnapcodeDefaultIdentifierProvider initWithModelProvider:] */

undefined1 * FUN_1055ee6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9500;
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



/* Entry: 1055ee750; end: 1055ee99b; -[SCSnapcodeDefaultIdentifierProvider identifiersInSnapcodeImage:] */

void FUN_1055ee750(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c075600(param_1);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0d0160();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf04b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c244fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    puVar6 = PTR_PTR_1126ae750;
    func_0x00010bf993e0(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf6fa40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_1055ee99c;
    uStack_60 = 0x1055ee9ac;
    uStack_58 = 0;
    func_0x00010c0bf0a0(lVar5);
    puVar6 = (undefined *)puStack_78[5];
    _objc_retain(puVar6);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  lVar5 = 8;
  __Block_object_dispose(&uStack_80);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 1055ee99c; end: 1055ee9b3;  */

void FUN_1055ee99c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1055ee9b4; end: 1055ee9fb;  */

void FUN_1055ee9b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010bf993e0(PTR_PTR_1126ae750,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1055ee9fc; end: 1055eeb93;  */

void FUN_1055ee9fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010bfb2660(param_2,param_2,&PTR___NSConcreteGlobalBlock_11089e5f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2468a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055eeb94; end: 1055eeb9b; -[SCSnapcodeDefaultIdentifierProvider isInTestMode] */

undefined1 FUN_1055eeb94(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1055eeb9c; end: 1055eeba3; -[SCSnapcodeDefaultIdentifierProvider setIsInTestMode:] */

void FUN_1055eeb9c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1055eeba4; end: 1055eebaf; -[SCSnapcodeDefaultIdentifierProvider .cxx_destruct] */

void FUN_1055eeba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055eebb0; end: 1055eec7b; -[SCSnapcodeDefaultMetadataProvider initWithScannablesWrapper:identifierProvider:performer:] */

undefined1 *
FUN_1055eebb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9508;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055eec7c; end: 1055eec83; -[SCSnapcodeDefaultMetadataProvider metadataForSnapcodeImage:] */

void FUN_1055eec7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cc410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_metadataForSnapcodeImage_legacyP_112610b18,param_3,0);
  return;
}



/* Entry: 1055eec84; end: 1055eec87; -[SCSnapcodeDefaultMetadataProvider metadataForSnapcodeImage:legacyPayload:] */

void FUN_1055eec84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be600b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__metadataForSnapcodeImage_legacy_1125759c8);
  return;
}



/* Entry: 1055eec88; end: 1055eec93; -[SCSnapcodeDefaultMetadataProvider metadataForSnapcodeIdentifier:] */

void FUN_1055eec88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cc3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_metadataForSnapcodeIdentifier_le_112610b08,param_3,0,0);
  return;
}



/* Entry: 1055eec94; end: 1055eec9f; -[SCSnapcodeDefaultMetadataProvider metadataForSnapcodeIdentifiers:additionalParameters:] */

void FUN_1055eec94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be600f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__metadataFromIdentifiers_legacyP_1125759d8,param_3,0,param_4);
  return;
}



/* Entry: 1055eeca0; end: 1055eef23; -[SCSnapcodeDefaultMetadataProvider metadataForSnapcodeIdentifier:legacyPayload:additionalParameters:] */

void FUN_1055eeca0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_68;
  
  ppuVar7 = &puStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010c298be0();
  if (lVar2 == 2) {
    puVar5 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
    lVar2 = param_3;
    func_0x00010c294d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057ea0(puVar5);
    _objc_release(lVar2);
    func_0x00010bfcb980(puVar5);
    puVar3 = PTR_PTR_1126bc0e0;
    func_0x00010c0cb140(PTR_PTR_1126bc0e0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bce40(puVar3);
    _objc_release(puVar6);
    puVar4 = PTR_PTR_1126b31f8;
    _objc_alloc(PTR_PTR_1126b31f8);
    puVar6 = puVar3;
    func_0x00010bf63640(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a5a0(puVar4);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    puVar5 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0cc480();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1055eef24;
  puStack_88 = &UNK_11089e610;
  puStack_80 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c297260(puVar6);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_80);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  if (ppuVar7 != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055eef24; end: 1055eef7f;  */

void FUN_1055eef24(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055eef80; end: 1055ef0c7; -[SCSnapcodeDefaultMetadataProvider _metadataForSnapcodeImage:legacyPayload:] */

void FUN_1055eef80(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1055ef0c8;
  puStack_68 = &UNK_11084a518;
  lStack_60 = param_1;
  _objc_retain(puVar1);
  puStack_b8 = puVar4;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x1055ef1e0;
  puStack_a0 = &UNK_110860d88;
  lStack_98 = param_1;
  puStack_90 = puVar1;
  uStack_88 = param_4;
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c0bf0a0(uVar3,param_2,&puStack_80,&puStack_b8);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_90);
  _objc_release(puStack_58);
  _objc_release(puVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055ef0c8; end: 1055ef2af;  */

void FUN_1055ef0c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class();
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb2660(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010be600e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar2 + 0x28);
  _objc_retain(uVar5);
  func_0x00010c297260(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 1055ef2b0; end: 1055ef2cb;  */

void FUN_1055ef2b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 1055ef2cc; end: 1055ef51f; -[SCSnapcodeDefaultMetadataProvider _metadataFromIdentifiers:legacyPayload:additionalParameters:] */

void FUN_1055ef2cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puVar5 = puVar1;
  if (param_3 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_opt_class(param_1);
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010bf43ca0(puVar1);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    _objc_retain(param_5);
    lVar2 = param_3;
    func_0x00010bfb2660(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c297260(puVar4);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(lVar2);
    puVar3 = param_5;
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0cc3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_metadataForSnapcodeIdentifier_le_112610b08,
             param_2,*(undefined1 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 1055ef520; end: 1055ef533;  */

void FUN_1055ef520(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cc3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_metadataForSnapcodeIdentifier_le_112610b08,
             param_2,*(undefined1 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1055ef534; end: 1055ef58f;  */

void FUN_1055ef534(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  func_0x00010bfb2660(param_2,param_2,&PTR___NSConcreteGlobalBlock_11089e6b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055ef590; end: 1055ef66f;  */

void FUN_1055ef590(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1055ef670;
  uStack_30 = 0x1055ef680;
  uStack_28 = 0;
  func_0x00010c0bf0a0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055ef670; end: 1055ef687;  */

void FUN_1055ef670(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1055ef688; end: 1055ef6bf;  */

void FUN_1055ef688(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055ef6c0; end: 1055ef6c7; -[SCSnapcodeDefaultMetadataProvider isInTestMode] */

undefined1 FUN_1055ef6c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 1055ef6c8; end: 1055ef6cf; -[SCSnapcodeDefaultMetadataProvider setIsInTestMode:] */

void FUN_1055ef6c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1055ef6d0; end: 1055ef70b; -[SCSnapcodeDefaultMetadataProvider .cxx_destruct] */

void FUN_1055ef6d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055ef70c; end: 1055ef7af; -[SCSnapcodeLegacyScannablesWrapper initWithScannablesAPI:snapcodesConfiguration:] */

undefined1 *
FUN_1055ef70c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9510;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055ef7b0; end: 1055ef9cb; -[SCSnapcodeLegacyScannablesWrapper metadataFromSnapcodeIdentifier:legacyPayload:additionalParameters:] */

void FUN_1055ef7b0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_78,param_1);
  uVar3 = param_3;
  func_0x00010c294d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298be0(param_3);
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_3);
  uStack_80 = param_4;
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  func_0x00010bfc1f00(uVar3);
  _objc_release(uVar3);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055ef9cc; end: 1055efaab;  */

void FUN_1055ef9cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be60100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_opt_class(uVar3);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar4,param_2,uVar3,0xffffffffffffffff,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar5,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  else {
    func_0x00010bf43d60(uVar5,param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1055efaac; end: 1055efab7;  */

void FUN_1055efaac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_4);
  return;
}



/* Entry: 1055efab8; end: 1055efc73; -[SCSnapcodeLegacyScannablesWrapper _metadataFromSojuDictionary:identifier:legacyPayload:] */

void FUN_1055efab8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bc0e8;
  func_0x00010c072220(PTR_PTR_1126bc0e8,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126bc0f0;
    _objc_alloc();
    func_0x00010c0206e0();
    puVar2 = puVar1;
    func_0x00010c14f700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010c14f740(puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bee65a0(param_1,param_2,puVar3,param_5);
      if (lVar5 == 0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar6 = puVar3;
        if (lVar5 == 0x10) {
          func_0x00010c08f2e0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c0f6420();
          _objc_retainAutoreleasedReturnValue();
        }
        if ((puVar6 == (undefined *)0x0) &&
           (func_0x00010be63e80(param_1,param_2,lVar5), (int)param_1 == 0)) {
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar8 = PTR_PTR_1126b31f8;
          _objc_alloc(PTR_PTR_1126b31f8);
          puVar7 = puVar3;
          func_0x00010bf63640(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c05a5a0(puVar8,param_2,lVar5,puVar6,puVar7,param_4,puVar4);
          _objc_release(puVar7);
        }
        _objc_release(puVar6);
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1055efc74; end: 1055efce3; -[SCSnapcodeLegacyScannablesWrapper _useCaseFromAction:legacyPayload:] */

undefined8 FUN_1055efc74(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_4 & 1) != 0) {
    return 0x10;
  }
  func_0x00010c28ff20(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28ff40();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    param_3 = 0x10;
  }
  return param_3;
}



/* Entry: 1055efce4; end: 1055efcef; -[SCSnapcodeLegacyScannablesWrapper _noPayloadAcceptableForUseCase:] */

bool FUN_1055efce4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 2;
}



/* Entry: 1055efcf0; end: 1055efe2f; -[SCSnapcodeLegacyScannablesWrapper .cxx_destruct] */

void FUN_1055efcf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055efe30; end: 1055f003b; -[SCSnapcodeServiceProvider _scannablesAPI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055efe30(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar1 = param_1 + _DAT_11272693c;
  _objc_loadWeakRetained();
  lVar12 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar12);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126bc100;
  _objc_alloc();
  lVar12 = (long)_DAT_112726940;
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar6 = lVar12;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112726944;
  lVar2 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar2);
  lVar7 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar13);
  lVar9 = lVar13;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112726948;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010bf95e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ace0(puVar4,param_2,lVar5,lVar6,lVar8,lVar10,lVar11,lVar3);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar13);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055f003c; end: 1055f00d3; -[SCSnapcodeServiceProvider _scannablesWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055f003c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bc108;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + _DAT_112726948;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c245380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0419e0(puVar1,param_2,param_3,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055f00d4; end: 1055f014f; -[SCSnapcodeServiceProvider _identifierProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055f00d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bc110;
  _objc_alloc(PTR_PTR_1126bc110);
  param_1 = param_1 + _DAT_11272694c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0d0060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c760(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055f0150; end: 1055f021b; -[SCSnapcodeServiceProvider _metadataProvider:identifierProvider:] */

void FUN_1055f0150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2dcdc7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x11,0,0x14);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bc118;
  _objc_alloc(PTR_PTR_1126bc118);
  func_0x00010c041a00();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055f021c; end: 1055f0277; -[SCSnapcodeServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055f021c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272693c);
  _objc_destroyWeak(param_1 + _DAT_112726948);
  _objc_destroyWeak(param_1 + _DAT_112726940);
  _objc_destroyWeak(param_1 + _DAT_11272694c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726944);
  return;
}



/* Entry: 1055f0278; end: 1055f03cb; -[SCScannablesAPI initWithHttpMetadataService:httpRequestModifier:requestManager:userId:endpointConfiguration:performer:] */

undefined1 *
FUN_1055f0278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e9518;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
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



/* Entry: 1055f03cc; end: 1055f0bb3; -[SCScannablesAPI getActionFromScannableData:version:type:unlockProperties:additionalParameters:successBlock:failureBlock:] */

void FUN_1055f03cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,long param_10,long param_11,undefined8 param_12,undefined8 param_13)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined *puStack_190;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_9 == 0x3f9998b7) {
    lVar1 = 0x3f9998b7;
    func_0x00010b791c6c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_9;
    func_0x00010b791c6c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c14f780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  lVar1 = param_10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_190 = (undefined *)0x0;
  }
  else {
    puStack_190 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    lVar1 = param_10;
    func_0x00010c0e00e0(param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64b60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340();
    _objc_release(puVar6);
    _objc_release(lVar1);
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_9 == 0x16e97460) {
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110df0ed8;
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110df0ef8;
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    puStack_a8 = puVar8;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cd20();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110df0f18;
    puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    puStack_a0 = puVar9;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cd00();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110df0f38;
    puVar12 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    puStack_98 = puVar11;
    func_0x00010c2673e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar12;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110df0f58;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110dad378;
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_90 = puVar7;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_6 = puVar13;
    _objc_release(puVar7);
  }
  else {
    ppuStack_120 = &PTR____CFConstantStringClassReference_110df0ef8;
    puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cd20();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_118 = &PTR____CFConstantStringClassReference_110df0f18;
    puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    puStack_f8 = puVar6;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cd00();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_110 = &PTR____CFConstantStringClassReference_110df0f38;
    puVar11 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    puStack_f0 = puVar10;
    func_0x00010c2673e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110dad378;
    ppuStack_108 = &PTR____CFConstantStringClassReference_110df0f58;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110df0f78;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110daafd8;
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_e8 = puVar12;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar8);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010bef7f60();
  lVar1 = param_11;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bef7f60(puVar6);
  }
  lVar1 = param_10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_10;
    func_0x00010c0e00e0(param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(lVar1);
    if (puStack_190 != (undefined *)0x0) {
      func_0x00010c1d0640(puVar6);
    }
  }
  puVar11 = puVar6;
  func_0x00010bf51e00(puVar6);
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain();
  _objc_alloc();
  func_0x00010c00c560();
  _objc_release(puVar11);
  func_0x00010c1d0640(puVar9);
  func_0x00010c1d0640(puVar9);
  puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar9);
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_4,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar11);
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_1055f0bb4;
  puStack_130 = &UNK_110884ec8;
  puStack_128 = puVar9;
  _objc_retain(puVar9);
  ppuVar14 = &puStack_148;
  _objc_retainBlock(ppuVar14);
  uVar15 = *(undefined8 *)(param_5 + 0x10);
  func_0x00010c269d40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010bf225e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  func_0x00010be1cae0(param_5);
  _objc_release(uVar4);
  _objc_release(ppuVar14);
  _objc_release(puStack_128);
  _objc_release(puVar9);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(puStack_190);
  _objc_release(puVar13);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  func_0x00010c290a40(param_6);
  func_0x00010c290d20(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1055f0bb4; end: 1055f0bf7;  */

void FUN_1055f0bb4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c290d20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055f0bf8; end: 1055f0d23; -[SCScannablesAPI _getActionWithRequest:successBlock:failureBlock:] */

void FUN_1055f0bf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1055f0d24;
  puStack_58 = &UNK_11089e820;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retainBlock(&puStack_70);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f600(uVar2,param_2,param_3,0,uVar3,ppuVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1055f0d24; end: 1055f0f13;  */

void FUN_1055f0d24(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_3 == 0) && (param_6 == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar2 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar1);
    if ((uVar2 & 1) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_4,param_5);
      goto LAB_1055f0ed8;
    }
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar1);
    if (((ulong)puVar4 & 1) == 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                (*(long *)(param_1 + 0x20),param_4,PTR____NSDictionary0__struct_11034ab58,0);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_4,puVar3);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar2 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar1);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                (*(long *)(param_1 + 0x20),param_4,PTR____NSDictionary0__struct_11034ab58,param_6);
      goto LAB_1055f0ed8;
    }
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar1);
    puVar1 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar1 = PTR____NSDictionary0__struct_11034ab58;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),param_4,puVar1,param_6);
  }
  _objc_release(puVar3);
LAB_1055f0ed8:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1055f0f14; end: 1055f0fd7; -[SCScannablesAPI _getActionWithDeprecatedRequest:successBlock:failureBlock:] */

void FUN_1055f0f14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1055f0fd8;
  puStack_48 = &UNK_11089e850;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c25f5e0(uVar1,param_2,param_3,PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 1055f0fd8; end: 1055f11ab;  */

void FUN_1055f0fd8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar2 & 1) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3,param_4);
      goto LAB_1055f1170;
    }
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar1);
    puVar1 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar1 = PTR____NSDictionary0__struct_11034ab58;
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3,puVar1);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                (*(long *)(param_1 + 0x20),param_3,PTR____NSDictionary0__struct_11034ab58,param_5);
      goto LAB_1055f1170;
    }
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar1);
    puVar1 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar1 = PTR____NSDictionary0__struct_11034ab58;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),param_3,puVar1,param_5);
  }
  _objc_release(puVar3);
LAB_1055f1170:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1055f11ac; end: 1055f120b; -[SCScannablesAPI .cxx_destruct] */

void FUN_1055f11ac(long param_1)

{
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



/* Entry: 1055f120c; end: 1055f1253; -[SOJUScannableScannableAction legacyPayload] */

void FUN_1055f120c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c271e60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055f1254; end: 1055f162b; -[SOJUScannableScannableAction payload] */

void FUN_1055f1254(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lStack_48;
  
  puVar1 = param_1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lStack_48 = 0;
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar2,0,&lStack_48);
  _objc_retainAutoreleasedReturnValue();
  if ((lStack_48 != 0) && (puVar3 = param_1, func_0x00010be71000(), ((ulong)puVar3 & 1) != 0)) {
    puVar3 = (undefined *)0x0;
    goto LAB_1055f1600;
  }
  puVar4 = param_1;
  func_0x00010c28ff20();
  puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
  puVar7 = (undefined *)0x0;
  puVar3 = (undefined *)0x0;
  puVar5 = PTR_PTR_1126bc128;
  switch(puVar4) {
  case (undefined *)0x0:
    goto LAB_1055f1600;
  case (undefined *)0x1:
    puVar5 = PTR_PTR_1126bc120;
    _objc_alloc(PTR_PTR_1126bc120);
    func_0x00010c0206e0();
    func_0x00010bee7000(param_1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x2:
    puVar5 = PTR_PTR_1126bc140;
    _objc_alloc(PTR_PTR_1126bc140);
    func_0x00010c0206e0();
    func_0x00010bed17a0(param_1,param_2,puVar5,puVar2);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x3:
    puVar5 = PTR_PTR_1126bc138;
    _objc_alloc(PTR_PTR_1126bc138);
    func_0x00010c0206e0();
    func_0x00010bee63e0(param_1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x4:
    _objc_alloc(PTR_PTR_1126bc128);
    func_0x00010c0206e0();
    func_0x00010bdf8f00(param_1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x5:
    puVar5 = PTR_PTR_1126bc130;
    _objc_alloc(PTR_PTR_1126bc130);
    func_0x00010c0206e0();
    func_0x00010be5fec0(param_1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x6:
    _objc_alloc(PTR_PTR_1126bc128);
    func_0x00010c0206e0();
    func_0x00010be02160(param_1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x7:
    puVar5 = PTR_PTR_1126bc168;
    _objc_alloc(PTR_PTR_1126bc168);
    func_0x00010c0206e0();
    func_0x00010be1a540(param_1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x8:
    puVar5 = PTR_PTR_1126bc150;
    _objc_alloc(PTR_PTR_1126bc150);
    func_0x00010c0206e0();
    func_0x00010bde23a0(param_1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x9:
    puVar5 = PTR_PTR_1126bc148;
    _objc_alloc(PTR_PTR_1126bc148);
    func_0x00010c0206e0();
    func_0x00010bdc54c0(param_1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0xa:
    puVar5 = PTR_PTR_1126bc160;
    _objc_alloc(PTR_PTR_1126bc160);
    func_0x00010c0206e0();
    func_0x00010be9ace0(param_1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0xb:
    puVar5 = PTR_PTR_1126bc158;
    _objc_alloc(PTR_PTR_1126bc158);
    func_0x00010c0206e0();
    func_0x00010bebcd80(param_1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0xc:
  case (undefined *)0x10:
    func_0x00010c08f2e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    goto LAB_1055f1600;
  case (undefined *)0xd:
    func_0x00010bf63640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0(puVar6,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar3 = puVar6;
    goto LAB_1055f1600;
  case (undefined *)0xe:
    puVar5 = PTR_PTR_1126bc138;
    _objc_alloc(PTR_PTR_1126bc138);
    func_0x00010c0206e0();
    func_0x00010bde63a0(param_1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0xf:
    puVar5 = PTR_PTR_1126bc170;
    _objc_alloc(PTR_PTR_1126bc170);
    func_0x00010c0206e0();
    func_0x00010bebeba0(param_1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    break;
  default:
    goto LAB_1055f15e0;
  }
  _objc_release(puVar5);
  puVar7 = param_1;
LAB_1055f15e0:
  puVar3 = puVar7;
  func_0x00010bf63640(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
LAB_1055f1600:
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055f162c; end: 1055f1647; -[SOJUScannableScannableAction _payloadIsSerializable] */

bool FUN_1055f162c(long param_1)

{
  func_0x00010c28ff20();
  return param_1 != 0xd;
}



/* Entry: 1055f1648; end: 1055f16c3; -[SOJUScannableScannableAction _userProfilePayloadForAddFriendAction:] */

void FUN_1055f1648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4bb8;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c21e620(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055f16c4; end: 1055f17b7; -[SOJUScannableScannableAction _discoverPayloadForDeepLinkAction:] */

void FUN_1055f16c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1048;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfdef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7600(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf25da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174c40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfe5be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9840(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c18aa80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055f17b8; end: 1055f1833; -[SOJUScannableScannableAction _deepLinkPayloadForDeepLinkAction:] */

void FUN_1055f17b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc178;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c21afe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055f1834; end: 1055f18af; -[SOJUScannableScannableAction _messagePayloadForMessageAction:] */

void FUN_1055f1834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b31f0;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe0440(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1c6e00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


