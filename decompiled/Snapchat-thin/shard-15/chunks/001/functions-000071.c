/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7f8400; end: 10b7f8407; -[SCNGrpcStreamingMetricsInfo msgSent] */

undefined8 FUN_10b7f8400(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b7f8408; end: 10b7f840f; -[SCNGrpcStreamingMetricsInfo msgSentError] */

undefined8 FUN_10b7f8408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b7f8410; end: 10b7f8417; -[SCNGrpcStreamingMetricsInfo msgReceived] */

undefined8 FUN_10b7f8410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b7f8418; end: 10b7f841f; -[SCNGrpcStreamingMetricsInfo sessionTime] */

undefined8 FUN_10b7f8418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b7f8420; end: 10b7f8427; -[SCNGrpcStreamingMetricsInfo success] */

undefined1 FUN_10b7f8420(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7f8428; end: 10b7f842f; -[SCNGrpcStreamingMetricsInfo statusCode] */

undefined4 FUN_10b7f8428(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b7f8430; end: 10b7f8437; -[SCNGrpcStreamingMetricsInfo requestId] */

undefined8 FUN_10b7f8430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b7f8438; end: 10b7f843f; -[SCNGrpcStreamingMetricsInfo taskId] */

undefined8 FUN_10b7f8438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b7f8440; end: 10b7f8447; -[SCNGrpcStreamingMetricsInfo consistentIdTracking] */

undefined8 FUN_10b7f8440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b7f8448; end: 10b7f844f; -[SCNGrpcStreamingMetricsInfo authSuccess] */

undefined8 FUN_10b7f8448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b7f8450; end: 10b7f8457; -[SCNGrpcStreamingMetricsInfo authLatency] */

undefined8 FUN_10b7f8450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b7f8458; end: 10b7f845f; -[SCNGrpcStreamingMetricsInfo argosSuccess] */

undefined8 FUN_10b7f8458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b7f8460; end: 10b7f8467; -[SCNGrpcStreamingMetricsInfo argosLatency] */

undefined8 FUN_10b7f8460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b7f8468; end: 10b7f846f; -[SCNGrpcStreamingMetricsInfo feature] */

undefined8 FUN_10b7f8468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b7f8470; end: 10b7f8477; -[SCNGrpcStreamingMetricsInfo serverLatency] */

undefined8 FUN_10b7f8470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b7f8478; end: 10b7f847f; -[SCNGrpcStreamingMetricsInfo argosType] */

undefined8 FUN_10b7f8478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b7f8480; end: 10b7f8487; -[SCNGrpcStreamingMetricsInfo networkTTFB] */

undefined8 FUN_10b7f8480(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b7f8488; end: 10b7f84db; -[SCNGrpcStreamingMetricsInfo .cxx_destruct] */

void FUN_10b7f8488(long param_1)

{
  FUN_10b7f84dc(param_1 + 0x88);
  FUN_10b7f84dc(param_1 + 0x78);
  FUN_10b7f84dc(param_1 + 0x68);
  FUN_10b7f84dc(param_1 + 0x60);
  FUN_10b7f84dc(param_1 + 0x58);
  FUN_10b7f84dc(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7f84dc; end: 10b7f84eb;  */

void FUN_10b7f84dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10b7f84ec; end: 10b7f84f3; -[SCNGrpcUnaryMetricsInfo rpcInfo] */

undefined8 FUN_10b7f84ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f84f4; end: 10b7f84fb; -[SCNGrpcUnaryMetricsInfo connectionTime] */

undefined8 FUN_10b7f84f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f84fc; end: 10b7f8503; -[SCNGrpcUnaryMetricsInfo networkTTFB] */

undefined8 FUN_10b7f84fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f8504; end: 10b7f850b; -[SCNGrpcUnaryMetricsInfo responseTime] */

undefined8 FUN_10b7f8504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7f850c; end: 10b7f8513; -[SCNGrpcUnaryMetricsInfo requestSize] */

undefined8 FUN_10b7f850c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b7f8514; end: 10b7f851b; -[SCNGrpcUnaryMetricsInfo responseSize] */

undefined8 FUN_10b7f8514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b7f851c; end: 10b7f8523; -[SCNGrpcUnaryMetricsInfo responseContentType] */

undefined8 FUN_10b7f851c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b7f8524; end: 10b7f852b; -[SCNGrpcUnaryMetricsInfo responseContentEncoding] */

undefined8 FUN_10b7f8524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b7f852c; end: 10b7f8533; -[SCNGrpcUnaryMetricsInfo success] */

undefined1 FUN_10b7f852c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7f8534; end: 10b7f853b; -[SCNGrpcUnaryMetricsInfo statusCode] */

undefined4 FUN_10b7f8534(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b7f853c; end: 10b7f8543; -[SCNGrpcUnaryMetricsInfo taskId] */

undefined8 FUN_10b7f853c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b7f8544; end: 10b7f854b; -[SCNGrpcUnaryMetricsInfo requestId] */

undefined8 FUN_10b7f8544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b7f854c; end: 10b7f8553; -[SCNGrpcUnaryMetricsInfo consistentIdTracking] */

undefined8 FUN_10b7f854c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b7f8554; end: 10b7f855b; -[SCNGrpcUnaryMetricsInfo authSuccess] */

undefined8 FUN_10b7f8554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b7f855c; end: 10b7f8563; -[SCNGrpcUnaryMetricsInfo authLatency] */

undefined8 FUN_10b7f855c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b7f8564; end: 10b7f856b; -[SCNGrpcUnaryMetricsInfo argosSuccess] */

undefined8 FUN_10b7f8564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b7f856c; end: 10b7f8573; -[SCNGrpcUnaryMetricsInfo argosLatency] */

undefined8 FUN_10b7f856c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b7f8574; end: 10b7f857b; -[SCNGrpcUnaryMetricsInfo serverLatency] */

undefined8 FUN_10b7f8574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b7f857c; end: 10b7f8583; -[SCNGrpcUnaryMetricsInfo argosType] */

undefined8 FUN_10b7f857c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b7f8584; end: 10b7f8643; -[SCNMdpSignalCenterContentResolutionAnalyticsInfo initWithVariantSelectionInfo:playerInfo:] */

undefined1 *
FUN_10b7f8584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b0e0;
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



/* Entry: 10b7f8644; end: 10b7f864b; -[SCNMdpSignalCenterContentResolutionAnalyticsInfo variantSelectionInfo] */

undefined8 FUN_10b7f8644(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f864c; end: 10b7f8653; -[SCNMdpSignalCenterContentResolutionAnalyticsInfo playerInfo] */

undefined8 FUN_10b7f864c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f8654; end: 10b7f8683; -[SCNMdpSignalCenterContentResolutionAnalyticsInfo .cxx_destruct] */

void FUN_10b7f8654(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f8684; end: 10b7f8787; -[SCNMdpSignalCenterPlayerInfo initWithMediaPositionMs:bufferedDurationMs:stallCount:totalStallDurationMs:droppedFramesCount:] */

undefined1 *
FUN_10b7f8684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_11270b0e8;
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



/* Entry: 10b7f8788; end: 10b7f878f; -[SCNMdpSignalCenterPlayerInfo mediaPositionMs] */

undefined8 FUN_10b7f8788(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f8790; end: 10b7f8797; -[SCNMdpSignalCenterPlayerInfo bufferedDurationMs] */

undefined8 FUN_10b7f8790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f8798; end: 10b7f879f; -[SCNMdpSignalCenterPlayerInfo stallCount] */

undefined8 FUN_10b7f8798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f87a0; end: 10b7f87a7; -[SCNMdpSignalCenterPlayerInfo totalStallDurationMs] */

undefined8 FUN_10b7f87a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f87a8; end: 10b7f87af; -[SCNMdpSignalCenterPlayerInfo droppedFramesCount] */

undefined8 FUN_10b7f87a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7f87b0; end: 10b7f87eb; -[SCNMdpSignalCenterPlayerInfo .cxx_destruct] */

void FUN_10b7f87b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b7f87ec; end: 10b7f88d7; -[SCNContentResolutionAdditionalVariantRankingInfo initWithUncalibratedOptimalVariantBitrateKbps:rankerTargetTriggerTypes:serializedCalibrationBiases:] */

undefined1 *
FUN_10b7f87ec(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270b0f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f88d8; end: 10b7f88df; -[SCNContentResolutionAdditionalVariantRankingInfo uncalibratedOptimalVariantBitrateKbps] */

undefined4 FUN_10b7f88d8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b7f88e0; end: 10b7f88e7; -[SCNContentResolutionAdditionalVariantRankingInfo rankerTargetTriggerTypes] */

undefined8 FUN_10b7f88e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f88e8; end: 10b7f88ef; -[SCNContentResolutionAdditionalVariantRankingInfo serializedCalibrationBiases] */

undefined8 FUN_10b7f88e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f88f0; end: 10b7f891f; -[SCNContentResolutionAdditionalVariantRankingInfo .cxx_destruct] */

void FUN_10b7f88f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7f8920; end: 10b7f8bcf; -[SCNContentResolutionContentResolveExtractedParams initWithContentId:videoMetadata:seekPointList:isOriginalUrl:originalUrlReason:isBoltFallbackServiceUrl:boltFallbackServiceUrlReason:wasSecondaryUrlAvailable:resolveTime:selectedVariantInfo:additionalVariantRankingInfo:availableVariants:assetGroupRelativePath:expirationTime:] */

undefined8 *
FUN_10b7f8920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_68 = PTR_PTR_11270b0f8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x00010b7f8cac(uVar3);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x00010b7f8cac(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    puVar1[5] = param_7;
    puVar1[6] = param_9;
    *(undefined1 *)((long)puVar1 + 10) = param_10;
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[8];
    puVar1[8] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[9];
    puVar1[9] = param_14;
    _objc_release(uVar2);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x00010b7f8cac(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x00010b7f8cac(uVar3);
    _objc_retain(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b7f8bd0; end: 10b7f8bd7; -[SCNContentResolutionContentResolveExtractedParams contentId] */

undefined8 FUN_10b7f8bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f8bd8; end: 10b7f8bdf; -[SCNContentResolutionContentResolveExtractedParams videoMetadata] */

undefined8 FUN_10b7f8bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f8be0; end: 10b7f8be7; -[SCNContentResolutionContentResolveExtractedParams seekPointList] */

undefined8 FUN_10b7f8be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7f8be8; end: 10b7f8bef; -[SCNContentResolutionContentResolveExtractedParams isOriginalUrl] */

undefined1 FUN_10b7f8be8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7f8bf0; end: 10b7f8bf7; -[SCNContentResolutionContentResolveExtractedParams originalUrlReason] */

undefined8 FUN_10b7f8bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7f8bf8; end: 10b7f8bff; -[SCNContentResolutionContentResolveExtractedParams isBoltFallbackServiceUrl] */

undefined1 FUN_10b7f8bf8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b7f8c00; end: 10b7f8c07; -[SCNContentResolutionContentResolveExtractedParams boltFallbackServiceUrlReason] */

undefined8 FUN_10b7f8c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b7f8c08; end: 10b7f8c0f; -[SCNContentResolutionContentResolveExtractedParams wasSecondaryUrlAvailable] */

undefined1 FUN_10b7f8c08(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b7f8c10; end: 10b7f8c17; -[SCNContentResolutionContentResolveExtractedParams resolveTime] */

undefined8 FUN_10b7f8c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b7f8c18; end: 10b7f8c1f; -[SCNContentResolutionContentResolveExtractedParams selectedVariantInfo] */

undefined8 FUN_10b7f8c18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b7f8c20; end: 10b7f8c27; -[SCNContentResolutionContentResolveExtractedParams additionalVariantRankingInfo] */

undefined8 FUN_10b7f8c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b7f8c28; end: 10b7f8c2f; -[SCNContentResolutionContentResolveExtractedParams availableVariants] */

undefined8 FUN_10b7f8c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b7f8c30; end: 10b7f8c37; -[SCNContentResolutionContentResolveExtractedParams assetGroupRelativePath] */

undefined8 FUN_10b7f8c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b7f8c38; end: 10b7f8c3f; -[SCNContentResolutionContentResolveExtractedParams expirationTime] */

undefined8 FUN_10b7f8c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b7f8c40; end: 10b7f8ca3; -[SCNContentResolutionContentResolveExtractedParams .cxx_destruct] */

void FUN_10b7f8c40(long param_1)

{
  FUN_10b7f8ca4(param_1 + 0x60);
  FUN_10b7f8ca4(param_1 + 0x58);
  FUN_10b7f8ca4(param_1 + 0x50);
  FUN_10b7f8ca4(param_1 + 0x48);
  FUN_10b7f8ca4(param_1 + 0x40);
  FUN_10b7f8ca4(param_1 + 0x38);
  FUN_10b7f8ca4(param_1 + 0x20);
  FUN_10b7f8ca4(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7f8ca4; end: 10b7f8cb3;  */

void FUN_10b7f8ca4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10b7f8cb4; end: 10b7f8d87; -[SCNContentResolutionPlatformContentResolveResult initWithUrl:extractedParams:] */

undefined1 *
FUN_10b7f8cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b100;
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



/* Entry: 10b7f8d88; end: 10b7f8d8f; -[SCNContentResolutionPlatformContentResolveResult url] */

undefined8 FUN_10b7f8d88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f8d90; end: 10b7f8d97; -[SCNContentResolutionPlatformContentResolveResult extractedParams] */

undefined8 FUN_10b7f8d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f8d98; end: 10b7f8dc7; -[SCNContentResolutionPlatformContentResolveResult .cxx_destruct] */

void FUN_10b7f8d98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f8dc8; end: 10b7f8e73; -[SCNContentResolutionPrefetchHint initWithKbPerTimeWindow:timeWindowMs:] */

undefined1 *
FUN_10b7f8dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270b108;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f8e74; end: 10b7f8e7b; -[SCNContentResolutionPrefetchHint kbPerTimeWindow] */

undefined8 FUN_10b7f8e74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f8e7c; end: 10b7f8e83; -[SCNContentResolutionPrefetchHint timeWindowMs] */

undefined4 FUN_10b7f8e7c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b7f8e84; end: 10b7f8e8f; -[SCNContentResolutionPrefetchHint .cxx_destruct] */

void FUN_10b7f8e84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7f8e90; end: 10b7f8edb; -[SCNContentResolutionSeekPoint initWithTimsOffsetMs:byteOffset:] */

void FUN_10b7f8e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b110;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b7f8edc; end: 10b7f8ee3; -[SCNContentResolutionSeekPoint timsOffsetMs] */

undefined8 FUN_10b7f8edc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7f8ee4; end: 10b7f8eeb; -[SCNContentResolutionSeekPoint byteOffset] */

undefined8 FUN_10b7f8ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f8eec; end: 10b7f9103; -[SCNContentResolutionVariantInfo initWithVariant:width:height:codec:vqa:bitrateKbps:durationMs:vqaSamplingRate:variantConfigId:variantUsecase:featureContentType:rankerProfile:rankerBandwidthKbps:rankerResults:latencyEstimationVariants:calibrationSignals:variantScoreDetails:] */

undefined8 *
FUN_10b7f8eec(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain();
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_78 = PTR_PTR_11270b118;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = param_5;
    *(undefined4 *)((long)puVar1 + 0xc) = param_6;
    *(undefined4 *)(puVar1 + 2) = param_7;
    *(undefined4 *)((long)puVar1 + 0x14) = param_1;
    *(undefined4 *)(puVar1 + 3) = param_9;
    puVar1[6] = param_8;
    puVar1[7] = param_10;
    *(undefined4 *)((long)puVar1 + 0x1c) = param_2;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    FUN_10b7f91d8(uVar3);
    *(undefined4 *)(puVar1 + 4) = param_12;
    *(undefined4 *)((long)puVar1 + 0x24) = param_13;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    FUN_10b7f91d8(uVar3);
    *(undefined4 *)(puVar1 + 5) = param_15;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    FUN_10b7f91d8(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    FUN_10b7f91d8(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    FUN_10b7f91d8(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    FUN_10b7f91d8(uVar3);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_11);
  return puVar1;
}



/* Entry: 10b7f9104; end: 10b7f910b; -[SCNContentResolutionVariantInfo variant] */

undefined4 FUN_10b7f9104(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b7f910c; end: 10b7f9113; -[SCNContentResolutionVariantInfo width] */

undefined4 FUN_10b7f910c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b7f9114; end: 10b7f911b; -[SCNContentResolutionVariantInfo height] */

undefined4 FUN_10b7f9114(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b7f911c; end: 10b7f9123; -[SCNContentResolutionVariantInfo codec] */

undefined8 FUN_10b7f911c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b7f9124; end: 10b7f912b; -[SCNContentResolutionVariantInfo vqa] */

undefined4 FUN_10b7f9124(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10b7f912c; end: 10b7f9133; -[SCNContentResolutionVariantInfo bitrateKbps] */

undefined4 FUN_10b7f912c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10b7f9134; end: 10b7f913b; -[SCNContentResolutionVariantInfo durationMs] */

undefined8 FUN_10b7f9134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b7f913c; end: 10b7f9143; -[SCNContentResolutionVariantInfo vqaSamplingRate] */

undefined4 FUN_10b7f913c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 10b7f9144; end: 10b7f914b; -[SCNContentResolutionVariantInfo variantConfigId] */

undefined8 FUN_10b7f9144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b7f914c; end: 10b7f9153; -[SCNContentResolutionVariantInfo variantUsecase] */

undefined4 FUN_10b7f914c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10b7f9154; end: 10b7f915b; -[SCNContentResolutionVariantInfo featureContentType] */

undefined4 FUN_10b7f9154(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



/* Entry: 10b7f915c; end: 10b7f9163; -[SCNContentResolutionVariantInfo rankerProfile] */

undefined8 FUN_10b7f915c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b7f9164; end: 10b7f916b; -[SCNContentResolutionVariantInfo rankerBandwidthKbps] */

undefined4 FUN_10b7f9164(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 10b7f916c; end: 10b7f9173; -[SCNContentResolutionVariantInfo rankerResults] */

undefined8 FUN_10b7f916c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b7f9174; end: 10b7f917b; -[SCNContentResolutionVariantInfo latencyEstimationVariants] */

undefined8 FUN_10b7f9174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b7f917c; end: 10b7f9183; -[SCNContentResolutionVariantInfo calibrationSignals] */

undefined8 FUN_10b7f917c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b7f9184; end: 10b7f918b; -[SCNContentResolutionVariantInfo variantScoreDetails] */

undefined8 FUN_10b7f9184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}


