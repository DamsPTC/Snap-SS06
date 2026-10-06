/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005d95c8; end: 005d95cf; -[SCNGrpcStreamingMetricsInfo sessionTime] */

undefined8 FUN_005d95c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 005d95d0; end: 005d95d7; -[SCNGrpcStreamingMetricsInfo success] */

undefined1 FUN_005d95d0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 005d95d8; end: 005d95df; -[SCNGrpcStreamingMetricsInfo statusCode] */

undefined4 FUN_005d95d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 005d95e0; end: 005d95e7; -[SCNGrpcStreamingMetricsInfo requestId] */

undefined8 FUN_005d95e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 005d95e8; end: 005d95ef; -[SCNGrpcStreamingMetricsInfo taskId] */

undefined8 FUN_005d95e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 005d95f0; end: 005d95f7; -[SCNGrpcStreamingMetricsInfo consistentIdTracking] */

undefined8 FUN_005d95f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 005d95f8; end: 005d95ff; -[SCNGrpcStreamingMetricsInfo authSuccess] */

undefined8 FUN_005d95f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 005d9600; end: 005d9607; -[SCNGrpcStreamingMetricsInfo authLatency] */

undefined8 FUN_005d9600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 005d9608; end: 005d960f; -[SCNGrpcStreamingMetricsInfo argosSuccess] */

undefined8 FUN_005d9608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 005d9610; end: 005d9617; -[SCNGrpcStreamingMetricsInfo argosLatency] */

undefined8 FUN_005d9610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 005d9618; end: 005d961f; -[SCNGrpcStreamingMetricsInfo feature] */

undefined8 FUN_005d9618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 005d9620; end: 005d9627; -[SCNGrpcStreamingMetricsInfo serverLatency] */

undefined8 FUN_005d9620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 005d9628; end: 005d962f; -[SCNGrpcStreamingMetricsInfo argosType] */

undefined8 FUN_005d9628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 005d9630; end: 005d9637; -[SCNGrpcStreamingMetricsInfo networkTTFB] */

