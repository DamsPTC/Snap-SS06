/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00635c64; end: 00635c6b; -[SCNNetworkTypesCompressionConfig minRequestBodySize] */

undefined4 FUN_00635c64(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 00635c6c; end: 00635ddf; -[SCNNetworkTypesCronetConfig initWithCronetExperimentalOptions:certPins:storagePath:cacheSizeBytes:httpCacheEnabled:disableSslCertValidationForTesting:enableNQE:threadPriority:] */

undefined1 *
FUN_00635c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
            undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_00ac4450;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined1 *)((long)puVar1 + 10) = param_9;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00635de0; end: 00635de7; -[SCNNetworkTypesCronetConfig cronetExperimentalOptions] */

undefined8 FUN_00635de0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00635de8; end: 00635def; -[SCNNetworkTypesCronetConfig certPins] */

undefined8 FUN_00635de8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00635df0; end: 00635df7; -[SCNNetworkTypesCronetConfig storagePath] */

undefined8 FUN_00635df0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00635df8; end: 00635dff; -[SCNNetworkTypesCronetConfig cacheSizeBytes] */

undefined8 FUN_00635df8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00635e00; end: 00635e07; -[SCNNetworkTypesCronetConfig httpCacheEnabled] */

undefined1 FUN_00635e00(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 00635e08; end: 00635e0f; -[SCNNetworkTypesCronetConfig disableSslCertValidationForTesting] */

undefined1 FUN_00635e08(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 00635e10; end: 00635e17; -[SCNNetworkTypesCronetConfig enableNQE] */

undefined1 FUN_00635e10(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 00635e18; end: 00635e1f; -[SCNNetworkTypesCronetConfig threadPriority] */

undefined8 FUN_00635e18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00635e20; end: 00635e5b; -[SCNNetworkTypesCronetConfig .cxx_destruct] */

void FUN_00635e20(long param_1)

{
  FUN_00635e5c(param_1 + 0x30);
  FUN_00635e5c(param_1 + 0x20);
  FUN_00635e5c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00635e5c; end: 00635e63;  */

void FUN_00635e5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1,0);
  return;
}



/* Entry: 00635e64; end: 00635f73; -[SCNNetworkTypesCronetMetrics initWithRequestStart:dnsStart:dnsEnd:connectStart:connectEnd:sslStart:sslEnd:sendingStart:sendingEnd:pushStart:pushEnd:responseStart:requestEnd:socketReused:sentByteCount:receivedByteCount:serverAddress:] */

undefined1 *
FUN_00635e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
            undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_20);
  puStack_68 = PTR_PTR_00ac4458;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
    *(undefined8 *)((long)puVar1 + 0x58) = param_12;
    *(undefined8 *)((long)puVar1 + 0x60) = param_13;
    *(undefined8 *)((long)puVar1 + 0x68) = param_14;
    *(undefined1 *)((long)puVar1 + 8) = param_16;
    *(undefined8 *)((long)puVar1 + 0x70) = param_15;
    *(undefined8 *)((long)puVar1 + 0x78) = param_18;
    *(undefined8 *)((long)puVar1 + 0x80) = param_19;
    uVar2 = param_20;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_20);
  return (undefined1 *)puVar1;
}



/* Entry: 00635f74; end: 00635f7b; -[SCNNetworkTypesCronetMetrics requestStart] */

undefined8 FUN_00635f74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00635f7c; end: 00635f83; -[SCNNetworkTypesCronetMetrics dnsStart] */

undefined8 FUN_00635f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00635f84; end: 00635f8b; -[SCNNetworkTypesCronetMetrics dnsEnd] */

undefined8 FUN_00635f84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00635f8c; end: 00635f93; -[SCNNetworkTypesCronetMetrics connectStart] */

undefined8 FUN_00635f8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00635f94; end: 00635f9b; -[SCNNetworkTypesCronetMetrics connectEnd] */

undefined8 FUN_00635f94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00635f9c; end: 00635fa3; -[SCNNetworkTypesCronetMetrics sslStart] */

undefined8 FUN_00635f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 00635fa4; end: 00635fab; -[SCNNetworkTypesCronetMetrics sslEnd] */

undefined8 FUN_00635fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 00635fac; end: 00635fb3; -[SCNNetworkTypesCronetMetrics sendingStart] */

undefined8 FUN_00635fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 00635fb4; end: 00635fbb; -[SCNNetworkTypesCronetMetrics sendingEnd] */

