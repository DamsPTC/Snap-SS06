/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00636bf4; end: 00636bff; -[SCNNetworkTypesNetworkQueueState .cxx_destruct] */

void FUN_00636bf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00636c00; end: 00636e47; -[SCNNetworkTypesNetworkRequestSnapshot initWithNetworkKey:contentId:url:mediaContextTypeString:state:requestType:rankingSignals:rangeStart:rangeEnd:contentLength:queuedMs:executingMs:ttfbMs:bytesDownloaded:retryCount:errorCodes:] */

undefined8 *
FUN_00636c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
            undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_18);
  puStack_68 = PTR_PTR_00ac44b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_3;
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x00636f24(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x00636f24(uVar3);
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x00636f24(uVar3);
    puVar1[5] = param_7;
    puVar1[6] = param_8;
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    puVar1[10] = param_12;
    puVar1[0xb] = param_13;
    puVar1[0xc] = param_14;
    puVar1[0xd] = param_15;
    puVar1[0xe] = param_16;
    puVar1[0xf] = param_17;
    uVar2 = param_18;
    func_0x00780e20();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    func_0x00636f24(uVar3);
  }
  _objc_release(param_18);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 00636e48; end: 00636e4f; -[SCNNetworkTypesNetworkRequestSnapshot networkKey] */

undefined8 FUN_00636e48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00636e50; end: 00636e57; -[SCNNetworkTypesNetworkRequestSnapshot contentId] */

undefined8 FUN_00636e50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00636e58; end: 00636e5f; -[SCNNetworkTypesNetworkRequestSnapshot url] */

undefined8 FUN_00636e58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00636e60; end: 00636e67; -[SCNNetworkTypesNetworkRequestSnapshot mediaContextTypeString] */

undefined8 FUN_00636e60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00636e68; end: 00636e6f; -[SCNNetworkTypesNetworkRequestSnapshot state] */

undefined8 FUN_00636e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00636e70; end: 00636e77; -[SCNNetworkTypesNetworkRequestSnapshot requestType] */

undefined8 FUN_00636e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00636e78; end: 00636e7f; -[SCNNetworkTypesNetworkRequestSnapshot rankingSignals] */

undefined8 FUN_00636e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 00636e80; end: 00636e87; -[SCNNetworkTypesNetworkRequestSnapshot rangeStart] */

undefined8 FUN_00636e80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 00636e88; end: 00636e8f; -[SCNNetworkTypesNetworkRequestSnapshot rangeEnd] */

undefined8 FUN_00636e88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 00636e90; end: 00636e97; -[SCNNetworkTypesNetworkRequestSnapshot contentLength] */

undefined8 FUN_00636e90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 00636e98; end: 00636e9f; -[SCNNetworkTypesNetworkRequestSnapshot queuedMs] */

undefined8 FUN_00636e98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 00636ea0; end: 00636ea7; -[SCNNetworkTypesNetworkRequestSnapshot executingMs] */

undefined8 FUN_00636ea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 00636ea8; end: 00636eaf; -[SCNNetworkTypesNetworkRequestSnapshot ttfbMs] */

undefined8 FUN_00636ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 00636eb0; end: 00636eb7; -[SCNNetworkTypesNetworkRequestSnapshot bytesDownloaded] */

undefined8 FUN_00636eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 00636eb8; end: 00636ebf; -[SCNNetworkTypesNetworkRequestSnapshot retryCount] */

undefined8 FUN_00636eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 00636ec0; end: 00636ec7; -[SCNNetworkTypesNetworkRequestSnapshot errorCodes] */

undefined8 FUN_00636ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 00636ec8; end: 00636f1b; -[SCNNetworkTypesNetworkRequestSnapshot .cxx_destruct] */

void FUN_00636ec8(long param_1)

{
  FUN_00636f1c(param_1 + 0x80);
  FUN_00636f1c(param_1 + 0x48);
  FUN_00636f1c(param_1 + 0x40);
  FUN_00636f1c(param_1 + 0x38);
  FUN_00636f1c(param_1 + 0x20);
  FUN_00636f1c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00636f1c; end: 00636f2b;  */

void FUN_00636f1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1,0);
  return;
}



/* Entry: 00636f2c; end: 00636f5f; -[SCNNetworkTypesNnmInternalErrorCode init] */