undefined8 FUN_005d9630(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 005d9638; end: 005d968b; -[SCNGrpcStreamingMetricsInfo .cxx_destruct] */

void FUN_005d9638(long param_1)

{
  FUN_005d968c(param_1 + 0x88);
  FUN_005d968c(param_1 + 0x78);
  FUN_005d968c(param_1 + 0x68);
  FUN_005d968c(param_1 + 0x60);
  FUN_005d968c(param_1 + 0x58);
  FUN_005d968c(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 005d968c; end: 005d969b;  */

void FUN_005d968c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1,0);
  return;
}



/* Entry: 005d969c; end: 005d9907; -[SCNGrpcUnaryMetricsInfo initWithRpcInfo:connectionTime:networkTTFB:responseTime:requestSize:responseSize:responseContentType:responseContentEncoding:success:statusCode:taskId:requestId:consistentIdTracking:authSuccess:authLatency:argosSuccess:argosLatency:serverLatency:argosType:] */

undefined8 *
FUN_005d969c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
            undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
            undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_00ac4138;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
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
    uVar2 = param_9;
    func_0x00780e20();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x005d9a04(uVar3);
    uVar2 = param_10;
    func_0x00780e20();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x005d9a04(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_11;
    *(undefined4 *)((long)puVar1 + 0xc) = param_12;
    uVar2 = param_13;
    func_0x00780e20();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x005d9a04(uVar3);
    uVar2 = param_14;
    func_0x00780e20();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x005d9a04(uVar3);
    uVar2 = param_15;
    func_0x00780e20();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    func_0x005d9a04(uVar3);
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
    puVar1[0x11] = param_20;
    puVar1[0x12] = param_21;
  }
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 005d9908; end: 005d990f; -[SCNGrpcUnaryMetricsInfo rpcInfo] */

undefined8 FUN_005d9908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 005d9910; end: 005d9917; -[SCNGrpcUnaryMetricsInfo connectionTime] */

undefined8 FUN_005d9910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 005d9918; end: 005d991f; -[SCNGrpcUnaryMetricsInfo networkTTFB] */

undefined8 FUN_005d9918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 005d9920; end: 005d9927; -[SCNGrpcUnaryMetricsInfo responseTime] */

undefined8 FUN_005d9920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 005d9928; end: 005d992f; -[SCNGrpcUnaryMetricsInfo requestSize] */

undefined8 FUN_005d9928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 005d9930; end: 005d9937; -[SCNGrpcUnaryMetricsInfo responseSize] */

undefined8 FUN_005d9930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 005d9938; end: 005d993f; -[SCNGrpcUnaryMetricsInfo responseContentType] */

undefined8 FUN_005d9938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 005d9940; end: 005d9947; -[SCNGrpcUnaryMetricsInfo responseContentEncoding] */

undefined8 FUN_005d9940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 005d9948; end: 005d994f; -[SCNGrpcUnaryMetricsInfo success] */

undefined1 FUN_005d9948(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 005d9950; end: 005d9957; -[SCNGrpcUnaryMetricsInfo statusCode] */

undefined4 FUN_005d9950(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 005d9958; end: 005d995f; -[SCNGrpcUnaryMetricsInfo taskId] */

undefined8 FUN_005d9958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 005d9960; end: 005d9967; -[SCNGrpcUnaryMetricsInfo requestId] */

undefined8 FUN_005d9960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 005d9968; end: 005d996f; -[SCNGrpcUnaryMetricsInfo consistentIdTracking] */

undefined8 FUN_005d9968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 005d9970; end: 005d9977; -[SCNGrpcUnaryMetricsInfo authSuccess] */

undefined8 FUN_005d9970(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 005d9978; end: 005d997f; -[SCNGrpcUnaryMetricsInfo authLatency] */

undefined8 FUN_005d9978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 005d9980; end: 005d9987; -[SCNGrpcUnaryMetricsInfo argosSuccess] */

undefined8 FUN_005d9980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 005d9988; end: 005d998f; -[SCNGrpcUnaryMetricsInfo argosLatency] */

undefined8 FUN_005d9988(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 005d9990; end: 005d9997; -[SCNGrpcUnaryMetricsInfo serverLatency] */

undefined8 FUN_005d9990(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 005d9998; end: 005d999f; -[SCNGrpcUnaryMetricsInfo argosType] */

undefined8 FUN_005d9998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 005d99a0; end: 005d99fb; -[SCNGrpcUnaryMetricsInfo .cxx_destruct] */

void FUN_005d99a0(long param_1)

{
  FUN_005d99fc(param_1 + 0x78);
  FUN_005d99fc(param_1 + 0x68);
  FUN_005d99fc(param_1 + 0x60);
  FUN_005d99fc(param_1 + 0x58);
  FUN_005d99fc(param_1 + 0x50);
  FUN_005d99fc(param_1 + 0x48);
  FUN_005d99fc(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 005d99fc; end: 005d9a0b;  */

void FUN_005d99fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1,0);
  return;
}



/* Entry: 005d9a0c; end: 005d9a73; +[SCCTPEXTComputeFeedRequest descriptor] */

void FUN_005d9a0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62bd0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adbe58,
                    &PTR____CFConstantStringClassReference_00a32320,&PTR_DAT_00b1f0d8,
                    &PTR_s_backendPrivateDataArray_00b1f110,2,0x18,0x1c);
    puRam0000000000b62bd0 = puVar1;
  }
  return;
}



/* Entry: 005d9a74; end: 005d9adb; +[SCCTPEXTFlags descriptor] */

void FUN_005d9a74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62bd8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adbea8,
                    &PTR____CFConstantStringClassReference_00a32340,&PTR_DAT_00b1f0d8,
                    &PTR_DAT_00b1f0f0,1,4,0x1c);
    puRam0000000000b62bd8 = puVar1;
  }
  return;
}



/* Entry: 005d9adc; end: 005d9b67; +[SCCTPEXTComputeFeedResponse descriptor] */

undefined * FUN_005d9adc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62be0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adbef8,
                    &PTR____CFConstantStringClassReference_00a32360,&PTR_DAT_00b1f0d8,
                    &PTR_DAT_00b1f190,4,0x28,0x1c);
    func_0x00791460();
    puRam0000000000b62be0 = puVar1;
  }
  return puRam0000000000b62be0;
}



/* Entry: 005d9b68; end: 005d9be3; +[SCCTPEXTComputeFeedResponse_FlatResults descriptor] */