undefined8 FUN_00635fb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 00635fbc; end: 00635fc3; -[SCNNetworkTypesCronetMetrics pushStart] */

undefined8 FUN_00635fbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 00635fc4; end: 00635fcb; -[SCNNetworkTypesCronetMetrics pushEnd] */

undefined8 FUN_00635fc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 00635fcc; end: 00635fd3; -[SCNNetworkTypesCronetMetrics responseStart] */

undefined8 FUN_00635fcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 00635fd4; end: 00635fdb; -[SCNNetworkTypesCronetMetrics requestEnd] */

undefined8 FUN_00635fd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 00635fdc; end: 00635fe3; -[SCNNetworkTypesCronetMetrics socketReused] */

undefined1 FUN_00635fdc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 00635fe4; end: 00635feb; -[SCNNetworkTypesCronetMetrics sentByteCount] */

undefined8 FUN_00635fe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 00635fec; end: 00635ff3; -[SCNNetworkTypesCronetMetrics receivedByteCount] */

undefined8 FUN_00635fec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 00635ff4; end: 00635ffb; -[SCNNetworkTypesCronetMetrics serverAddress] */

undefined8 FUN_00635ff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 00635ffc; end: 00636007; -[SCNNetworkTypesCronetMetrics .cxx_destruct] */

void FUN_00635ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x88,0);
  return;
}



/* Entry: 00636008; end: 00636117; -[SCNNetworkTypesDebugInfo initWithEstimatedRTTInMs:longestCronetCallbackIntervalInMs:calculatedDyanmicTiemoutInMs:networkQuality:contextUpdateLifecycle:latencyEstimation:isThrottled:] */

undefined1 *
FUN_00636008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
            undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_00ac4460;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined4 *)((long)puVar1 + 0xc) = param_6;
    uVar2 = param_7;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 00636118; end: 0063611f; -[SCNNetworkTypesDebugInfo estimatedRTTInMs] */

undefined8 FUN_00636118(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00636120; end: 00636127; -[SCNNetworkTypesDebugInfo longestCronetCallbackIntervalInMs] */

undefined8 FUN_00636120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00636128; end: 0063612f; -[SCNNetworkTypesDebugInfo calculatedDyanmicTiemoutInMs] */

undefined8 FUN_00636128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00636130; end: 00636137; -[SCNNetworkTypesDebugInfo networkQuality] */

undefined4 FUN_00636130(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 00636138; end: 0063613f; -[SCNNetworkTypesDebugInfo contextUpdateLifecycle] */

undefined8 FUN_00636138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00636140; end: 00636147; -[SCNNetworkTypesDebugInfo latencyEstimation] */

undefined8 FUN_00636140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00636148; end: 0063614f; -[SCNNetworkTypesDebugInfo isThrottled] */

undefined1 FUN_00636148(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 00636150; end: 0063617f; -[SCNNetworkTypesDebugInfo .cxx_destruct] */

void FUN_00636150(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x28,0);
  return;
}



/* Entry: 00636180; end: 006361cf; -[SCNNetworkTypesDeprecatedHttpRequestInfo initWithShouldGzipRequest:requestType:] */

void FUN_00636180(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac4468;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 006361d0; end: 006361d7; -[SCNNetworkTypesDeprecatedHttpRequestInfo shouldGzipRequest] */

undefined1 FUN_006361d0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 006361d8; end: 006361df; -[SCNNetworkTypesDeprecatedHttpRequestInfo requestType] */

undefined8 FUN_006361d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 006361e0; end: 006362af; -[SCNNetworkTypesError initWithErrorCode:message:internalErrorCode:immediatelyRetryable:quicDetailedErrorCode:] */

undefined1 *
FUN_006361e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_00ac4470;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_3;
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined4 *)((long)puVar1 + 0x10) = param_5;
    *(undefined4 *)((long)puVar1 + 0x14) = param_7;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 006362b0; end: 006362b7; -[SCNNetworkTypesError errorCode] */

undefined4 FUN_006362b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 006362b8; end: 006362bf; -[SCNNetworkTypesError message] */

undefined8 FUN_006362b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 006362c0; end: 006362c7; -[SCNNetworkTypesError internalErrorCode] */

undefined4 FUN_006362c0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 006362c8; end: 006362cf; -[SCNNetworkTypesError immediatelyRetryable] */

undefined1 FUN_006362c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 006362d0; end: 006362d7; -[SCNNetworkTypesError quicDetailedErrorCode] */

undefined4 FUN_006362d0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 006362d8; end: 006362e3; -[SCNNetworkTypesError .cxx_destruct] */

void FUN_006362d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x18,0);
  return;
}



