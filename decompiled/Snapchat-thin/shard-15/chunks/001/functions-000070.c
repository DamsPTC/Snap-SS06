/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7f7088; end: 10b7f708f; -[SCNContentManagerDiskSizeBreakdown nonAuthoritative] */

undefined8 FUN_10b7f7088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f7090; end: 10b7f7163; -[SCNContentManagerLookupContentResult initWithContentBundle:serializedFeatureMetadata:] */

undefined1 *
FUN_10b7f7090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b028;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f7164; end: 10b7f716b; -[SCNContentManagerLookupContentResult contentBundle] */

undefined8 FUN_10b7f7164(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f716c; end: 10b7f7173; -[SCNContentManagerLookupContentResult serializedFeatureMetadata] */

undefined8 FUN_10b7f716c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f7174; end: 10b7f71a3; -[SCNContentManagerLookupContentResult .cxx_destruct] */

void FUN_10b7f7174(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f71a4; end: 10b7f72af; -[SCNContentManagerMetaSegmentSpecifier initWithVariants:intervalMs:byteRange:] */

undefined1 *
FUN_10b7f71a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270b030;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 10b7f72b0; end: 10b7f72b7; -[SCNContentManagerMetaSegmentSpecifier variants] */

undefined8 FUN_10b7f72b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f72b8; end: 10b7f72bf; -[SCNContentManagerMetaSegmentSpecifier intervalMs] */

undefined8 FUN_10b7f72b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f72c0; end: 10b7f72c7; -[SCNContentManagerMetaSegmentSpecifier byteRange] */

undefined8 FUN_10b7f72c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f72c8; end: 10b7f7303; -[SCNContentManagerMetaSegmentSpecifier .cxx_destruct] */

void FUN_10b7f72c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f7304; end: 10b7f7367; -[SCNContentManagerNetworkMetrics initWithRequestStartTimestamp:requestEndTimestamp:payloadSize:responseCode:] */

void FUN_10b7f7304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270b038;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined4 *)((long)puVar1 + 8) = param_6;
  }
  return;
}



/* Entry: 10b7f7368; end: 10b7f736f; -[SCNContentManagerNetworkMetrics requestStartTimestamp] */

undefined8 FUN_10b7f7368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f7370; end: 10b7f7377; -[SCNContentManagerNetworkMetrics requestEndTimestamp] */

undefined8 FUN_10b7f7370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f7378; end: 10b7f737f; -[SCNContentManagerNetworkMetrics payloadSize] */

undefined8 FUN_10b7f7378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f7380; end: 10b7f7387; -[SCNContentManagerNetworkMetrics responseCode] */