undefined * FUN_005d9b68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62be8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adbf48,
                    &PTR____CFConstantStringClassReference_00a32380,&PTR_DAT_00b1f0d8,
                    &PTR_DAT_00b1f150,2,0x18,0x1c);
    func_0x00791420();
    puRam0000000000b62be8 = puVar1;
  }
  return puRam0000000000b62be8;
}



/* Entry: 005d9be4; end: 005d9c4b; +[SCCTPEXTCTFeedRequest descriptor] */

void FUN_005d9be4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62bf0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adbfe8,
                    &PTR____CFConstantStringClassReference_00a323a0,&PTR_DAT_00b1f210,
                    &PTR_DAT_00b1f288,4,0x20,0x1c);
    puRam0000000000b62bf0 = puVar1;
  }
  return;
}



/* Entry: 005d9c4c; end: 005d9cc7; +[SCCTPEXTCTFeedRequest_ClientFeatures descriptor] */

undefined * FUN_005d9c4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62bf8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc038,
                    &PTR____CFConstantStringClassReference_00a323c0,&PTR_DAT_00b1f210,
                    &PTR_DAT_00b1f228,1,0x10,0x1c);
    func_0x00791420();
    puRam0000000000b62bf8 = puVar1;
  }
  return puRam0000000000b62bf8;
}



/* Entry: 005d9cc8; end: 005d9d2f; +[SCCTPEXTCTFeedResponse descriptor] */

void FUN_005d9cc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62c00 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc088,
                    &PTR____CFConstantStringClassReference_00a323e0,&PTR_DAT_00b1f210,
                    &PTR_DAT_00b1f248,1,0x10,0x1c);
    puRam0000000000b62c00 = puVar1;
  }
  return;
}



/* Entry: 005d9d30; end: 005d9e13; +[SCCTPEXTCTRequestParams descriptor] */

void FUN_005d9d30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62c08 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc0d8,
                    &PTR____CFConstantStringClassReference_00a32400,&PTR_DAT_00b1f210,
                    &PTR_s_userInfo_00b1f268,1,0x10,0x1c);
    puRam0000000000b62c08 = puVar1;
  }
  return;
}



/* Entry: 005d9e14; end: 005d9e1f;  */

bool FUN_005d9e14(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 005d9e20; end: 005d9e9b;  */

undefined * FUN_005d9e20(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b62c18 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a32440,&UNK_00819718,&UNK_00819848,0x1c
                    ,FUN_005d9e9c,0);
    do {
      if (puRam0000000000b62c18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b62c18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb62c18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b62c18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b62c18;
}



/* Entry: 005d9e9c; end: 005d9eb7;  */

uint FUN_005d9e9c(uint param_1)

{
  return (uint)(param_1 < 0x1e) & 0x3fffffb7U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 005d9eb8; end: 005d9f43; +[SCCTPDeltaForceGroupKey descriptor] */

undefined * FUN_005d9eb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62c20 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc1c8,
                    &PTR____CFConstantStringClassReference_00a32460,&PTR_DAT_00b1f318,
                    &PTR_DAT_00b1f370,3,0x20,0x1c);
    func_0x00791460();
    puRam0000000000b62c20 = puVar1;
  }
  return puRam0000000000b62c20;
}



/* Entry: 005d9f44; end: 005d9fab; +[SCCTPCTFeedNode descriptor] */

void FUN_005d9f44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62c28 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc218,
                    &PTR____CFConstantStringClassReference_00a32480,&PTR_DAT_00b1f318,
                    &PTR_s_type_00b1f4d0,8,0x38,0x1c);
    puRam0000000000b62c28 = puVar1;
  }
  return;
}



/* Entry: 005d9fac; end: 005da047; +[SCCTPCTFeedNode_CTFeedSource descriptor] */

undefined * FUN_005d9fac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62c30 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc330,
                    &PTR____CFConstantStringClassReference_00a324a0,&PTR_DAT_00b1f318,
                    &PTR_DAT_00b1f430,5,0x30,0x1c);
    func_0x00791460();
    func_0x00791420(puVar1,param_2,&PTR_PTR_00adc218);
    puRam0000000000b62c30 = puVar1;
  }
  return puRam0000000000b62c30;
}



