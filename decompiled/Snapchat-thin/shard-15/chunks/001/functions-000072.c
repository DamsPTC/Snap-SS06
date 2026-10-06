/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7f918c; end: 10b7f91d7; -[SCNContentResolutionVariantInfo .cxx_destruct] */

void FUN_10b7f918c(long param_1)

{
  func_0x00010b7f91e0(param_1 + 0x68);
  func_0x00010b7f91e0(param_1 + 0x60);
  func_0x00010b7f91e0(param_1 + 0x58);
  func_0x00010b7f91e0(param_1 + 0x50);
  func_0x00010b7f91e0(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 10b7f91d8; end: 10b7f91e7;  */

void FUN_10b7f91d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7f91e8; end: 10b7f92af; -[SCNContentResolutionVideoMetadata initWithPrefetchHint:isFastStartEnabled:streamingProtocol:] */

undefined1 *
FUN_10b7f91e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_11270b120;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f92b0; end: 10b7f92b7; -[SCNContentResolutionVideoMetadata prefetchHint] */

undefined8 FUN_10b7f92b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f92b8; end: 10b7f92bf; -[SCNContentResolutionVideoMetadata isFastStartEnabled] */

undefined1 FUN_10b7f92b8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7f92c0; end: 10b7f92c7; -[SCNContentResolutionVideoMetadata streamingProtocol] */

undefined8 FUN_10b7f92c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f92c8; end: 10b7f92f7; -[SCNContentResolutionVideoMetadata .cxx_destruct] */

void FUN_10b7f92c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7f92f8; end: 10b7f9373; -[SCNGrapheneDiagnosticInfo initWithEnqueueOps:compactionOps:countersSize:timersSize:histogramsSize:enqueueIntervalMs:flushIntervalMs:] */

void FUN_10b7f92f8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270b130;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined4 *)((long)puVar1 + 0x10) = param_5;
    *(undefined4 *)((long)puVar1 + 0x14) = param_6;
    *(undefined4 *)((long)puVar1 + 0x18) = param_7;
    *(undefined4 *)((long)puVar1 + 0x1c) = param_8;
    *(undefined4 *)((long)puVar1 + 0x20) = param_9;
  }
  return;
}



/* Entry: 10b7f9374; end: 10b7f937b; -[SCNGrapheneDiagnosticInfo enqueueOps] */