/* Entry: 006362e4; end: 006363bf; -[SCNNetworkTypesHeader initWithKey:value:] */

undefined1 *
FUN_006362e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4478;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 006363c0; end: 006363c7; -[SCNNetworkTypesHeader key] */

undefined8 FUN_006363c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 006363c8; end: 006363cf; -[SCNNetworkTypesHeader value] */

undefined8 FUN_006363c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 006363d0; end: 006363ff; -[SCNNetworkTypesHeader .cxx_destruct] */

void FUN_006363d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00636400; end: 006364ab; -[SCNNetworkTypesHttpParams initWithHeaders:method:] */

undefined1 *
FUN_00636400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4480;
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



/* Entry: 006364ac; end: 006364b3; -[SCNNetworkTypesHttpParams headers] */

undefined8 FUN_006364ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 006364b4; end: 006364bb; -[SCNNetworkTypesHttpParams method] */

undefined8 FUN_006364b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 006364bc; end: 006364c7; -[SCNNetworkTypesHttpParams .cxx_destruct] */

void FUN_006364bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 006364c8; end: 0063662b; -[SCNNetworkTypesHttpRequest initWithKey:url:httpParams:usesDeprecatedHttpRequestInfo:deprecatedHttpRequestInfo:inAppSessionRequest:fallbackUrlProvider:] */

undefined1 *
FUN_006364c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
            undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_00ac4488;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0063662c; end: 00636633; -[SCNNetworkTypesHttpRequest key] */

undefined8 FUN_0063662c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00636634; end: 0063663b; -[SCNNetworkTypesHttpRequest url] */

undefined8 FUN_00636634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0063663c; end: 00636643; -[SCNNetworkTypesHttpRequest httpParams] */

undefined8 FUN_0063663c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00636644; end: 0063664b; -[SCNNetworkTypesHttpRequest usesDeprecatedHttpRequestInfo] */

undefined1 FUN_00636644(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 0063664c; end: 00636653; -[SCNNetworkTypesHttpRequest deprecatedHttpRequestInfo] */

undefined8 FUN_0063664c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00636654; end: 0063665b; -[SCNNetworkTypesHttpRequest inAppSessionRequest] */

undefined1 FUN_00636654(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 0063665c; end: 00636663; -[SCNNetworkTypesHttpRequest fallbackUrlProvider] */

undefined8 FUN_0063665c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00636664; end: 0063669f; -[SCNNetworkTypesHttpRequest .cxx_destruct] */

void FUN_00636664(long param_1)

{
  FUN_006366a0(param_1 + 0x30);
  FUN_006366a0(param_1 + 0x28);
  FUN_006366a0(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x18,0);
  return;
}



/* Entry: 006366a0; end: 006366a7;  */

void FUN_006366a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1,0);
  return;
}



/* Entry: 006366a8; end: 00636727; -[SCNNetworkTypesLatencyEstimation initWithFormulaVersion:latencyPrediction:rtt:throughput:throughputConfidenceScore:estimatedContentLength:] */

void FUN_006366a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac4490;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  return;
}



/* Entry: 00636728; end: 0063672f; -[SCNNetworkTypesLatencyEstimation formulaVersion] */