/* Entry: 005da048; end: 005da0cb; +[SCCTPCTFeedNode_CTFeedSource_DeltaForce descriptor] */

undefined * FUN_005da048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62c38 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc358,
                    &PTR____CFConstantStringClassReference_00a324c0,&PTR_DAT_00b1f318,
                    &PTR_DAT_00b1f330,1,0x10,0x1c);
    func_0x00791420();
    puRam0000000000b62c38 = puVar1;
  }
  return puRam0000000000b62c38;
}



/* Entry: 005da0cc; end: 005da14f; +[SCCTPCTFeedNode_CTFeedSource_Compute descriptor] */

undefined * FUN_005da0cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62c40 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc380,
                    &PTR____CFConstantStringClassReference_00a324e0,&PTR_DAT_00b1f318,
                    &PTR_s_path_00b1f3d0,3,0x20,0x1c);
    func_0x00791420();
    puRam0000000000b62c40 = puVar1;
  }
  return puRam0000000000b62c40;
}



/* Entry: 005da150; end: 005da1d3; +[SCCTPCTFeedNode_CTFeedSource_Client descriptor] */

undefined * FUN_005da150(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62c48 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc3a8,
                    &PTR____CFConstantStringClassReference_00a32500,&PTR_DAT_00b1f318,0,0,4,0x1c);
    func_0x00791420();
    puRam0000000000b62c48 = puVar1;
  }
  return puRam0000000000b62c48;
}



/* Entry: 005da1d4; end: 005da257; +[SCCTPCTFeedNode_CTFeedSource_NoSource descriptor] */

undefined * FUN_005da1d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62c50 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc3d0,
                    &PTR____CFConstantStringClassReference_00a32520,&PTR_DAT_00b1f318,0,0,4,0x1c);
    func_0x00791420();
    puRam0000000000b62c50 = puVar1;
  }
  return puRam0000000000b62c50;
}



/* Entry: 005da258; end: 005da2db; +[SCCTPCTFeedNode_CTFeedSource_Stream descriptor] */

undefined * FUN_005da258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62c58 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc3f8,
                    &PTR____CFConstantStringClassReference_00a32540,&PTR_DAT_00b1f318,
                    &PTR_DAT_00b1f350,1,0x10,0x1c);
    func_0x00791420();
    puRam0000000000b62c58 = puVar1;
  }
  return puRam0000000000b62c58;
}



/* Entry: 005da2dc; end: 005da357;  */

undefined * FUN_005da2dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b62c60 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a32560,&UNK_008198b8,&UNK_00819940,7,
                    FUN_005da358,0);
    do {
      if (puRam0000000000b62c60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b62c60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb62c60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b62c60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b62c60;
}



/* Entry: 005da358; end: 005da363;  */

bool FUN_005da358(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 005da364; end: 005da3df;  */

undefined * FUN_005da364(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b62c68 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a32580,&UNK_0081995c,&UNK_00819a4c,0xb,
                    FUN_005da3e0,0);
    do {
      if (puRam0000000000b62c68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b62c68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb62c68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b62c68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b62c68;
}



/* Entry: 005da3e0; end: 005da3eb;  */

bool FUN_005da3e0(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 005da3ec; end: 005da467;  */

undefined * FUN_005da3ec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b62c70 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a325a0,&UNK_00819a78,&UNK_00819b34,9,
                    FUN_005da468,0);
    do {
      if (puRam0000000000b62c70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b62c70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb62c70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b62c70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b62c70;
}



/* Entry: 005da468; end: 005da473;  */

bool FUN_005da468(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 005da474; end: 005da4ef;  */

undefined * FUN_005da474(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b62c78 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a325c0,&UNK_00819b58,&UNK_00819b98,3,
                    FUN_005da4f0,0);
    do {
      if (puRam0000000000b62c78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b62c78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb62c78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b62c78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b62c78;
}



/* Entry: 005da4f0; end: 005da4fb;  */

bool FUN_005da4f0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 005da4fc; end: 005da563; +[SCCTPEXTSearchRequest descriptor] */

void FUN_005da4fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62c80 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc498,
                    &PTR____CFConstantStringClassReference_00a325e0,&PTR_DAT_00b1f5d8,
                    &PTR_DAT_00b1f830,10,0x50,0x1c);
    puRam0000000000b62c80 = puVar1;
  }
  return;
}



/* Entry: 005da564; end: 005da5cb; +[SCCTPEXTSearchResponse descriptor] */

void FUN_005da564(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62c88 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc4e8,
                    &PTR____CFConstantStringClassReference_00a32600,&PTR_DAT_00b1f5d8,
                    &PTR_DAT_00b1f630,2,0x18,0x1c);
    puRam0000000000b62c88 = puVar1;
  }
  return;
}



/* Entry: 005da5cc; end: 005da633; +[SCCTPEXTSection descriptor] */

void FUN_005da5cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62c90 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc538,
                    &PTR____CFConstantStringClassReference_00a32620,&PTR_DAT_00b1f5d8,
                    &PTR_DAT_00b1f670,3,0x18,0x1c);
    puRam0000000000b62c90 = puVar1;
  }
  return;
}