void FUN_00636f2c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac44c0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00636f60; end: 00636fd7; -[SCNNetworkTypesRequestContextUpdate initWithUpdateIndex:updateTimeMillis:updatedPriority:updatedImportance:updatedTrigger:updatedPageId:] */

void FUN_00636f60(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_00ac44c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  return;
}



/* Entry: 00636fd8; end: 00636fdf; -[SCNNetworkTypesRequestContextUpdate updateIndex] */

undefined4 FUN_00636fd8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 00636fe0; end: 00636fe7; -[SCNNetworkTypesRequestContextUpdate updateTimeMillis] */

undefined8 FUN_00636fe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00636fe8; end: 00636fef; -[SCNNetworkTypesRequestContextUpdate updatedPriority] */

undefined8 FUN_00636fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00636ff0; end: 00636ff7; -[SCNNetworkTypesRequestContextUpdate updatedImportance] */

undefined8 FUN_00636ff0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00636ff8; end: 00636fff; -[SCNNetworkTypesRequestContextUpdate updatedTrigger] */

undefined8 FUN_00636ff8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00637000; end: 00637007; -[SCNNetworkTypesRequestContextUpdate updatedPageId] */

undefined8 FUN_00637000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00637008; end: 0063712f; -[SCNNetworkTypesRequestResponseInfo initWithRequestInfo:responseInfo:debugInfo:failoverAdvice:] */

undefined1 *
FUN_00637008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_00ac44d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
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



/* Entry: 00637130; end: 00637137; -[SCNNetworkTypesRequestResponseInfo requestInfo] */

undefined8 FUN_00637130(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00637138; end: 0063713f; -[SCNNetworkTypesRequestResponseInfo responseInfo] */

undefined8 FUN_00637138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00637140; end: 00637147; -[SCNNetworkTypesRequestResponseInfo debugInfo] */

undefined8 FUN_00637140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00637148; end: 0063714f; -[SCNNetworkTypesRequestResponseInfo failoverAdvice] */

undefined8 FUN_00637148(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00637150; end: 0063718b; -[SCNNetworkTypesRequestResponseInfo .cxx_destruct] */

void FUN_00637150(long param_1)

{
  FUN_0063718c(param_1 + 0x20);
  FUN_0063718c(param_1 + 0x18);
  FUN_0063718c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0063718c; end: 00637193;  */

void FUN_0063718c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1,0);
  return;
}



/* Entry: 00637194; end: 00637267; -[SCNNetworkTypesRetryConfig initWithRetryQuota:retryAttempt:retryPolicy:retryIntervalInMillis:retryableResponseStatusCode:retryTtlMs:] */

undefined1 *
FUN_00637194(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_00ac44d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    uVar2 = param_7;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 00637268; end: 0063726f; -[SCNNetworkTypesRetryConfig retryQuota] */

undefined4 FUN_00637268(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 00637270; end: 00637277; -[SCNNetworkTypesRetryConfig retryAttempt] */

undefined4 FUN_00637270(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 00637278; end: 0063727f; -[SCNNetworkTypesRetryConfig retryPolicy] */

undefined8 FUN_00637278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00637280; end: 00637287; -[SCNNetworkTypesRetryConfig retryIntervalInMillis] */

undefined8 FUN_00637280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00637288; end: 0063728f; -[SCNNetworkTypesRetryConfig retryableResponseStatusCode] */

undefined8 FUN_00637288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00637290; end: 00637297; -[SCNNetworkTypesRetryConfig retryTtlMs] */

undefined8 FUN_00637290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00637298; end: 006372a3; -[SCNNetworkTypesRetryConfig .cxx_destruct] */

void FUN_00637298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x20,0);
  return;
}



/* Entry: 006372a4; end: 006372ef; -[SCNNetworkTypesThrottlingRule initWithMaxDownloadActiveMediaType:maxDownloadOffScreenPrefetch:] */

void FUN_006372a4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac44e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  }
  return;
}



/* Entry: 006372f0; end: 006372f7; -[SCNNetworkTypesThrottlingRule maxDownloadActiveMediaType] */

undefined4 FUN_006372f0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 006372f8; end: 006372ff; -[SCNNetworkTypesThrottlingRule maxDownloadOffScreenPrefetch] */

undefined4 FUN_006372f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 00637300; end: 00637387; -[SCNNetworkTypesTweaks initWithThrottleMode:] */

