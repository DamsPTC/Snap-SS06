/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cae5c8; end: 108cae5cf; -[SCLensProcessingSharedTranscodingWorkflow setCachedVideoURLPromise:] */

void FUN_108cae5c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108cae5d0; end: 108cae5d7; -[SCLensProcessingSharedTranscodingWorkflow didFinishTranscodingFuture] */

undefined8 FUN_108cae5d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108cae5d8; end: 108cae5ef; -[SCLensProcessingSharedTranscodingWorkflow videoPlayback] */

void FUN_108cae5d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cae5f0; end: 108cae5fb; -[SCLensProcessingSharedTranscodingWorkflow setVideoPlayback:] */

void FUN_108cae5f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 108cae5fc; end: 108cae613; -[SCLensProcessingSharedTranscodingWorkflow imagePlayback] */

void FUN_108cae5fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cae614; end: 108cae61f; -[SCLensProcessingSharedTranscodingWorkflow setImagePlayback:] */

void FUN_108cae614(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 108cae620; end: 108cae62b; -[SCLensProcessingSharedTranscodingWorkflow isTranscoding] */

byte FUN_108cae620(long param_1)

{
  return *(byte *)(param_1 + 0x50) & 1;
}



/* Entry: 108cae62c; end: 108cae633; -[SCLensProcessingSharedTranscodingWorkflow setIsTranscoding:] */

void FUN_108cae62c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 108cae634; end: 108cae6b3; -[SCLensProcessingSharedTranscodingWorkflow .cxx_destruct] */

void FUN_108cae634(long param_1)

{
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cae6b4; end: 108cae727; -[LensProcessingRenderingAdapter initWithRenderingPipeline:] */

undefined1 * FUN_108cae6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe148;
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



/* Entry: 108cae728; end: 108cae777; -[LensProcessingRenderingAdapter renderSampleBuffer:] */

void FUN_108cae728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ffc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cae778; end: 108cae783; -[LensProcessingRenderingAdapter .cxx_destruct] */

void FUN_108cae778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cae784; end: 108cae87f; -[SCLensProcessingViewfinderProcessingModule initWithLensProcessor:effectApplicator:audioProcessor:metadataProvider:] */

undefined1 *
FUN_108cae784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fe150;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cae880; end: 108cae947; -[SCLensProcessingViewfinderProcessingModule processSampleBuffer:] */

void FUN_108cae880(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c14c020();
  if (lVar2 == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c230700();
    uVar4 = 3;
    if (iVar1 != 0) {
      uVar4 = 4;
    }
  }
  else {
    lVar2 = param_3;
    func_0x00010c14c020();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c230700();
    uVar4 = 1;
    if (iVar1 != 0) {
      uVar4 = 2;
    }
    uVar3 = 5;
    if (iVar1 != 0) {
      uVar3 = 6;
    }
    if (lVar2 == 2) {
      uVar4 = uVar3;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c076b60(uVar3);
  func_0x00010c21d980(*(undefined8 *)(param_1 + 8),param_2,uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1153a0(uVar3,param_2,param_3,uVar4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108cae948; end: 108cae94b; -[SCLensProcessingViewfinderProcessingModule imageProcessor] */

void FUN_108cae948(void)

{
  return;
}



/* Entry: 108cae94c; end: 108cae98f; -[SCLensProcessingViewfinderProcessingModule processAudioSampleBuffer:] */

void FUN_108cae94c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = param_3;
  func_0x00010c1494c0(param_3);
  func_0x00010c114540(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108cae990; end: 108caea0b; -[SCLensProcessingViewfinderProcessingModule processPixelBufferToImage:orientation:timestamp:] */

void FUN_108cae990(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c230700();
  uVar1 = 3;
  if (iVar2 != 0) {
    uVar1 = 4;
  }
  uStack_48 = param_5[1];
  uStack_50 = *param_5;
  uStack_40 = param_5[2];
  func_0x00010c115120(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,uVar1,&uStack_50,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108caea0c; end: 108caea53; -[SCLensProcessingViewfinderProcessingModule .cxx_destruct] */

void FUN_108caea0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108caea54; end: 108caeb83; -[SCOnDeviceMLModelsPreloadingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108caea54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_112779d14;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c091fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112779d18;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf39900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126db968;
  _objc_alloc(PTR_PTR_1126db968);
  puVar4 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108caeb84;
  puStack_48 = &UNK_110876b90;
  lStack_40 = lVar2;
  lStack_38 = lVar1;
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027de0(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lStack_38);
  _objc_release(lStack_40);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108caeb84; end: 108caebb3;  */

void FUN_108caeb84(void)

{
  _objc_alloc(PTR_PTR_1126db970);
  func_0x00010c023540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108caebb4; end: 108caebf7; -[SCOnDeviceMLModelsPreloadingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108caebb4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112779d18);
  _objc_destroyWeak(param_1 + _DAT_112779d14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112779d1c);
  return;
}



/* Entry: 108caebf8; end: 108caec9b; -[SCOnDeviceMLModelsPreloader initWithLensCrashLogger:circumstanceEngine:] */

undefined1 *
FUN_108caebf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe158;
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



/* Entry: 108caec9c; end: 108caee67; -[SCOnDeviceMLModelsPreloader preloadModelWithMLAssetPath:inferenceMode:cacheDirectory:] */

/* WARNING: Removing unreachable block (ram,0x000108caedcc) */

void FUN_108caec9c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
  }
  else {
    puVar2 = PTR_PTR_1126db978;
    _objc_alloc_init(PTR_PTR_1126db978);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010bf1f3c0(uVar4);
    func_0x00010c227980(puVar2);
    puVar5 = PTR_PTR_1126bff30;
    _objc_alloc(PTR_PTR_1126bff30);
    func_0x00010c012dc0();
    puVar7 = PTR_PTR_1126bff38;
    puVar6 = param_5;
    if (param_5 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126c3450;
      func_0x00010c098380(PTR_PTR_1126c3450);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c107640(puVar7);
    puVar7 = (undefined *)0x0;
    _objc_retain(0);
    if (param_5 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108caee68; end: 108caee97; -[SCOnDeviceMLModelsPreloader .cxx_destruct] */

void FUN_108caee68(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108caee98; end: 108caef9f; -[SCPreviewScopeServices initWithEditor:snapDocEditorFactory:dependencyLoadingStates:] */

undefined1 *
FUN_108caee98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fe160;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126db980;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126db980;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108caefa0; end: 108caefa7; -[SCPreviewScopeServices previewViewControllerGallery] */

void FUN_108caefa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_target_112678178);
  return;
}



/* Entry: 108caefa8; end: 108caefaf; -[SCPreviewScopeServices snapEditorConfig] */

undefined8 FUN_108caefa8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108caefb0; end: 108caefdf; -[SCPreviewScopeServices setSnapEditorConfig:] */

void FUN_108caefb0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108caefe0; end: 108caefe7; -[SCPreviewScopeServices snapDocEditor] */

undefined8 FUN_108caefe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108caefe8; end: 108caefef; -[SCPreviewScopeServices snapDocEditorFactory] */

undefined8 FUN_108caefe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108caeff0; end: 108caeff7; -[SCPreviewScopeServices snapEditor] */

undefined8 FUN_108caeff0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108caeff8; end: 108caefff; -[SCPreviewScopeServices legacySnapEditor] */

undefined8 FUN_108caeff8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108caf000; end: 108caf007; -[SCPreviewScopeServices dependencyLoadingStatesManager] */

undefined8 FUN_108caf000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108caf008; end: 108caf067; -[SCPreviewScopeServices .cxx_destruct] */

void FUN_108caf008(long param_1)

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



/* Entry: 108caf068; end: 108caf06f; -[SCSecretFeatureChecker init] */

void FUN_108caf068(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0522d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe0000000000000,param_1,PTR_s_initWithTimeInterval__1125f22b8);
  return;
}



/* Entry: 108caf070; end: 108caf11b; -[SCSecretFeatureChecker initWithTimeInterval:] */

undefined8 FUN_108caf070(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  uVar3 = 0;
  _dispatch_queue_attr_make_with_qos_class(0,0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_queue_create(uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c03c7a0(param_1,param_2);
  _objc_release(uVar2);
  return param_2;
}



/* Entry: 108caf11c; end: 108caf207; -[SCSecretFeatureChecker initWithQueue:timeInterval:] */

undefined1 *
FUN_108caf11c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fe168;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126db988;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108caf208; end: 108caf25f; -[SCSecretFeatureChecker start] */

void FUN_108caf208(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108caf260;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c27d8c(*(undefined8 *)(param_1 + 0x18),&puStack_38);
  return;
}



/* Entry: 108caf260; end: 108caf273;  */

void FUN_108caf260(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be9b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__scheduleTimer_1125847b0);
  return;
}



/* Entry: 108caf274; end: 108caf307; -[SCSecretFeatureChecker _scheduleTimer] */

void FUN_108caf274(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    lVar1 = param_1;
    _objc_opt_class();
    func_0x00010bdde140();
    func_0x00010c1c8c60(param_1,param_2,lVar1);
    func_0x00010c155440(*(undefined8 *)(param_1 + 8),param_2,param_1,lVar1);
    puVar2 = PTR_PTR_1126b71d8;
    func_0x00010c26f2c0(param_1);
    func_0x00010c1503a0(puVar2,param_2,param_1,PTR_s__scheduleTimer_1125847b0,0,
                        *(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 108caf308; end: 108caf35f; -[SCSecretFeatureChecker stop] */

void FUN_108caf308(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108caf360;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c27d8c(*(undefined8 *)(param_1 + 0x18),&puStack_38);
  return;
}



/* Entry: 108caf360; end: 108caf39b;  */

void FUN_108caf360(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
  func_0x00010c069d00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108caf39c; end: 108caf3a3; -[SCSecretFeatureChecker addListener:] */

void FUN_108caf39c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108caf3a4; end: 108caf3ab; -[SCSecretFeatureChecker removeListener:] */

void FUN_108caf3a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108caf3ac; end: 108caf3eb; +[SCSecretFeatureChecker _checkSecretFeatureMode] */

void FUN_108caf3ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdde180();
  if ((lVar1 == 0) && (lVar1 = param_1, func_0x00010bdde1c0(), lVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdde210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkSecretFeatureWithOldAPI_112555220);
    return;
  }
  return;
}



/* Entry: 108caf3ec; end: 108caf44b; +[SCSecretFeatureChecker _checkSecretFeatureWithOldAPI] */

undefined8 FUN_108caf3ec(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x00010bdde220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf1f3c0();
    uVar2 = 1;
    if ((int)uVar1 != 0) {
      uVar2 = 2;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108caf44c; end: 108caf4f3; +[SCSecretFeatureChecker _checkSecretFeatureWithOldAPIHelper] */

ulong FUN_108caf44c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  char acStack_60 [32];
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  char acStack_30 [24];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  acStack_30[8] = -0x54;
  acStack_30[9] = -0x78;
  acStack_30[10] = -0x6a;
  acStack_30[0xb] = -0x75;
  acStack_30[0xc] = -100;
  acStack_30[0xd] = -0x69;
  acStack_30[0xe] = -0x50;
  acStack_30[0] = -0x4e;
  acStack_30[1] = -0x4f;
  acStack_30[2] = -0x53;
  acStack_30[3] = -0x6a;
  acStack_30[4] = -0x6f;
  acStack_30[5] = -0x68;
  acStack_30[6] = -0x66;
  acStack_30[7] = -0x73;
  acStack_30[0xf] = 0x9d;
  acStack_30[0x10] = -0x74;
  acStack_30[0x11] = -0x66;
  acStack_30[0x12] = -0x73;
  acStack_30[0x13] = -0x77;
  acStack_30[0x14] = -0x66;
  acStack_30[0x15] = -0x73;
  acStack_30[0x16] = '\0';
  uStack_40 = 0xb09b9a8d9e978c;
  uStack_39 = 0x9d;
  uStack_38 = 0x8d9a898d9a8c;
  acStack_60[8] = -0x6a;
  acStack_60[9] = -0x75;
  acStack_60[10] = -100;
  acStack_60[0xb] = -0x69;
  acStack_60[0xc] = -0x46;
  acStack_60[0xd] = -0x6f;
  acStack_60[0xe] = -0x62;
  acStack_60[0xf] = -99;
  acStack_60[0] = -0x73;
  acStack_60[1] = -0x6a;
  acStack_60[2] = -0x6f;
  acStack_60[3] = -0x68;
  acStack_60[4] = -0x66;
  acStack_60[5] = -0x73;
  acStack_60[6] = -0x54;
  acStack_60[7] = -0x78;
  acStack_60[0x10] = -0x6d;
  acStack_60[0x11] = -0x66;
  acStack_60[0x12] = -0x65;
  acStack_60[0x13] = '\0';
  func_0x00010be9cb40(param_1,param_2,acStack_30,&uStack_40,acStack_60);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x00010bdde1e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    _objc_opt_respondsToSelector();
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x00010c067ec0();
      uVar1 = 2;
      if ((int)uVar2 != 1) {
        uVar1 = (ulong)((int)uVar2 == 2);
      }
    }
    _objc_release(param_1);
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return param_1;
}



/* Entry: 108caf4f4; end: 108caf55b; +[SCSecretFeatureChecker _checkSecretFeatureWithNewAPI] */

undefined1 FUN_108caf4f4(ulong param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  
  func_0x00010bdde1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c067ec0();
    uVar2 = 2;
    if ((int)uVar1 != 1) {
      uVar2 = (int)uVar1 == 2;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108caf55c; end: 108caf5fb; +[SCSecretFeatureChecker _checkSecretFeatureWithNewAPIHelper] */

ulong FUN_108caf55c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined7 uStack_48;
  char acStack_40 [40];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  acStack_40[8] = -0x53;
  acStack_40[9] = -0x6a;
  acStack_40[10] = -0x6f;
  acStack_40[0xb] = -0x68;
  acStack_40[0xc] = -0x66;
  acStack_40[0] = -0x42;
  acStack_40[1] = -0x47;
  acStack_40[2] = -0x45;
  acStack_40[3] = -0x66;
  acStack_40[4] = -0x77;
  acStack_40[5] = -0x6a;
  acStack_40[6] = -100;
  acStack_40[7] = -0x66;
  acStack_40[0x15] = -99;
  acStack_40[0x16] = -0x74;
  acStack_40[0x17] = -0x66;
  acStack_40[0x18] = -0x73;
  acStack_40[0x19] = -0x77;
  acStack_40[0x1a] = -0x66;
  acStack_40[0x1b] = -0x73;
  acStack_40[0x1c] = '\0';
  acStack_40[0xd] = -0x73;
  acStack_40[0xe] = -0x54;
  acStack_40[0xf] = -0x78;
  acStack_40[0x10] = -0x6a;
  acStack_40[0x11] = -0x75;
  acStack_40[0x12] = -100;
  acStack_40[0x13] = -0x69;
  acStack_40[0x14] = -0x50;
  uStack_50 = 0xb09b9a8d9e978c;
  uStack_49 = 0x9d;
  uStack_48 = 0x8d9a898d9a8c;
  uStack_54 = 0x9a;
  uStack_58 = 0x8b9e8b8c;
  func_0x00010be9cb40(param_1,param_2,acStack_40,&uStack_50,&uStack_58);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x00010bdde1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    _objc_opt_respondsToSelector();
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x00010c067ec0();
      uVar1 = 2;
      if ((int)uVar2 != 0) {
        uVar1 = (ulong)((int)uVar2 == 1);
      }
    }
    _objc_release(param_1);
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return param_1;
}



/* Entry: 108caf5fc; end: 108caf663; +[SCSecretFeatureChecker _checkSecretFeatureWithLatestAPI] */

undefined1 FUN_108caf5fc(ulong param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  
  func_0x00010bdde1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c067ec0();
    uVar2 = 2;
    if ((int)uVar1 != 0) {
      uVar2 = (int)uVar1 == 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108caf664; end: 108caf703; +[SCSecretFeatureChecker _checkSecretFeatureWithLatestAPIHelper] */

void FUN_108caf664(void)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  char *pcVar13;
  undefined1 *puVar14;
  char acStack_70 [32];
  char acStack_50 [32];
  char acStack_30 [24];
  long lStack_18;
  
  pcVar10 = acStack_70;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  acStack_30[8] = -0x4e;
  acStack_30[9] = -0x70;
  acStack_30[10] = -0x65;
  acStack_30[0xb] = -0x66;
  acStack_30[0xc] = -0x44;
  acStack_30[0xd] = -0x70;
  acStack_30[0xe] = -0x6f;
  acStack_30[0] = -0x55;
  acStack_30[1] = -0x4d;
  acStack_30[2] = -0x54;
  acStack_30[3] = -0x6a;
  acStack_30[4] = -0x6d;
  acStack_30[5] = -0x66;
  acStack_30[6] = -0x6f;
  acStack_30[7] = -0x75;
  acStack_30[0xf] = 0x8b;
  acStack_30[0x10] = -0x73;
  acStack_30[0x11] = -0x70;
  acStack_30[0x12] = -0x6d;
  acStack_30[0x13] = -0x6d;
  acStack_30[0x14] = -0x66;
  acStack_30[0x15] = -0x73;
  acStack_30[0x16] = '\0';
  acStack_50[8] = -0x6d;
  acStack_50[9] = -0x66;
  acStack_50[10] = -0x6f;
  acStack_50[0] = -0x74;
  acStack_50[1] = -0x69;
  acStack_50[2] = -0x62;
  acStack_50[3] = -0x73;
  acStack_50[4] = -0x66;
  acStack_50[5] = -0x65;
  acStack_50[6] = -0x54;
  acStack_50[7] = -0x6a;
  acStack_50[0x13] = -0x75;
  acStack_50[0x14] = -0x73;
  acStack_50[0x15] = -0x70;
  acStack_50[0x16] = -0x6d;
  acStack_50[0x17] = -0x6d;
  acStack_50[0x18] = -0x66;
  acStack_50[0x19] = -0x73;
  acStack_50[0x1a] = '\0';
  acStack_50[0xb] = -0x75;
  acStack_50[0xc] = -0x4e;
  acStack_50[0xd] = -0x70;
  acStack_50[0xe] = -0x65;
  acStack_50[0xf] = -0x66;
  acStack_50[0x10] = -0x44;
  acStack_50[0x11] = -0x70;
  acStack_50[0x12] = -0x6f;
  acStack_70[8] = -0x65;
  acStack_70[9] = -0x66;
  acStack_70[10] = -0x54;
  acStack_70[0xb] = -0x75;
  acStack_70[0xc] = -0x62;
  acStack_70[0xd] = -0x75;
  acStack_70[0xe] = -0x76;
  acStack_70[0xf] = -0x74;
  acStack_70[0] = -0x74;
  acStack_70[1] = -0x6a;
  acStack_70[2] = -0x6d;
  acStack_70[3] = -0x66;
  acStack_70[4] = -0x6f;
  acStack_70[5] = -0x75;
  acStack_70[6] = -0x4e;
  acStack_70[7] = -0x70;
  acStack_70[0x10] = 0;
  pcVar5 = acStack_30;
  pcVar9 = acStack_50;
  func_0x00010be9cb40();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcVar2 = pcVar5;
    _strlen();
    if (pcVar2 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      pcVar13 = (char *)0x1;
      do {
        pcVar5[(long)pcVar11] = ~pcVar5[(long)pcVar11];
        bVar1 = pcVar13 < pcVar2;
        pcVar11 = pcVar13;
        pcVar13 = (char *)(ulong)((int)pcVar13 + 1);
      } while (bVar1);
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _NSClassFromString();
    _objc_release(puVar3);
    pcVar5 = pcVar9;
    _strlen();
    if (pcVar5 != (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar11 = (char *)0x1;
      do {
        pcVar9[(long)pcVar2] = ~pcVar9[(long)pcVar2];
        bVar1 = pcVar11 < pcVar5;
        pcVar2 = pcVar11;
        pcVar11 = (char *)(ulong)((int)pcVar11 + 1);
      } while (bVar1);
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    _NSSelectorFromString();
    _objc_release(puVar3);
    puVar7 = pcVar10;
    _strlen();
    if (puVar7 != (undefined1 *)0x0) {
      puVar12 = (undefined1 *)0x0;
      puVar14 = (undefined1 *)0x1;
      do {
        pcVar10[(long)puVar12] = ~pcVar10[(long)puVar12];
        bVar1 = puVar14 < puVar7;
        puVar12 = puVar14;
        puVar14 = (undefined1 *)(ulong)((int)puVar14 + 1);
      } while (bVar1);
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    _objc_opt_respondsToSelector(puVar4,puVar6);
    if (((ulong)puVar8 & 1) != 0) {
      func_0x00010c0cca80(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSInvocation_1126b71d0;
      func_0x00010c06abc0(PTR__OBJC_CLASS___NSInvocation_1126b71d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2121a0();
      func_0x00010c1fbb60(puVar8);
      func_0x00010c06abe0(puVar8);
      func_0x00010bfc9a80(puVar8);
      puVar6 = PTR__OBJC_CLASS___NSObject_1126b1300;
      _objc_retain(0);
      _objc_opt_class(puVar6);
      _objc_opt_isKindOfClass(0,puVar6);
      _objc_retain(0);
      _objc_release(0);
      func_0x00010c296f60(0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(0);
      _objc_release(puVar8);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108caf704; end: 108caf92f; +[SCSecretFeatureChecker _secretStateWithTargetBuffer:selectorBuffer:propertyBuffer:] */

void FUN_108caf704(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar2 = param_3;
  _strlen();
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar8 = 1;
    do {
      *(byte *)(param_3 + uVar7) = ~*(byte *)(param_3 + uVar7);
      bVar1 = uVar8 < uVar2;
      uVar7 = uVar8;
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (bVar1);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _NSClassFromString();
  _objc_release(puVar3);
  uVar2 = param_4;
  _strlen();
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar8 = 1;
    do {
      *(byte *)(param_4 + uVar7) = ~*(byte *)(param_4 + uVar7);
      bVar1 = uVar8 < uVar2;
      uVar7 = uVar8;
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (bVar1);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  _NSSelectorFromString();
  _objc_release(puVar3);
  uVar2 = param_5;
  _strlen();
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar8 = 1;
    do {
      *(byte *)(param_5 + uVar7) = ~*(byte *)(param_5 + uVar7);
      bVar1 = uVar8 < uVar2;
      uVar7 = uVar8;
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (bVar1);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  _objc_opt_respondsToSelector(puVar4,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    func_0x00010c0cca80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSInvocation_1126b71d0;
    func_0x00010c06abc0(PTR__OBJC_CLASS___NSInvocation_1126b71d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2121a0();
    func_0x00010c1fbb60(puVar6);
    func_0x00010c06abe0(puVar6);
    func_0x00010bfc9a80(puVar6);
    puVar5 = PTR__OBJC_CLASS___NSObject_1126b1300;
    _objc_retain(0);
    _objc_opt_class(puVar5);
    _objc_opt_isKindOfClass(0,puVar5);
    uVar9 = 0;
    _objc_retain(0);
    _objc_release(0);
    func_0x00010c296f60(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 108caf930; end: 108caf937; -[SCSecretFeatureChecker mode] */

undefined8 FUN_108caf930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108caf938; end: 108caf93f; -[SCSecretFeatureChecker setMode:] */

void FUN_108caf938(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108caf940; end: 108caf947; -[SCSecretFeatureChecker timeInterval] */

undefined8 FUN_108caf940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108caf948; end: 108caf94f; -[SCSecretFeatureChecker setTimeInterval:] */

void FUN_108caf948(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 108caf950; end: 108caf98b; -[SCSecretFeatureChecker .cxx_destruct] */

void FUN_108caf950(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108caf98c; end: 108caf993; +[SCSecretFeatureChecker checkSecretFeatureModeWithCompletion:] */

void FUN_108caf98c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf38510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_checkSecretFeatureModeWithComple_1125abae8,param_3,0);
  return;
}



/* Entry: 108caf994; end: 108cafb53; +[SCSecretFeatureChecker checkSecretFeatureModeWithCompletion:completionQueue:] */

void FUN_108caf994(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar1 = 0x15;
    _dispatch_get_global_queue(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x108cafa70;
    puStack_50 = &UNK_11085b7b0;
    uStack_38 = param_1;
    _objc_retain(param_4);
    uStack_48 = param_4;
    _objc_retain(param_3);
    lStack_40 = param_3;
    func_0x000107c27d8c(uVar1,&puStack_68);
    _objc_release(uVar1);
    _objc_release(lStack_40);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108cafb54; end: 108cafb73;  */

void FUN_108cafb54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108cafb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108cafb74; end: 108cafcef; -[SCSecretFeatureCheckerListenerAnnouncer description] */

void FUN_108cafb74(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_108cafcf0(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108cafcf0; end: 108cafd4f;  */

void FUN_108cafcf0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 108cafd50; end: 108cafffb; -[SCSecretFeatureCheckerListenerAnnouncer addListener:] */

undefined8 FUN_108cafd50(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110ac1800;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_108cafffc(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_108cb013c(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_108caff04:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_108caff24;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_108cafffc(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_108cafffc(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_108cb013c(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_108caff04;
    }
  }
  uVar9 = 1;
LAB_108caff24:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 108cafffc; end: 108cb013b;  */

void FUN_108cafffc(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_108cb04f0();
LAB_108cb0138:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_108cb0138;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 108cb013c; end: 108cb0183;  */

void FUN_108cb013c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 108cb0184; end: 108cb03b3; -[SCSecretFeatureCheckerListenerAnnouncer removeListener:] */

void FUN_108cb0184(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_108cb0338;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_108cb01ec;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_108cb013c(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_108cb0338;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_108cb01ec:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110ac1800;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_108cafffc(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_108cb013c(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_108cb0338;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_108cb0338:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb03b4; end: 108cb04a7; -[SCSecretFeatureCheckerListenerAnnouncer secretFeatureChecker:didCheckSecretFeatureMode:] */

void FUN_108cb03b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_108cafcf0(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c155440();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb04a8; end: 108cb04cf; -[SCSecretFeatureCheckerListenerAnnouncer .cxx_destruct] */

void FUN_108cb04a8(long param_1)

{
  FUN_108cb0504(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 108cb04d0; end: 108cb04ef; -[SCSecretFeatureCheckerListenerAnnouncer .cxx_construct] */

void FUN_108cb04d0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 108cb04f0; end: 108cb0503;  */

undefined * FUN_108cb04f0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 108cb0504; end: 108cb055b;  */

long FUN_108cb0504(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 108cb055c; end: 108cb056b;  */

void FUN_108cb055c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ac1800;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108cb056c; end: 108cb058b;  */

void FUN_108cb056c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ac1800;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108cb058c; end: 108cb05f3;  */

void FUN_108cb058c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108cb05f4; end: 108cb05f7;  */

void FUN_108cb05f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108cb05f8; end: 108cb05ff; -[SCLensEffectOffscreenRenderingFactory createOffscreenProcessorWithUsecase:] */

undefined8 FUN_108cb05f8(void)

{
  return 0;
}



/* Entry: 108cb0600; end: 108cb062f; -[SCLensEffectOffscreenRenderingServices .cxx_destruct] */

void FUN_108cb0600(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb0630; end: 108cb065f; -[SCUserSessionScopedLensEffectOffscreenRenderingServices .cxx_destruct] */

void FUN_108cb0630(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb0660; end: 108cb0703; -[SCPreviewFeatureVideoPlaybackServices initWithVideoPlayback:videoObjectTracker:] */

undefined1 *
FUN_108cb0660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe180;
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



/* Entry: 108cb0704; end: 108cb070b; -[SCPreviewFeatureVideoPlaybackServices videoPlayback] */

undefined8 FUN_108cb0704(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb070c; end: 108cb0713; -[SCPreviewFeatureVideoPlaybackServices videoObjectTracker] */

undefined8 FUN_108cb070c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb0714; end: 108cb0743; -[SCPreviewFeatureVideoPlaybackServices .cxx_destruct] */

void FUN_108cb0714(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb0744; end: 108cb07b7; +[SCPreviewVideoPlaybackEvent didChangeSourceWithFromSourceIndex:fromSnapIndex:toSourceIndex:toSnapIndex:] */

void FUN_108cb0744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d8a10;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb07b8; end: 108cb0817; +[SCPreviewVideoPlaybackEvent didPlayToSnapWithCurrentSnapIndex:lastPlayedSnapIndex:] */

void FUN_108cb07b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d8a10;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  *(undefined8 *)(puVar2 + 0x40) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb0818; end: 108cb086b; +[SCPreviewVideoPlaybackEvent didRenderFirstFrameWithSourceIndex:] */

void FUN_108cb0818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d8a10;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb086c; end: 108cb08b7; +[SCPreviewVideoPlaybackEvent playerItemFailedToSetup] */

void FUN_108cb086c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d8a10;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb08b8; end: 108cb0903; +[SCPreviewVideoPlaybackEvent playerItemStatusFailed] */

void FUN_108cb08b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d8a10;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb0904; end: 108cb094f; +[SCPreviewVideoPlaybackEvent resetVideoAsset] */

void FUN_108cb0904(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d8a10;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb0950; end: 108cb099b; +[SCPreviewVideoPlaybackEvent willLoopVideo] */

void FUN_108cb0950(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d8a10;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb099c; end: 108cb09bf; -[SCPreviewVideoPlaybackEvent copyWithZone:] */

undefined8 FUN_108cb099c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108cb09c0; end: 108cb0a43; -[SCPreviewVideoPlaybackEvent hash] */

void FUN_108cb09c0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  lVar2 = *(long *)(param_1 + 0x40);
  lStack_20 = -lVar2;
  if (-1 < lVar2) {
    lStack_20 = lVar2;
  }
  puVar1 = &uStack_58;
  func_0x000107c3191c(puVar1,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126fe188;
  puStack_90 = puVar1;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb0a44; end: 108cb0a87; -[SCPreviewVideoPlaybackEvent internalInit] */

void FUN_108cb0a44(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fe188;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb0a88; end: 108cb0b7f; -[SCPreviewVideoPlaybackEvent isEqual:] */

bool FUN_108cb0a88(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((((uVar3 & 1) == 0) ||
           (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
             (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
            (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
          (((*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20) ||
            (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))) ||
           (*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30))))) ||
         (*(long *)(param_1 + 0x38) != *(long *)(param_3 + 0x38))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108cb0b80; end: 108cb0d0f; -[SCPreviewVideoPlaybackEvent matchDidRenderFirstFrame:didChangeSource:didPlayToSnap:resetVideoAsset:willLoopVideo:playerItemFailedToSetup:playerItemStatusFailed:] */

void FUN_108cb0b80(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
      }
    }
    else if (lVar1 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      }
    }
    else if ((lVar1 == 2) && (param_5 != 0)) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    }
    goto LAB_108cb0ca8;
  }
  if (lVar1 < 5) {
    if (lVar1 == 3) {
      if (param_6 == 0) goto LAB_108cb0ca8;
      pcVar2 = *(code **)(param_6 + 0x10);
      lVar1 = param_6;
    }
    else {
      if ((lVar1 != 4) || (param_7 == 0)) goto LAB_108cb0ca8;
      pcVar2 = *(code **)(param_7 + 0x10);
      lVar1 = param_7;
    }
  }
  else if (lVar1 == 5) {
    if (param_8 == 0) goto LAB_108cb0ca8;
    pcVar2 = *(code **)(param_8 + 0x10);
    lVar1 = param_8;
  }
  else {
    if ((lVar1 != 6) || (param_9 == 0)) goto LAB_108cb0ca8;
    pcVar2 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
  }
  (*pcVar2)(lVar1);
LAB_108cb0ca8:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb0d10; end: 108cb0e5f; -[SCLensProcessingEffectApplyTracker trackEffectWillApplyWithId:timestamp:] */

void FUN_108cb0d10(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_2 + 0x18);
    puVar2 = *(undefined **)(param_2 + 8);
    func_0x00010c0e00e0(puVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126db990;
      _objc_opt_new(PTR_PTR_1126db990);
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010c2a86c0(param_1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c2a8680(0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar4 = puVar3;
    func_0x00010c2b1360(puVar3,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar4,param_4);
    puVar2 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _os_unfair_lock_unlock(param_2 + 0x18);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb0e60; end: 108cb0f87; -[SCLensProcessingEffectApplyTracker trackEffectFinishApplingWithId:timestamp:success:] */

void FUN_108cb0e60(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_2 + 0x18);
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010c0e00e0(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010c2a8680(param_1,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar3 = lVar2;
      func_0x00010c2b1360(lVar2,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,lVar3,param_4);
      lVar1 = lVar3;
      func_0x00010bf21f60(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _os_unfair_lock_unlock(param_2 + 0x18);
      func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x10),param_3,lVar1);
      goto LAB_108cb0f50;
    }
    _os_unfair_lock_unlock(param_2 + 0x18);
  }
  lVar1 = 0;
LAB_108cb0f50:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108cb0f88; end: 108cb101b; -[SCLensProcessingEffectApplyTracker applyEntryForId:] */

void FUN_108cb0f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108cb101c; end: 108cb107b; -[SCLensProcessingEffectApplyTracker resetRecordForId:] */

void FUN_108cb101c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,0,param_3);
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb107c; end: 108cb1083; -[SCLensProcessingEffectApplyTracker applyDidFinishObservable] */

undefined8 FUN_108cb107c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb1084; end: 108cb10b3; -[SCLensProcessingEffectApplyTracker .cxx_destruct] */

void FUN_108cb1084(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