/* Entry: 005da634; end: 005da69b; +[SCCTPEXTResult descriptor] */

void FUN_005da634(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62c98 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc588,
                    &PTR____CFConstantStringClassReference_00a32640,&PTR_DAT_00b1f5d8,
                    &PTR_DAT_00b1f790,5,0x28,0x1c);
    puRam0000000000b62c98 = puVar1;
  }
  return;
}



/* Entry: 005da69c; end: 005da703; +[SCCTPEXTResultMetadata descriptor] */

void FUN_005da69c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62ca0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc5d8,
                    &PTR____CFConstantStringClassReference_00a32660,&PTR_DAT_00b1f5d8,
                    &PTR_DAT_00b1f5f0,1,0x10,0x1c);
    puRam0000000000b62ca0 = puVar1;
  }
  return;
}



/* Entry: 005da704; end: 005da78f; +[SCCTPEXTResultTypeOption descriptor] */

undefined * FUN_005da704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62ca8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc678,
                    &PTR____CFConstantStringClassReference_00a32680,&PTR_DAT_00b1f5d8,
                    &PTR_DAT_00b1f6d0,3,0x20,0x1c);
    func_0x00791460();
    puRam0000000000b62ca8 = puVar1;
  }
  return puRam0000000000b62ca8;
}



/* Entry: 005da790; end: 005da813; +[SCCTPEXTResultTypeOption_BitmojiOption descriptor] */

undefined * FUN_005da790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62cb0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc6a0,
                    &PTR____CFConstantStringClassReference_00a326a0,&PTR_DAT_00b1f5d8,
                    &PTR_DAT_00b1f730,3,0x10,0x1c);
    func_0x00791420();
    puRam0000000000b62cb0 = puVar1;
  }
  return puRam0000000000b62cb0;
}



/* Entry: 005da814; end: 005da897; +[SCCTPEXTResultTypeOption_GfycatOption descriptor] */

undefined * FUN_005da814(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62cb8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc6c8,
                    &PTR____CFConstantStringClassReference_00a326c0,&PTR_DAT_00b1f5d8,
                    &PTR_DAT_00b1f610,1,0x10,0x1c);
    func_0x00791420();
    puRam0000000000b62cb8 = puVar1;
  }
  return puRam0000000000b62cb8;
}



/* Entry: 005da898; end: 005da8ff; +[SCCTPAcceptLanguagesEntry descriptor] */

void FUN_005da898(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62cc0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc768,
                    &PTR____CFConstantStringClassReference_00a326e0,&PTR_DAT_00b1f970,
                    &PTR_DAT_00b1f988,2,0x10,0x1c);
    puRam0000000000b62cc0 = puVar1;
  }
  return;
}



/* Entry: 005da900; end: 005da9f7; +[SCS2CompositeId descriptor] */

void FUN_005da900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62cc8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc808,
                    &PTR____CFConstantStringClassReference_00a32700,&PTR_DAT_00b1f9c8,
                    &PTR_DAT_00b1f9e0,3,0x18,0x1c);
    puRam0000000000b62cc8 = puVar1;
  }
  return;
}



/* Entry: 005da9f8; end: 005daa03;  */

bool FUN_005da9f8(uint param_1)

{
  return param_1 < 0x29;
}



/* Entry: 005daa04; end: 005daa7f;  */