undefined8 FUN_00636728(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00636730; end: 00636737; -[SCNNetworkTypesLatencyEstimation latencyPrediction] */

undefined8 FUN_00636730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00636738; end: 0063673f; -[SCNNetworkTypesLatencyEstimation rtt] */

undefined8 FUN_00636738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00636740; end: 00636747; -[SCNNetworkTypesLatencyEstimation throughput] */

undefined8 FUN_00636740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00636748; end: 0063674f; -[SCNNetworkTypesLatencyEstimation throughputConfidenceScore] */

undefined8 FUN_00636748(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00636750; end: 00636757; -[SCNNetworkTypesLatencyEstimation estimatedContentLength] */

undefined8 FUN_00636750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00636758; end: 006368ef; -[SCNNetworkTypesNetworkApiConfig initWithLoggingDir:timeoutInterval:bufferSizeBytes:priorityBasedSchedulerCriticalMode:concurrentFileReadAbEnabled:useNativeRetry:retryConfiguration:networkQualityEstimatorConfig:cronetConfig:tweaks:] */

undefined8 *
FUN_00636758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_00ac4498;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    *(undefined1 *)(puVar1 + 1) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 006368f0; end: 006368f7; -[SCNNetworkTypesNetworkApiConfig loggingDir] */

undefined8 FUN_006368f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 006368f8; end: 006368ff; -[SCNNetworkTypesNetworkApiConfig timeoutInterval] */

undefined8 FUN_006368f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00636900; end: 00636907; -[SCNNetworkTypesNetworkApiConfig bufferSizeBytes] */

undefined8 FUN_00636900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00636908; end: 0063690f; -[SCNNetworkTypesNetworkApiConfig priorityBasedSchedulerCriticalMode] */

undefined1 FUN_00636908(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 00636910; end: 00636917; -[SCNNetworkTypesNetworkApiConfig concurrentFileReadAbEnabled] */

undefined1 FUN_00636910(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 00636918; end: 0063691f; -[SCNNetworkTypesNetworkApiConfig useNativeRetry] */

undefined1 FUN_00636918(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 00636920; end: 00636927; -[SCNNetworkTypesNetworkApiConfig retryConfiguration] */

undefined8 FUN_00636920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00636928; end: 0063692f; -[SCNNetworkTypesNetworkApiConfig networkQualityEstimatorConfig] */

undefined8 FUN_00636928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00636930; end: 00636937; -[SCNNetworkTypesNetworkApiConfig cronetConfig] */

undefined8 FUN_00636930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 00636938; end: 0063693f; -[SCNNetworkTypesNetworkApiConfig tweaks] */

undefined8 FUN_00636938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 00636940; end: 00636983; -[SCNNetworkTypesNetworkApiConfig .cxx_destruct] */

void FUN_00636940(long param_1)

{
  FUN_00636984(param_1 + 0x40);
  FUN_00636984(param_1 + 0x38);
  FUN_00636984(param_1 + 0x30);
  FUN_00636984(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00636984; end: 0063698b;  */

void FUN_00636984(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1,0);
  return;
}



/* Entry: 0063698c; end: 00636a97; -[SCNNetworkTypesNetworkApiRetryConfiguration initWithErrorsWorthRetry:defaultRetryConfigMap:shouldResumeProgressiveRequests:shouldResumeNonProgressiveRequests:retryAWS500ErrorOnly:retry5xxErrors:] */

undefined1 *
FUN_0063698c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_00ac44a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00636a98; end: 00636a9f; -[SCNNetworkTypesNetworkApiRetryConfiguration errorsWorthRetry] */

undefined8 FUN_00636a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00636aa0; end: 00636aa7; -[SCNNetworkTypesNetworkApiRetryConfiguration defaultRetryConfigMap] */

undefined8 FUN_00636aa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00636aa8; end: 00636aaf; -[SCNNetworkTypesNetworkApiRetryConfiguration shouldResumeProgressiveRequests] */

undefined1 FUN_00636aa8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 00636ab0; end: 00636ab7; -[SCNNetworkTypesNetworkApiRetryConfiguration shouldResumeNonProgressiveRequests] */

undefined1 FUN_00636ab0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 00636ab8; end: 00636abf; -[SCNNetworkTypesNetworkApiRetryConfiguration retryAWS500ErrorOnly] */

undefined1 FUN_00636ab8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 00636ac0; end: 00636ac7; -[SCNNetworkTypesNetworkApiRetryConfiguration retry5xxErrors] */

undefined1 FUN_00636ac0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 00636ac8; end: 00636af7; -[SCNNetworkTypesNetworkApiRetryConfiguration .cxx_destruct] */

void FUN_00636ac8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00636af8; end: 00636b3f; -[SCNNetworkTypesNetworkQualityEstimatorConfig initWithObservationSize:] */

void FUN_00636af8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac44a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 00636b40; end: 00636b47; -[SCNNetworkTypesNetworkQualityEstimatorConfig observationSize] */

undefined4 FUN_00636b40(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 00636b48; end: 00636beb; -[SCNNetworkTypesNetworkQueueState initWithRequestQueueSnapshot:] */

undefined1 * FUN_00636b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac44b0;
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



/* Entry: 00636bec; end: 00636bf3; -[SCNNetworkTypesNetworkQueueState requestQueueSnapshot] */

undefined8 FUN_00636bec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