undefined4 FUN_10b7f9374(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b7f937c; end: 10b7f9383; -[SCNGrapheneDiagnosticInfo compactionOps] */

undefined4 FUN_10b7f937c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b7f9384; end: 10b7f938b; -[SCNGrapheneDiagnosticInfo countersSize] */

undefined4 FUN_10b7f9384(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b7f938c; end: 10b7f9393; -[SCNGrapheneDiagnosticInfo timersSize] */

undefined4 FUN_10b7f938c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10b7f9394; end: 10b7f939b; -[SCNGrapheneDiagnosticInfo histogramsSize] */

undefined4 FUN_10b7f9394(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10b7f939c; end: 10b7f93a3; -[SCNGrapheneDiagnosticInfo enqueueIntervalMs] */

undefined4 FUN_10b7f939c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 10b7f93a4; end: 10b7f93ab; -[SCNGrapheneDiagnosticInfo flushIntervalMs] */

undefined4 FUN_10b7f93a4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10b7f93ac; end: 10b7f94bb; -[SCNGrapheneExtensionMetric initWithPartition:metric:dimensions:] */

undefined1 *
FUN_10b7f93ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_11270b138;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    FUN_10b7f9510(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_10b7f9510(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b7f9510(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f94bc; end: 10b7f94c3; -[SCNGrapheneExtensionMetric partition] */

undefined8 FUN_10b7f94bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f94c4; end: 10b7f94cb; -[SCNGrapheneExtensionMetric metric] */

undefined8 FUN_10b7f94c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f94cc; end: 10b7f94d3; -[SCNGrapheneExtensionMetric dimensions] */

undefined8 FUN_10b7f94cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f94d4; end: 10b7f950f; -[SCNGrapheneExtensionMetric .cxx_destruct] */

void FUN_10b7f94d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f9510; end: 10b7f9517;  */

void FUN_10b7f9510(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7f9518; end: 10b7f95f3; -[SCNGrapheneFlushContext initWithUsername:userGuid:] */

undefined1 *
FUN_10b7f9518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b140;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 10b7f95f4; end: 10b7f95fb; -[SCNGrapheneFlushContext username] */

undefined8 FUN_10b7f95f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f95fc; end: 10b7f9603; -[SCNGrapheneFlushContext userGuid] */

undefined8 FUN_10b7f95fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f9604; end: 10b7f9633; -[SCNGrapheneFlushContext .cxx_destruct] */

void FUN_10b7f9604(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f9634; end: 10b7f9707; -[SCNGrapheneMetricsPayload initWithFrame:diagnostics:] */

undefined1 *
FUN_10b7f9634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b148;
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



/* Entry: 10b7f9708; end: 10b7f970f; -[SCNGrapheneMetricsPayload frame] */

undefined8 FUN_10b7f9708(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f9710; end: 10b7f9717; -[SCNGrapheneMetricsPayload diagnostics] */

undefined8 FUN_10b7f9710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f9718; end: 10b7f9747; -[SCNGrapheneMetricsPayload .cxx_destruct] */

void FUN_10b7f9718(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f9748; end: 10b7f980f; -[SCNNetworkManagerLoggingInfo initWithLastDeletedTime:deletionReason:contentAttribution:] */

undefined1 *
FUN_10b7f9748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b160;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f9810; end: 10b7f9817; -[SCNNetworkManagerLoggingInfo lastDeletedTime] */

undefined8 FUN_10b7f9810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f9818; end: 10b7f981f; -[SCNNetworkManagerLoggingInfo deletionReason] */

undefined8 FUN_10b7f9818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f9820; end: 10b7f9827; -[SCNNetworkManagerLoggingInfo contentAttribution] */

undefined4 FUN_10b7f9820(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b7f9828; end: 10b7f9857; -[SCNNetworkManagerLoggingInfo .cxx_destruct] */

void FUN_10b7f9828(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7f9858; end: 10b7f98a3; -[SCNNetworkManagerProgress initWithTotalUnitCount:completedUnitCount:] */

void FUN_10b7f9858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b168;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b7f98a4; end: 10b7f98ab; -[SCNNetworkManagerProgress totalUnitCount] */

undefined8 FUN_10b7f98a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f98ac; end: 10b7f98b3; -[SCNNetworkManagerProgress completedUnitCount] */

undefined8 FUN_10b7f98ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f98b4; end: 10b7f999f; -[SCNNetworkManagerProgressiveDownloadMetadata initWithRequestId:statusCode:contentLength:failoverAdvice:] */

undefined1 *
FUN_10b7f98b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270b170;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f99a0; end: 10b7f99a7; -[SCNNetworkManagerProgressiveDownloadMetadata requestId] */

undefined8 FUN_10b7f99a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f99a8; end: 10b7f99af; -[SCNNetworkManagerProgressiveDownloadMetadata statusCode] */

undefined4 FUN_10b7f99a8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b7f99b0; end: 10b7f99b7; -[SCNNetworkManagerProgressiveDownloadMetadata contentLength] */

undefined8 FUN_10b7f99b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f99b8; end: 10b7f99bf; -[SCNNetworkManagerProgressiveDownloadMetadata failoverAdvice] */

undefined8 FUN_10b7f99b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f99c0; end: 10b7f99ef; -[SCNNetworkManagerProgressiveDownloadMetadata .cxx_destruct] */

void FUN_10b7f99c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7f99f0; end: 10b7f9b3f; -[SCNNetworkManagerTrackingInfo initWithId:type:mediaType:contentResolveTime:expirationInDays:] */

undefined1 *
FUN_10b7f99f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_11270b178;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    FUN_10b7f9ba4(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_10b7f9ba4(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b7f9ba4(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f9b40; end: 10b7f9b47; -[SCNNetworkManagerTrackingInfo id] */

undefined8 FUN_10b7f9b40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f9b48; end: 10b7f9b4f; -[SCNNetworkManagerTrackingInfo type] */

undefined8 FUN_10b7f9b48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f9b50; end: 10b7f9b57; -[SCNNetworkManagerTrackingInfo mediaType] */

undefined8 FUN_10b7f9b50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f9b58; end: 10b7f9b5f; -[SCNNetworkManagerTrackingInfo contentResolveTime] */

undefined8 FUN_10b7f9b58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f9b60; end: 10b7f9b67; -[SCNNetworkManagerTrackingInfo expirationInDays] */

undefined8 FUN_10b7f9b60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7f9b68; end: 10b7f9ba3; -[SCNNetworkManagerTrackingInfo .cxx_destruct] */

void FUN_10b7f9b68(long param_1)

{
  func_0x00010b7f9bac(param_1 + 0x20);
  func_0x00010b7f9bac(param_1 + 0x18);
  func_0x00010b7f9bac(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f9ba4; end: 10b7f9bb3;  */

void FUN_10b7f9ba4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7f9bb4; end: 10b7f9bbf; +[SCDeviceInfoImplementation resetDispatchOnceTokenForTesting] */

void FUN_10b7f9bb4(void)

{
  uRam00000001137fbae0 = 0;
  return;
}



/* Entry: 10b7f9bc0; end: 10b7f9c37; -[SCDeviceInfoImplementation isRunningOnMacPlatform] */

undefined * FUN_10b7f9bc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c083ea0();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c077300();
    _objc_release(puVar2);
  }
  else {
    puVar3 = (undefined *)0x1;
  }
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10b7f9c38; end: 10b7f9c7b; -[SCDeviceInfoImplementation _setAlreadySavedToKeychain] */

void FUN_10b7f9c38(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7f9c7c; end: 10b7f9cdb; -[SCDeviceInfoImplementation _retrieveConfigDeviceIdFromKeychain] */

void FUN_10b7f9c7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110e96378);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7f9cdc; end: 10b7f9d1f; -[SCDeviceInfoImplementation _updateBothUserDefaultsAndKeychain:] */

void FUN_10b7f9cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be98cc0(param_1,param_2,param_3);
  func_0x00010be98ca0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7f9d20; end: 10b7f9d7b; -[SCDeviceInfoImplementation _saveConfigDeviceIdToUserDefaults:] */

void FUN_10b7f9d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _objc_retain(param_3);
  func_0x00010c24d8e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7f9d7c; end: 10b7f9dcb; -[SCDeviceInfoImplementation _saveConfigDeviceIdToKeychain:] */

void FUN_10b7f9d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e540(puVar1,param_2,param_3,&PTR____CFConstantStringClassReference_110e96378);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7f9dcc; end: 10b7f9dd7; -[SCDeviceInfoImplementation .cxx_destruct] */

void FUN_10b7f9dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f9dd8; end: 10b7f9e07; -[SCDeviceInfoServices .cxx_destruct] */

void FUN_10b7f9dd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f9e08; end: 10b7f9f27; +[SCKeychainManager synchronizableQueryForKey:] */

/* WARNING: Removing unreachable block (ram,0x00010b7fa1a4) */

undefined8 * FUN_10b7f9e08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)PTR__kSecClassGenericPassword_1103477e8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f3e418;
  uStack_40 = *(undefined8 *)PTR__kCFBooleanTrue_11034ab90;
  puVar8 = &uStack_60;
  puVar11 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_58 = param_3;
  uStack_50 = param_3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar11;
  func_0x00010c0d3c80();
  _objc_release(puVar11);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _SecItemCopyMatching();
  if ((int)puVar4 == 0) {
    _objc_retain(0);
    lVar5 = 0;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(0);
        }
        puVar6 = *(undefined **)(lVar10 * 8);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010bf51e00();
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
        puVar7 = puVar4;
        _objc_opt_isKindOfClass(puVar4,puVar6);
        if (((ulong)puVar7 & 1) == 0) {
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class();
          puVar7 = puVar4;
          _objc_opt_isKindOfClass(puVar4,puVar6);
          if (((ulong)puVar7 & 1) != 0) {
            _objc_retain(puVar4);
            puVar6 = puVar4;
            goto LAB_10b7fa118;
          }
          FUN_10b7fa1f4(0);
          puVar6 = (undefined *)0x0;
        }
        else {
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_alloc();
          func_0x00010c008340();
LAB_10b7fa118:
          puVar7 = puVar6;
          FUN_10b7fa1f4();
          if (((((ulong)puVar7 & 1) == 0) && (puVar6 != (undefined *)0x0)) &&
             (puVar11 = puVar8, func_0x00010bf4b900(), ((ulong)puVar11 & 1) == 0)) {
            func_0x00010c12bca0(PTR_PTR_1126aef90);
          }
        }
        _objc_release(puVar6);
        _objc_release(puVar4);
        lVar10 = lVar10 + 1;
      } while (lVar5 != lVar10);
      lVar5 = 0;
      func_0x00010bf52a60();
    }
    _objc_release(0);
  }
  _objc_release(puVar3);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_retain();
    if (lRam00000001137fbaf0 != -1) {
      func_0x000107c27d9c(0x1137fbaf0,&PTR___NSConcreteGlobalBlock_110d61f00);
    }
    if ((bRam00000001137fbae8 & 1) == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = puVar8;
      func_0x00010bf4bb00(puVar8);
    }
    _objc_release(puVar8);
    return puVar11;
  }
  return puVar8;
}



/* Entry: 10b7f9f28; end: 10b7fa1f3; +[SCKeychainManager removeAllDataExcludingWhitelist:] */

/* WARNING: Removing unreachable block (ram,0x00010b7fa1a4) */

ulong FUN_10b7f9f28(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _SecItemCopyMatching();
  if ((int)puVar3 == 0) {
    _objc_retain(0);
    lVar4 = 0;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(0);
        }
        puVar5 = *(undefined **)(lVar8 * 8);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x00010bf51e00();
        _objc_release(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
        puVar6 = puVar3;
        _objc_opt_isKindOfClass(puVar3,puVar5);
        if (((ulong)puVar6 & 1) == 0) {
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class();
          puVar6 = puVar3;
          _objc_opt_isKindOfClass(puVar3,puVar5);
          if (((ulong)puVar6 & 1) != 0) {
            _objc_retain(puVar3);
            puVar5 = puVar3;
            goto LAB_10b7fa118;
          }
          FUN_10b7fa1f4(0);
          puVar5 = (undefined *)0x0;
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_alloc();
          func_0x00010c008340();
LAB_10b7fa118:
          puVar6 = puVar5;
          FUN_10b7fa1f4();
          if (((((ulong)puVar6 & 1) == 0) && (puVar5 != (undefined *)0x0)) &&
             (uVar9 = param_3, func_0x00010bf4b900(), (uVar9 & 1) == 0)) {
            func_0x00010c12bca0(PTR_PTR_1126aef90);
          }
        }
        _objc_release(puVar5);
        _objc_release(puVar3);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = 0;
      func_0x00010bf52a60();
    }
    _objc_release(0);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain();
    if (lRam00000001137fbaf0 != -1) {
      func_0x000107c27d9c(0x1137fbaf0,&PTR___NSConcreteGlobalBlock_110d61f00);
    }
    if ((bRam00000001137fbae8 & 1) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_3;
      func_0x00010bf4bb00(param_3);
    }
    _objc_release(param_3);
    return uVar9;
  }
  return param_3;
}



/* Entry: 10b7fa1f4; end: 10b7fa26f;  */

undefined8 FUN_10b7fa1f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  if (lRam00000001137fbaf0 != -1) {
    func_0x000107c27d9c(0x1137fbaf0,&PTR___NSConcreteGlobalBlock_110d61f00);
  }
  if ((bRam00000001137fbae8 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf4bb00(param_1);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b7fa270; end: 10b7fa2ef; +[SCKeychainManager setData:forKey:] */

bool FUN_10b7fa270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c11d440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_10b7fa368();
  _objc_release(param_3);
  _objc_release(param_1);
  return (int)uVar1 == 0;
}



/* Entry: 10b7fa2f0; end: 10b7fa367; +[SCKeychainManager setDataWithStatus:forKey:] */

undefined8 FUN_10b7fa2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c11d440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_10b7fa368();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b7fa368; end: 10b7fa49f;  */

undefined8 FUN_10b7fa368(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  func_0x00010c1d0640(param_1);
  uVar1 = param_1;
  func_0x00010c0d3c80();
  puVar4 = param_3;
  func_0x00010c1d0640();
  uVar2 = uVar1;
  _SecItemAdd(uVar1,0);
  if ((int)uVar2 == -0x62d3) {
    puVar4 = &uStack_68;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_68 = param_2;
    puStack_60 = param_3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    _SecItemUpdate(param_1,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  func_0x00010c11d440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_10b7fa368();
  _objc_release(puVar4);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b7fa4a0; end: 10b7fa517; +[SCKeychainManager setBackupableData:forKey:] */

undefined8 FUN_10b7fa4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c11d440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_10b7fa368();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b7fa518; end: 10b7fa58f; +[SCKeychainManager setBackupableDataMoreAccessible:forKey:] */

undefined8 FUN_10b7fa518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c11d440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_10b7fa368();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b7fa590; end: 10b7fa607; +[SCKeychainManager setSynchronizableData:forKey:] */

undefined8 FUN_10b7fa590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c266b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_10b7fa368();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b7fa608; end: 10b7fa64f; +[SCKeychainManager synchronizableDataForKey:] */

void FUN_10b7fa608(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c266b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107c30a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7fa650; end: 10b7fa68b; +[SCKeychainManager removeSynchronizableDataForKeyWithStatus:] */

undefined8 FUN_10b7fa650(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c266b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _SecItemDelete();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b7fa68c; end: 10b7fa6cb; +[SCKeychainManager removeDataForKey:] */

bool FUN_10b7fa68c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c11d440();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _SecItemDelete();
  _objc_release(param_1);
  return (int)uVar1 == 0;
}



/* Entry: 10b7fa6cc; end: 10b7fa707; +[SCKeychainManager removeDataForKeyWithStatus:] */

undefined8 FUN_10b7fa6cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c11d440();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _SecItemDelete();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b7fa708; end: 10b7fa787; +[SCKeychainManager setBackgroundData:forKey:] */

bool FUN_10b7fa708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c11d440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_10b7fa368();
  _objc_release(param_3);
  _objc_release(param_1);
  return (int)uVar1 == 0;
}



/* Entry: 10b7fa788; end: 10b7fa7ff; +[SCKeychainManager setBackgroundDataWithStatus:forKey:] */

undefined8 FUN_10b7fa788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c11d440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_10b7fa368();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b7fa800; end: 10b7fa8cf; +[SCKeychainManager isDataThisDeviceOnly:] */

bool FUN_10b7fa800(long param_1)

{
  long lVar1;
  
  func_0x00010c11d440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  lVar1 = param_1;
  func_0x000107c30a20(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 10b7fa8d0; end: 10b7fa947; -[SIGActionSheetNavigationController shouldIgnoreForCustomStatusBarStyleContext] */

ulong FUN_10b7fa8d0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  _objc_opt_respondsToSelector(param_1,PTR_s_childViewControllerForCustomStat_1125abd50);
  if ((uVar1 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    func_0x00010bf38ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    _objc_opt_respondsToSelector();
    if ((uVar1 & 1) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = param_1;
      func_0x00010c230f40(param_1);
    }
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 10b7fa948; end: 10b7faa57; +[SIGAlertDialog editableAlertWithTitle:dialogText:saveAction:cancelAction:] */

void FUN_10b7fa948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aed78;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010bfefe80(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c00c510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b7faa58; end: 10b7faa5f; -[SIGAlertDialog initWithDialogText:actions:] */

void FUN_10b7faa58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00c510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDialogText_actions_shoul_1125e0b10,param_3,param_4,0);
  return;
}



/* Entry: 10b7faa60; end: 10b7faa9f; -[SIGAlertDialog initWithDialogText:actions:shouldUseDynamicTypeCapableDialog:] */

void FUN_10b7faa60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  func_0x00010bfefec0(param_1,param_2,0,0,param_3,0,param_4,0,0,0,param_5);
  return;
}



/* Entry: 10b7faaa0; end: 10b7faaa7; -[SIGAlertDialog initWithTitle:dialogText:actions:] */

void FUN_10b7faaa0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c052f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithTitle_dialogText_actions_1125f25c8);
  return;
}



/* Entry: 10b7faaa8; end: 10b7faae3; -[SIGAlertDialog initWithTitle:dialogText:actions:shouldUseDynamicTypeCapableDialog:] */

void FUN_10b7faaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  func_0x00010bfefec0(param_1,param_2,0,param_3,param_4,0,param_5,0,0,0,param_6);
  return;
}



/* Entry: 10b7faae4; end: 10b7fab2b; -[SIGAlertDialog initWithTitle:dialogText:actions:disableFinalActionDefaultStyling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7faae4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  *(undefined1 *)(param_1 + _DAT_112793efc) = param_6;
  func_0x00010bfefec0(param_1,param_2,0,param_3,param_4,0,param_5,0,0,0,0);
  return;
}



/* Entry: 10b7fab2c; end: 10b7fabef; -[SIGAlertDialog initWithImage:title:dialogText:actions:] */

undefined8
FUN_10b7fab2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010be37820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfefe80(param_1,param_2,uVar1,param_4,param_5,0,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b7fabf0; end: 10b7facbf; -[SIGAlertDialog initWithImage:title:dialogText:editMode:actions:] */

undefined8
FUN_10b7fabf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010be37820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfefe80(param_1,param_2,uVar1,param_4,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b7facc0; end: 10b7face7; -[SIGAlertDialog initWithImage:title:dialogText:editMode:actions:placeholders:urlStrings:linkHandler:] */

void FUN_10b7facc0(void)

{
  func_0x00010c01c480();
  return;
}



/* Entry: 10b7face8; end: 10b7fae0f; -[SIGAlertDialog initWithImage:title:dialogText:editMode:actions:placeholders:urlStrings:linkHandler:shouldUseDynamicTypeCapableDialog:] */

undefined8
FUN_10b7face8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010be37820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfefec0(param_1,param_2,uVar1,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                      ,param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b7fae10; end: 10b7fae27; -[SIGAlertDialog initWithTitle:actions:] */

void FUN_10b7fae10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfefe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithAccessoryView_title_dial_1125d9968,0,param_3,0,0,param_4);
  return;
}



/* Entry: 10b7fae28; end: 10b7fae4b; -[SIGAlertDialog initWithAccessoryView:title:dialogText:editMode:actions:] */

void FUN_10b7fae28(void)

{
  func_0x00010bfefea0();
  return;
}



/* Entry: 10b7fae4c; end: 10b7faf1b; -[SIGAlertDialog initWithAccessoryViewController:title:dialogText:editMode:actions:] */

undefined8
FUN_10b7fae4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = (undefined *)0x0;
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126e1550;
    func_0x00010c29c560(PTR_PTR_1126e1550,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfefee0(param_1,param_2,puVar1,param_4,param_5,param_6,param_7,0,0,0,0);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10b7faf1c; end: 10b7faf43; -[SIGAlertDialog initWithAccessoryView:title:dialogText:editMode:actions:placeholders:urlStrings:linkHandler:] */

void FUN_10b7faf1c(void)

{
  func_0x00010bfefec0();
  return;
}



/* Entry: 10b7faf44; end: 10b7fb057; -[SIGAlertDialog initWithAccessoryView:title:attributedDialogText:editMode:actions:placeholders:urlStrings:linkHandler:shouldUseDynamicTypeCapableDialog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b7faf44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112793f00);
  *(undefined8 *)(param_1 + _DAT_112793f00) = param_5;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bfefec0(param_1,param_2,param_3,param_4,0,param_6,param_7,param_8,param_9,param_10,
                      param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b7fb058; end: 10b7fb173; -[SIGAlertDialog initWithAccessoryView:title:dialogText:editMode:actions:placeholders:urlStrings:linkHandler:shouldUseDynamicTypeCapableDialog:] */

undefined8
FUN_10b7fb058(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = (undefined *)0x0;
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126e1550;
    func_0x00010c29ea40(PTR_PTR_1126e1550,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfefee0(param_1,param_2,puVar1,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10b7fb174; end: 10b7fb553; -[SIGAlertDialog initWithAccessoryViewOrViewController:title:dialogText:editMode:actions:placeholders:urlStrings:linkHandler:shouldUseDynamicTypeCapableDialog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b7fb174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined *param_8,
             undefined *param_9,undefined8 param_10,undefined1 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar3);
  func_0x00010c219b60(puVar2);
  func_0x00010c2025c0(puVar2);
  func_0x00010c2026e0(puVar2);
  puStack_88 = PTR_PTR_11270b190;
  puVar4 = &uStack_90;
  uStack_90 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_initWithContentView_whenKeyboard_1125de9a8,puVar1,param_11);
  if (puVar4 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112793f04;
    *(undefined1 *)((long)puVar4 + lVar6) = param_11;
    func_0x00010c189400(puVar4);
    lVar7 = (long)_DAT_112793f08;
    _objc_retain(puVar1);
    uVar8 = *(undefined8 *)((long)puVar4 + lVar7);
    *(undefined **)((long)puVar4 + lVar7) = puVar1;
    _objc_release(uVar8);
    lVar7 = (long)_DAT_112793f0c;
    _objc_retain(puVar2);
    uVar8 = *(undefined8 *)((long)puVar4 + lVar7);
    *(undefined **)((long)puVar4 + lVar7) = puVar2;
    _objc_release(uVar8);
    uVar8 = param_10;
    _objc_retainBlock();
    uVar9 = *(undefined8 *)((long)puVar4 + (long)_DAT_112793f10);
    *(undefined8 *)((long)puVar4 + (long)_DAT_112793f10) = uVar8;
    _objc_release(uVar9);
    if (*(char *)((long)puVar4 + lVar6) == '\x01') {
      func_0x00010c1931e0(puVar4);
    }
    puVar5 = puVar4;
    func_0x00010bf59680();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar4 + (long)_DAT_112793f14);
    *(undefined8 **)((long)puVar4 + (long)_DAT_112793f14) = puVar5;
    _objc_release(uVar8);
    func_0x00010bea3940(puVar4);
    lVar6 = *(long *)((long)puVar4 + (long)_DAT_112793f00);
    if (lVar6 == 0) {
      puVar5 = puVar4;
      func_0x00010c279540(puVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_5;
      func_0x00010c23ba60(0x403b000000000000,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      _objc_retain(lVar6);
    }
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    if (param_8 == (undefined *)0x0) {
      param_8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    }
    PTR__OBJC_CLASS___NSArray_1126ae530 = puVar3;
    if (param_9 == (undefined *)0x0) {
      _objc_opt_new(puVar3);
      param_9 = puVar3;
    }
    func_0x00010bea2020(puVar4);
    func_0x00010bea1900(puVar4);
    func_0x00010bea8720(puVar4);
    func_0x00010bea1880(puVar4);
    func_0x00010c18b5e0(puVar2);
    _objc_release(lVar6);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b7fb554; end: 10b7fb5df; -[SIGAlertDialog createTextBoundaryGradient] */

void FUN_10b7fb554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be244e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(puVar1,param_2,param_1);
  _objc_release(param_1);
  func_0x00010c209760(0x3fe0000000000000,0,puVar1);
  func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000,puVar1);
  func_0x00010c1a7f60(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7fb5e0; end: 10b7fb6b3; -[SIGAlertDialog _gradientLayerColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fb5e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + _DAT_112793f18),PTR_s_text_1126787e8);
  return;
}



/* Entry: 10b7fb6b4; end: 10b7fb6c3; -[SIGAlertDialog textEntered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fb6b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793f18),PTR_s_text_1126787e8);
  return;
}



/* Entry: 10b7fb6c4; end: 10b7fb6d3; -[SIGAlertDialog setTextEntered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fb6c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793f18),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 10b7fb6d4; end: 10b7fb7a3; -[SIGAlertDialog setSelectedTextRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fb6d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112793f18;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  uVar1 = uVar3;
  func_0x00010bf193c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1042e0(uVar3,param_2,uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c1042e0(uVar1,param_2,uVar3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c26c600(uVar2,param_2,uVar3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb600(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b7fb7a4; end: 10b7fb7b3; -[SIGAlertDialog isSecureTextEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7fb7a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793f18),PTR_s_isSecureTextEntry_1125fcf90);
  return;
}