undefined * FUN_005daa04(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b62cd8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a32740,&UNK_00819ed0,&UNK_00819ef8,4,
                    FUN_005daa80,0);
    do {
      if (puRam0000000000b62cd8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b62cd8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb62cd8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b62cd8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b62cd8;
}



/* Entry: 005daa80; end: 005daa8b;  */

bool FUN_005daa80(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 005daa8c; end: 005dab07;  */

undefined * FUN_005daa8c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b62ce0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a32760,&UNK_00819f08,&UNK_00819f30,3,
                    FUN_005dab08,0);
    do {
      if (puRam0000000000b62ce0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b62ce0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb62ce0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b62ce0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b62ce0;
}



/* Entry: 005dab08; end: 005dab13;  */

bool FUN_005dab08(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 005dab14; end: 005dab7b; +[SCCTPEXTSectionedResults descriptor] */

void FUN_005dab14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62ce8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc8f8,
                    &PTR____CFConstantStringClassReference_00a32780,&PTR_DAT_00b1fa48,
                    &PTR_DAT_00b1fa60,2,0x18,0x1c);
    puRam0000000000b62ce8 = puVar1;
  }
  return;
}



/* Entry: 005dab7c; end: 005dabe3; +[SCCTPEXTResultSection descriptor] */

void FUN_005dab7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62cf0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc948,
                    &PTR____CFConstantStringClassReference_00a327a0,&PTR_DAT_00b1fa48,
                    &PTR_DAT_00b1fae0,5,0x20,0x1c);
    puRam0000000000b62cf0 = puVar1;
  }
  return;
}



/* Entry: 005dabe4; end: 005dac6f; +[SCCTPEXTResultEntry descriptor] */

undefined * FUN_005dabe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62cf8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc998,
                    &PTR____CFConstantStringClassReference_00a327c0,&PTR_DAT_00b1fa48,
                    &PTR_DAT_00b1fb80,5,0x30,0x1c);
    func_0x00791460();
    puRam0000000000b62cf8 = puVar1;
  }
  return puRam0000000000b62cf8;
}



/* Entry: 005dac70; end: 005dacd7; +[SCCTPEXTClientCachedCTItem descriptor] */

void FUN_005dac70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62d00 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adc9e8,
                    &PTR____CFConstantStringClassReference_00a327e0,&PTR_DAT_00b1fa48,
                    &PTR_s_id_p_00b1faa0,2,0x10,0x1c);
    puRam0000000000b62d00 = puVar1;
  }
  return;
}



/* Entry: 005dacd8; end: 005dad3f; +[SCCTPEXTUserInfo descriptor] */

void FUN_005dacd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62d08 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adca88,
                    &PTR____CFConstantStringClassReference_00a32800,&PTR_DAT_00b1fc20,
                    &PTR_DAT_00b1fc58,6,0x20,0x1c);
    puRam0000000000b62d08 = puVar1;
  }
  return;
}



/* Entry: 005dad40; end: 005dada7; +[SCCTPEXTTimeZone descriptor] */

void FUN_005dad40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62d10 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adcad8,
                    &PTR____CFConstantStringClassReference_00a32820,&PTR_DAT_00b1fc20,
                    &PTR_DAT_00b1fc38,1,8,0x1c);
    puRam0000000000b62d10 = puVar1;
  }
  return;
}



/* Entry: 005dada8; end: 005dae0f; +[SCCTPEXTPutItemsByExternalIDRequest descriptor] */

void FUN_005dada8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62d18 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adcb78,
                    &PTR____CFConstantStringClassReference_00a32840,&PTR_DAT_00b1fd18,
                    &PTR_DAT_00b1fd50,2,0x10,0x1c);
    puRam0000000000b62d18 = puVar1;
  }
  return;
}



/* Entry: 005dae10; end: 005dae8b; +[SCCTPEXTPutItemsByExternalIDRequest_Item descriptor] */

undefined * FUN_005dae10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62d20 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adcbc8,
                    &PTR____CFConstantStringClassReference_00a32860,&PTR_DAT_00b1fd18,
                    &PTR_DAT_00b1fd90,3,0x18,0x1c);
    func_0x00791420();
    puRam0000000000b62d20 = puVar1;
  }
  return puRam0000000000b62d20;
}