undefined1 * FUN_00637300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac44e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00637388; end: 0063738f; -[SCNNetworkTypesTweaks throttleMode] */

undefined8 FUN_00637388(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00637390; end: 0063739b; -[SCNNetworkTypesTweaks .cxx_destruct] */

void FUN_00637390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0063739c; end: 00637447; -[SCNNetworkTypesUrlRequestInfo initWithExecutionStartDateNanos:executionEndDateNanos:redirectDateNanos:cronetMetrics:] */

undefined1 *
FUN_0063739c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_00ac44f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 00637448; end: 0063744f; -[SCNNetworkTypesUrlRequestInfo executionStartDateNanos] */

undefined8 FUN_00637448(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00637450; end: 00637457; -[SCNNetworkTypesUrlRequestInfo executionEndDateNanos] */

undefined8 FUN_00637450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00637458; end: 0063745f; -[SCNNetworkTypesUrlRequestInfo redirectDateNanos] */

undefined8 FUN_00637458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00637460; end: 00637467; -[SCNNetworkTypesUrlRequestInfo cronetMetrics] */

undefined8 FUN_00637460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00637468; end: 00637473; -[SCNNetworkTypesUrlRequestInfo .cxx_destruct] */

void FUN_00637468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x20,0);
  return;
}



/* Entry: 00637474; end: 00637643; -[SCNNetworkTypesUrlResponseInfo initWithUrl:urlChain:httpStatusCode:httpStatusText:allHeadersList:wasCached:negotiatedProtocol:proxyServer:receivedByteCount:decompressedReceivedPayloadByteCount:] */