undefined4 FUN_10b7f7380(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b7f7388; end: 10b7f748b; -[SCNContentManagerPlayerInfo initWithMediaPositionMs:bufferedDurationMs:stallCount:totalStallDurationMs:droppedFramesCount:] */

undefined1 *
FUN_10b7f7388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_11270b040;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f748c; end: 10b7f7493; -[SCNContentManagerPlayerInfo mediaPositionMs] */

undefined8 FUN_10b7f748c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f7494; end: 10b7f749b; -[SCNContentManagerPlayerInfo bufferedDurationMs] */

undefined8 FUN_10b7f7494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f749c; end: 10b7f74a3; -[SCNContentManagerPlayerInfo stallCount] */

undefined8 FUN_10b7f749c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f74a4; end: 10b7f74ab; -[SCNContentManagerPlayerInfo totalStallDurationMs] */

undefined8 FUN_10b7f74a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f74ac; end: 10b7f74b3; -[SCNContentManagerPlayerInfo droppedFramesCount] */

undefined8 FUN_10b7f74ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7f74b4; end: 10b7f74ef; -[SCNContentManagerPlayerInfo .cxx_destruct] */

void FUN_10b7f74b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b7f74f0; end: 10b7f7647; -[SCNContentManagerPrefetchContentMetadata initWithMainUrl:streamingProtocol:prefetchHint:contentLength:cachedLength:] */

undefined1 *
FUN_10b7f74f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_11270b048;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f7648; end: 10b7f764f; -[SCNContentManagerPrefetchContentMetadata mainUrl] */

undefined8 FUN_10b7f7648(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f7650; end: 10b7f7657; -[SCNContentManagerPrefetchContentMetadata streamingProtocol] */

undefined8 FUN_10b7f7650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f7658; end: 10b7f765f; -[SCNContentManagerPrefetchContentMetadata prefetchHint] */

undefined8 FUN_10b7f7658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f7660; end: 10b7f7667; -[SCNContentManagerPrefetchContentMetadata contentLength] */

undefined8 FUN_10b7f7660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f7668; end: 10b7f766f; -[SCNContentManagerPrefetchContentMetadata cachedLength] */

undefined8 FUN_10b7f7668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7f7670; end: 10b7f76b3; -[SCNContentManagerPrefetchContentMetadata .cxx_destruct] */

void FUN_10b7f7670(long param_1)

{
  FUN_10b7f76b4(param_1 + 0x28);
  FUN_10b7f76b4(param_1 + 0x20);
  FUN_10b7f76b4(param_1 + 0x18);
  FUN_10b7f76b4(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f76b4; end: 10b7f76bb;  */

void FUN_10b7f76b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10b7f76bc; end: 10b7f77d3; -[SCNContentManagerPrefetchSignals initWithCompleteDownload:videoFirstChunkDurationMs:firstChunkBytes:alwaysAttemptAsABR:requireHighestQualityVariant:contentDistance:] */

undefined1 *
FUN_10b7f76bc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_11270b050;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f77d4; end: 10b7f77f7; -[SCNContentManagerPrefetchSignals copyWithZone:] */

undefined8 FUN_10b7f77d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7f77f8; end: 10b7f77ff; -[SCNContentManagerPrefetchSignals completeDownload] */

undefined1 FUN_10b7f77f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7f7800; end: 10b7f7807; -[SCNContentManagerPrefetchSignals videoFirstChunkDurationMs] */

undefined8 FUN_10b7f7800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f7808; end: 10b7f780f; -[SCNContentManagerPrefetchSignals firstChunkBytes] */

undefined8 FUN_10b7f7808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f7810; end: 10b7f7817; -[SCNContentManagerPrefetchSignals alwaysAttemptAsABR] */

undefined1 FUN_10b7f7810(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b7f7818; end: 10b7f781f; -[SCNContentManagerPrefetchSignals requireHighestQualityVariant] */

undefined1 FUN_10b7f7818(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b7f7820; end: 10b7f7827; -[SCNContentManagerPrefetchSignals contentDistance] */

undefined8 FUN_10b7f7820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f7828; end: 10b7f7863; -[SCNContentManagerPrefetchSignals .cxx_destruct] */

void FUN_10b7f7828(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7f7864; end: 10b7f78af; -[SCNContentManagerRange initWithStart:end:] */

void FUN_10b7f7864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b058;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b7f78b0; end: 10b7f78b7; -[SCNContentManagerRange start] */

undefined8 FUN_10b7f78b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f78b8; end: 10b7f78bf; -[SCNContentManagerRange end] */

undefined8 FUN_10b7f78b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f78c0; end: 10b7f7993; -[SCNContentManagerRegisterContentWriterResult initWithCacheKey:error:] */

undefined1 *
FUN_10b7f78c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b060;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f7994; end: 10b7f799b; -[SCNContentManagerRegisterContentWriterResult cacheKey] */

undefined8 FUN_10b7f7994(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f799c; end: 10b7f79a3; -[SCNContentManagerRegisterContentWriterResult error] */

undefined8 FUN_10b7f799c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f79a4; end: 10b7f79d3; -[SCNContentManagerRegisterContentWriterResult .cxx_destruct] */

void FUN_10b7f79a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f79d4; end: 10b7f7adf; -[SCNContentManagerSegmentSpecifier initWithUrl:intervalMs:byteRange:] */

undefined1 *
FUN_10b7f79d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270b068;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 10b7f7ae0; end: 10b7f7ae7; -[SCNContentManagerSegmentSpecifier url] */

undefined8 FUN_10b7f7ae0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f7ae8; end: 10b7f7aef; -[SCNContentManagerSegmentSpecifier intervalMs] */

undefined8 FUN_10b7f7ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f7af0; end: 10b7f7af7; -[SCNContentManagerSegmentSpecifier byteRange] */

undefined8 FUN_10b7f7af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f7af8; end: 10b7f7b33; -[SCNContentManagerSegmentSpecifier .cxx_destruct] */

void FUN_10b7f7af8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f7b34; end: 10b7f7b7b; -[SCNContentManagerStreamerMetadata initWithContentLength:] */

void FUN_10b7f7b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b070;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b7f7b7c; end: 10b7f7b83; -[SCNContentManagerStreamerMetadata contentLength] */

undefined8 FUN_10b7f7b7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f7b84; end: 10b7f7c93; -[SCNContentManagerStreamingMediaSpecifier initWithVariants:segments:metaSegments:] */

undefined1 *
FUN_10b7f7b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270b078;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    FUN_10b7f7ce8(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_10b7f7ce8(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b7f7ce8(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f7c94; end: 10b7f7c9b; -[SCNContentManagerStreamingMediaSpecifier variants] */

undefined8 FUN_10b7f7c94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f7c9c; end: 10b7f7ca3; -[SCNContentManagerStreamingMediaSpecifier segments] */

undefined8 FUN_10b7f7c9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f7ca4; end: 10b7f7cab; -[SCNContentManagerStreamingMediaSpecifier metaSegments] */

undefined8 FUN_10b7f7ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f7cac; end: 10b7f7ce7; -[SCNContentManagerStreamingMediaSpecifier .cxx_destruct] */

void FUN_10b7f7cac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f7ce8; end: 10b7f7cef;  */

void FUN_10b7f7ce8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7f7cf0; end: 10b7f7db3; -[SCNContentManagerStreamingVariantCacheStatus initWithName:isManifestAvailable:isMediaAvailable:contentSizeOnDiskBytes:] */

undefined1 *
FUN_10b7f7cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_11270b080;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f7db4; end: 10b7f7dbb; -[SCNContentManagerStreamingVariantCacheStatus name] */

undefined8 FUN_10b7f7db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f7dbc; end: 10b7f7dc3; -[SCNContentManagerStreamingVariantCacheStatus isManifestAvailable] */

undefined1 FUN_10b7f7dbc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7f7dc4; end: 10b7f7dcb; -[SCNContentManagerStreamingVariantCacheStatus isMediaAvailable] */

undefined1 FUN_10b7f7dc4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b7f7dcc; end: 10b7f7dd3; -[SCNContentManagerStreamingVariantCacheStatus contentSizeOnDiskBytes] */

undefined8 FUN_10b7f7dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f7dd4; end: 10b7f7ddf; -[SCNContentManagerStreamingVariantCacheStatus .cxx_destruct] */

void FUN_10b7f7dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7f7de0; end: 10b7f7f03; -[SCNContentManagerVariantSpecifier initWithUrl:name:segments:bandwidth:type:] */

undefined1 *
FUN_10b7f7de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_11270b088;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    FUN_10b7f7f68(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_10b7f7f68(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b7f7f68(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f7f04; end: 10b7f7f0b; -[SCNContentManagerVariantSpecifier url] */

undefined8 FUN_10b7f7f04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f7f0c; end: 10b7f7f13; -[SCNContentManagerVariantSpecifier name] */

undefined8 FUN_10b7f7f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f7f14; end: 10b7f7f1b; -[SCNContentManagerVariantSpecifier segments] */

undefined8 FUN_10b7f7f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f7f1c; end: 10b7f7f23; -[SCNContentManagerVariantSpecifier bandwidth] */

undefined8 FUN_10b7f7f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f7f24; end: 10b7f7f2b; -[SCNContentManagerVariantSpecifier type] */

undefined8 FUN_10b7f7f24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7f7f2c; end: 10b7f7f67; -[SCNContentManagerVariantSpecifier .cxx_destruct] */

void FUN_10b7f7f2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f7f68; end: 10b7f7f6f;  */

void FUN_10b7f7f68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7f7f70; end: 10b7f802f; -[SCNFileManagerCacheKeyMetadata initWithKey:size:lastReadTimestamp:expirationTimestamp:] */

undefined1 *
FUN_10b7f7f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_11270b090;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f8030; end: 10b7f8037; -[SCNFileManagerCacheKeyMetadata key] */

undefined8 FUN_10b7f8030(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f8038; end: 10b7f803f; -[SCNFileManagerCacheKeyMetadata size] */

undefined8 FUN_10b7f8038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f8040; end: 10b7f8047; -[SCNFileManagerCacheKeyMetadata lastReadTimestamp] */

undefined8 FUN_10b7f8040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f8048; end: 10b7f804f; -[SCNFileManagerCacheKeyMetadata expirationTimestamp] */

undefined8 FUN_10b7f8048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f8050; end: 10b7f805b; -[SCNFileManagerCacheKeyMetadata .cxx_destruct] */

void FUN_10b7f8050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f805c; end: 10b7f8063; -[SCNGrpcRPCInfo serviceMethodName] */

undefined8 FUN_10b7f805c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f8064; end: 10b7f806b; -[SCNGrpcRPCInfo host] */

undefined8 FUN_10b7f8064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7f806c; end: 10b7f8073; -[SCNGrpcRPCInfo channelType] */

undefined8 FUN_10b7f806c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b7f8074; end: 10b7f807b; -[SCNGrpcRPCInfo protocol] */

undefined8 FUN_10b7f8074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b7f807c; end: 10b7f8083; -[SCNGrpcRPCInfo connectionReused] */

undefined1 FUN_10b7f807c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7f8084; end: 10b7f808b; -[SCNGrpcRPCInfo dnsResolveInMillis] */

undefined4 FUN_10b7f8084(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b7f808c; end: 10b7f8093; -[SCNGrpcRPCInfo connetionSetupInMillis] */

undefined4 FUN_10b7f808c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b7f8094; end: 10b7f809b; -[SCNGrpcRPCInfo sslSetupInMillis] */

undefined4 FUN_10b7f8094(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10b7f809c; end: 10b7f80a3; -[SCNGrpcRPCInfo reqWireSize] */

undefined4 FUN_10b7f809c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10b7f80a4; end: 10b7f80ab; -[SCNGrpcRPCInfo responseWireSize] */

undefined4 FUN_10b7f80a4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 10b7f80ac; end: 10b7f80b3; -[SCNGrpcRPCInfo serverIp] */

undefined8 FUN_10b7f80ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b7f80b4; end: 10b7f80bb; -[SCNGrpcRPCInfo cronetErrorCode] */

undefined8 FUN_10b7f80b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b7f80bc; end: 10b7f8167; -[SCNGrpcStatus initWithStatusCode:errorString:] */

undefined1 *
FUN_10b7f80bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b0c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f8168; end: 10b7f816f; -[SCNGrpcStatus statusCode] */

undefined8 FUN_10b7f8168(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f8170; end: 10b7f8177; -[SCNGrpcStatus errorString] */

undefined8 FUN_10b7f8170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f8178; end: 10b7f8183; -[SCNGrpcStatus .cxx_destruct] */

void FUN_10b7f8178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7f8184; end: 10b7f83df; -[SCNGrpcStreamingMetricsInfo initWithRpcInfo:bytesSent:bytesSentError:bytesReceived:msgSent:msgSentError:msgReceived:sessionTime:success:statusCode:requestId:taskId:consistentIdTracking:authSuccess:authLatency:argosSuccess:argosLatency:feature:serverLatency:argosType:networkTTFB:] */

undefined8 *
FUN_10b7f8184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_18);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_11270b0d0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    puVar1[5] = param_6;
    puVar1[6] = param_7;
    puVar1[7] = param_8;
    puVar1[8] = param_9;
    puVar1[9] = param_10;
    *(undefined1 *)(puVar1 + 1) = param_11;
    *(undefined4 *)((long)puVar1 + 0xc) = param_12;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x00010b7f84e4(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x00010b7f84e4(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    func_0x00010b7f84e4(uVar3);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    puVar1[0xe] = param_17;
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    puVar1[0x10] = param_19;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    func_0x00010b7f84e4(uVar3);
    puVar1[0x12] = param_21;
    puVar1[0x13] = param_22;
    puVar1[0x14] = param_23;
  }
  _objc_release(param_20);
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b7f83e0; end: 10b7f83e7; -[SCNGrpcStreamingMetricsInfo rpcInfo] */

undefined8 FUN_10b7f83e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f83e8; end: 10b7f83ef; -[SCNGrpcStreamingMetricsInfo bytesSent] */

undefined8 FUN_10b7f83e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f83f0; end: 10b7f83f7; -[SCNGrpcStreamingMetricsInfo bytesSentError] */

undefined8 FUN_10b7f83f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f83f8; end: 10b7f83ff; -[SCNGrpcStreamingMetricsInfo bytesReceived] */

undefined8 FUN_10b7f83f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