/* Entry: 005dae8c; end: 005daef3; +[SCCTPEXTPutItemsByExternalIDResponse descriptor] */

void FUN_005dae8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62d28 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adcc18,
                    &PTR____CFConstantStringClassReference_00a32880,&PTR_DAT_00b1fd18,
                    &PTR_s_resultsArray_00b1fd30,1,0x10,0x1c);
    puRam0000000000b62d28 = puVar1;
  }
  return;
}



/* Entry: 005daef4; end: 005dafeb; +[SCCTPEXTPutItemsByExternalIDResponse_Result descriptor] */

undefined * FUN_005daef4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62d30 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adcc68,
                    &PTR____CFConstantStringClassReference_00a32640,&PTR_DAT_00b1fd18,
                    &PTR_s_success_00b1fdf0,3,0x10,0x1c);
    func_0x00791420();
    puRam0000000000b62d30 = puVar1;
  }
  return puRam0000000000b62d30;
}



/* Entry: 005dafec; end: 005daff7;  */

bool FUN_005dafec(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 005daff8; end: 005db073;  */

undefined * FUN_005daff8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b62d40 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a328c0,&UNK_0081a088,&UNK_0081a0c8,6,
                    FUN_005db074,0);
    do {
      if (puRam0000000000b62d40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b62d40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb62d40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b62d40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b62d40;
}



/* Entry: 005db074; end: 005db08f;  */

uint FUN_005db074(uint param_1)

{
  return (uint)(param_1 < 0x1f) & 0x4000001fU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 005db090; end: 005db11f;  */

undefined * FUN_005db090(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b62d48 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec20(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a328e0,&UNK_0081a0e0,&UNK_0081a0f8,3,
                    FUN_005db120,0,&UNK_0081a104);
    do {
      if (puRam0000000000b62d48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b62d48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb62d48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b62d48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b62d48;
}



/* Entry: 005db120; end: 005db12b;  */

bool FUN_005db120(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 005db12c; end: 005db193; +[SCCTPEXTCTItem descriptor] */

void FUN_005db12c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62d50 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adcd58,
                    &PTR____CFConstantStringClassReference_00a32900,&PTR_DAT_00b1fe60,
                    &PTR_DAT_00b1ff98,6,0x38,0x1c);
    puRam0000000000b62d50 = puVar1;
  }
  return;
}



/* Entry: 005db194; end: 005db22f; +[SCCTPEXTCTItem_Entity descriptor] */

undefined * FUN_005db194(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62d58 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adcda8,
                    &PTR____CFConstantStringClassReference_00a32920,&PTR_DAT_00b1fe60,
                    &PTR_DAT_00b1fef8,5,0x30,0x1c);
    func_0x00791460();
    func_0x00791420(puVar1,param_2,&PTR_PTR_00adcd58);
    puRam0000000000b62d58 = puVar1;
  }
  return puRam0000000000b62d58;
}



/* Entry: 005db230; end: 005db2ab; +[SCCTPEXTCTItem_AssociatedId descriptor] */

undefined * FUN_005db230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62d60 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adcdf8,
                    &PTR____CFConstantStringClassReference_00a32940,&PTR_DAT_00b1fe60,
                    &PTR_DAT_00b1fe78,2,0x10,0x1c);
    func_0x00791420();
    puRam0000000000b62d60 = puVar1;
  }
  return puRam0000000000b62d60;
}



/* Entry: 005db2ac; end: 005db313; +[SCCTPEXTExternalKey descriptor] */

void FUN_005db2ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62d68 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adce48,
                    &PTR____CFConstantStringClassReference_00a32960,&PTR_DAT_00b1fe60,
                    &PTR_DAT_00b1feb8,2,0x10,0x1c);
    puRam0000000000b62d68 = puVar1;
  }
  return;
}



/* Entry: 005db314; end: 005db39f; +[SCCTPEXTCTItemExternalID descriptor] */

undefined * FUN_005db314(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b62d70 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00adce98,
                    &PTR____CFConstantStringClassReference_00a32980,&PTR_DAT_00b1fe60,
                    &PTR_DAT_00b20058,6,0x38,0x1c);
    func_0x00791460();
    puRam0000000000b62d70 = puVar1;
  }
  return puRam0000000000b62d70;
}