undefined1 *
FUN_00637474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_00ac44f8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_006376e0(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_006376e0(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_006376e0(uVar3);
    uVar2 = param_7;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    FUN_006376e0(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    uVar2 = param_9;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    FUN_006376e0(uVar3);
    uVar2 = param_10;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    FUN_006376e0(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
    *(undefined8 *)((long)puVar1 + 0x48) = param_12;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00637644; end: 0063764b; -[SCNNetworkTypesUrlResponseInfo url] */

undefined8 FUN_00637644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0063764c; end: 00637653; -[SCNNetworkTypesUrlResponseInfo urlChain] */

undefined8 FUN_0063764c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00637654; end: 0063765b; -[SCNNetworkTypesUrlResponseInfo httpStatusCode] */

undefined4 FUN_00637654(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 0063765c; end: 00637663; -[SCNNetworkTypesUrlResponseInfo httpStatusText] */

undefined8 FUN_0063765c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00637664; end: 0063766b; -[SCNNetworkTypesUrlResponseInfo allHeadersList] */

undefined8 FUN_00637664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0063766c; end: 00637673; -[SCNNetworkTypesUrlResponseInfo wasCached] */

undefined1 FUN_0063766c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 00637674; end: 0063767b; -[SCNNetworkTypesUrlResponseInfo negotiatedProtocol] */

undefined8 FUN_00637674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 0063767c; end: 00637683; -[SCNNetworkTypesUrlResponseInfo proxyServer] */

undefined8 FUN_0063767c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 00637684; end: 0063768b; -[SCNNetworkTypesUrlResponseInfo receivedByteCount] */

undefined8 FUN_00637684(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 0063768c; end: 00637693; -[SCNNetworkTypesUrlResponseInfo decompressedReceivedPayloadByteCount] */

undefined8 FUN_0063768c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 00637694; end: 006376df; -[SCNNetworkTypesUrlResponseInfo .cxx_destruct] */

void FUN_00637694(long param_1)

{
  func_0x006376e8(param_1 + 0x38);
  func_0x006376e8(param_1 + 0x30);
  func_0x006376e8(param_1 + 0x28);
  func_0x006376e8(param_1 + 0x20);
  func_0x006376e8(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 006376e0; end: 006376ef;  */

void FUN_006376e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 006376f0; end: 0063773b; -[SCNMdpCommonContentDistance initWithStoryOffset:snapOffset:] */

void FUN_006376f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac4500;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  }
  return;
}



/* Entry: 0063773c; end: 0063775f; -[SCNMdpCommonContentDistance copyWithZone:] */

undefined8 FUN_0063773c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 00637760; end: 00637767; -[SCNMdpCommonContentDistance storyOffset] */

undefined4 FUN_00637760(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 00637768; end: 0063776f; -[SCNMdpCommonContentDistance snapOffset] */

undefined4 FUN_00637768(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 00637770; end: 006377b7; -[SCNMdpCommonDeprecatedRankingSignal initWithWifiOnly:] */

void FUN_00637770(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac4508;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 006377b8; end: 006377db; -[SCNMdpCommonDeprecatedRankingSignal copyWithZone:] */

undefined8 FUN_006377b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 006377dc; end: 006377e3; -[SCNMdpCommonDeprecatedRankingSignal wifiOnly] */

undefined1 FUN_006377dc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 006377e4; end: 0063788f; -[SCNMdpCommonFailoverAdvice initWithFallbackUrls:reason:] */

undefined1 *
FUN_006377e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4510;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00637890; end: 00637897; -[SCNMdpCommonFailoverAdvice fallbackUrls] */

undefined8 FUN_00637890(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00637898; end: 0063789f; -[SCNMdpCommonFailoverAdvice reason] */

undefined8 FUN_00637898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 006378a0; end: 006378ab; -[SCNMdpCommonFailoverAdvice .cxx_destruct] */

void FUN_006378a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 006378ac; end: 0063796f; -[SCNMdpCommonRankingSignals initWithMediaContextType:deprecatedRankingSignal:fetchPriority:importance:pageId:trigger:] */

undefined1 *
FUN_006378ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_00ac4518;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined4 *)((long)puVar1 + 8) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 00637970; end: 00637993; -[SCNMdpCommonRankingSignals copyWithZone:] */

undefined8 FUN_00637970(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 00637994; end: 0063799b; -[SCNMdpCommonRankingSignals mediaContextType] */

undefined8 FUN_00637994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0063799c; end: 006379a3; -[SCNMdpCommonRankingSignals deprecatedRankingSignal] */

undefined8 FUN_0063799c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 006379a4; end: 006379ab; -[SCNMdpCommonRankingSignals fetchPriority] */

undefined8 FUN_006379a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 006379ac; end: 006379b3; -[SCNMdpCommonRankingSignals importance] */

undefined8 FUN_006379ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 006379b4; end: 006379bb; -[SCNMdpCommonRankingSignals pageId] */

undefined4 FUN_006379b4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 006379bc; end: 006379c3; -[SCNMdpCommonRankingSignals trigger] */

undefined8 FUN_006379bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 006379c4; end: 006379cf; -[SCNMdpCommonRankingSignals .cxx_destruct] */

void FUN_006379c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x18,0);
  return;
}



/* Entry: 006379d0; end: 00637b13; -[SCNMdpCommonRequestContext initWithRankingSignals:uiPageInfo:trackingId:switchBoardKey:] */

undefined1 *
FUN_006379d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_00ac4520;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00637b14; end: 00637b37; -[SCNMdpCommonRequestContext copyWithZone:] */

undefined8 FUN_00637b14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 00637b38; end: 00637b3f; -[SCNMdpCommonRequestContext rankingSignals] */

undefined8 FUN_00637b38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00637b40; end: 00637b47; -[SCNMdpCommonRequestContext uiPageInfo] */

undefined8 FUN_00637b40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00637b48; end: 00637b4f; -[SCNMdpCommonRequestContext trackingId] */

undefined8 FUN_00637b48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00637b50; end: 00637b57; -[SCNMdpCommonRequestContext switchBoardKey] */

undefined8 FUN_00637b50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00637b58; end: 00637b93; -[SCNMdpCommonRequestContext .cxx_destruct] */

void FUN_00637b58(long param_1)

{
  FUN_00637b94(param_1 + 0x20);
  FUN_00637b94(param_1 + 0x18);
  FUN_00637b94(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00637b94; end: 00637b9b;  */

void FUN_00637b94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1,0);
  return;
}



/* Entry: 00637b9c; end: 00637c3f; -[SCNMdpCommonRequestKey initWithKey:] */

undefined1 * FUN_00637b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4528;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00637c40; end: 00637c47; -[SCNMdpCommonRequestKey key] */

undefined8 FUN_00637c40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00637c48; end: 00637c53; -[SCNMdpCommonRequestKey .cxx_destruct] */

void FUN_00637c48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00637c54; end: 00637cf7; -[SCNMdpCommonUIPageInfo initWithPageHierarchy:] */

undefined1 * FUN_00637c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4530;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


