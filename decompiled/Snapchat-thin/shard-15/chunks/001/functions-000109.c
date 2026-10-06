/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b88cebc; end: 10b88cec3; -[SCNNetworkTypesTweaks throttleMode] */

undefined8 FUN_10b88cebc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b88cec4; end: 10b88cecf; -[SCNNetworkTypesTweaks .cxx_destruct] */

void FUN_10b88cec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88ced0; end: 10b88ced7; -[SCNNetworkTypesUrlRequestInfo executionStartDateNanos] */

undefined8 FUN_10b88ced0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b88ced8; end: 10b88cedf; -[SCNNetworkTypesUrlRequestInfo executionEndDateNanos] */

undefined8 FUN_10b88ced8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b88cee0; end: 10b88cee7; -[SCNNetworkTypesUrlRequestInfo redirectDateNanos] */

undefined8 FUN_10b88cee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b88cee8; end: 10b88ceef; -[SCNNetworkTypesUrlResponseInfo urlChain] */

undefined8 FUN_10b88cee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b88cef0; end: 10b88cef7; -[SCNNetworkTypesUrlResponseInfo httpStatusText] */

undefined8 FUN_10b88cef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b88cef8; end: 10b88ceff; -[SCNNetworkTypesUrlResponseInfo wasCached] */

undefined1 FUN_10b88cef8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b88cf00; end: 10b88cf07; -[SCNNetworkTypesUrlResponseInfo proxyServer] */

undefined8 FUN_10b88cf00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b88cf08; end: 10b88cf0f; -[SCNNetworkTypesUrlResponseInfo receivedByteCount] */

undefined8 FUN_10b88cf08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b88cf10; end: 10b88cf17; -[SCNNetworkTypesUrlResponseInfo decompressedReceivedPayloadByteCount] */

undefined8 FUN_10b88cf10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b88cf18; end: 10b88cf63; -[SCNMdpCommonContentDistance initWithStoryOffset:snapOffset:] */

void FUN_10b88cf18(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b8f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  }
  return;
}



/* Entry: 10b88cf64; end: 10b88cf87; -[SCNMdpCommonContentDistance copyWithZone:] */

undefined8 FUN_10b88cf64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b88cf88; end: 10b88cf8f; -[SCNMdpCommonContentDistance storyOffset] */

undefined4 FUN_10b88cf88(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b88cf90; end: 10b88cf97; -[SCNMdpCommonContentDistance snapOffset] */

undefined4 FUN_10b88cf90(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b88cf98; end: 10b88cfbb; -[SCNMdpCommonDeprecatedRankingSignal copyWithZone:] */

undefined8 FUN_10b88cf98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b88cfbc; end: 10b88d067; -[SCNMdpCommonFailoverAdvice initWithFallbackUrls:reason:] */

undefined1 *
FUN_10b88cfbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270b908;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b88d068; end: 10b88d06f; -[SCNMdpCommonFailoverAdvice fallbackUrls] */

undefined8 FUN_10b88d068(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b88d070; end: 10b88d077; -[SCNMdpCommonFailoverAdvice reason] */

undefined8 FUN_10b88d070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b88d078; end: 10b88d083; -[SCNMdpCommonFailoverAdvice .cxx_destruct] */

void FUN_10b88d078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88d084; end: 10b88d0a7; -[SCNMdpCommonRankingSignals copyWithZone:] */

undefined8 FUN_10b88d084(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b88d0a8; end: 10b88d1eb; -[SCNMdpCommonRequestContext initWithRankingSignals:uiPageInfo:trackingId:switchBoardKey:] */

undefined1 *
FUN_10b88d0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_11270b918;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
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



/* Entry: 10b88d1ec; end: 10b88d20f; -[SCNMdpCommonRequestContext copyWithZone:] */

undefined8 FUN_10b88d1ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b88d210; end: 10b88d217; -[SCNMdpCommonRequestContext rankingSignals] */

undefined8 FUN_10b88d210(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b88d218; end: 10b88d21f; -[SCNMdpCommonRequestContext uiPageInfo] */

undefined8 FUN_10b88d218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b88d220; end: 10b88d227; -[SCNMdpCommonRequestContext trackingId] */

undefined8 FUN_10b88d220(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b88d228; end: 10b88d22f; -[SCNMdpCommonRequestContext switchBoardKey] */

undefined8 FUN_10b88d228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b88d230; end: 10b88d26b; -[SCNMdpCommonRequestContext .cxx_destruct] */

void FUN_10b88d230(long param_1)

{
  FUN_10b88d26c(param_1 + 0x20);
  FUN_10b88d26c(param_1 + 0x18);
  FUN_10b88d26c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88d26c; end: 10b88d273;  */

void FUN_10b88d26c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10b88d274; end: 10b88d317; -[SCNMdpCommonRequestKey initWithKey:] */

undefined1 * FUN_10b88d274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270b920;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b88d318; end: 10b88d31f; -[SCNMdpCommonRequestKey key] */

undefined8 FUN_10b88d318(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b88d320; end: 10b88d32b; -[SCNMdpCommonRequestKey .cxx_destruct] */

void FUN_10b88d320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88d32c; end: 10b88d3cf; -[SCNMdpCommonUIPageInfo initWithPageHierarchy:] */

undefined1 * FUN_10b88d32c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270b928;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b88d3d0; end: 10b88d3f3; -[SCNMdpCommonUIPageInfo copyWithZone:] */

undefined8 FUN_10b88d3d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b88d3f4; end: 10b88d3fb; -[SCNMdpCommonUIPageInfo pageHierarchy] */

undefined8 FUN_10b88d3f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b88d3fc; end: 10b88d407; -[SCNMdpCommonUIPageInfo .cxx_destruct] */

void FUN_10b88d3fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88d408; end: 10b88d40f; -[SCDevice systemName] */

undefined8 FUN_10b88d408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b88d410; end: 10b88d417; -[SCDevice kernelVersion] */

undefined8 FUN_10b88d410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b88d418; end: 10b88d477; -[SCDevice .cxx_destruct] */

void FUN_10b88d418(long param_1)

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



/* Entry: 10b88d478; end: 10b88d4c3; -[SCDevice gpuModelName] */

void FUN_10b88d478(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5f480(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b88d4c4; end: 10b88d4df; -[SCDevice isIpad] */

bool FUN_10b88d4c4(long param_1)

{
  func_0x00010bf70ae0();
  return param_1 == 1;
}



/* Entry: 10b88d4e0; end: 10b88d53f; -[SCDevice isSimilarToIphone13orNewer] */

long FUN_10b88d4e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf70ae0();
  if (lVar1 == 2) {
    func_0x00010bfd3880(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x000107c30ad0();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10b88d540; end: 10b88d59f; -[SCDevice isSimilarToIphone12orNewer] */

long FUN_10b88d540(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf70ae0();
  if (lVar1 == 2) {
    func_0x00010bfd3880(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x000107c30ad0();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10b88d5a0; end: 10b88d5ff; -[SCDevice isSimilarToIphone11orNewer] */

long FUN_10b88d5a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf70ae0();
  if (lVar1 == 2) {
    func_0x00010bfd3880(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x000107c30ad0();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10b88d600; end: 10b88d65f; -[SCDevice isSimilarToIphoneXSorNewer] */

long FUN_10b88d600(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf70ae0();
  if (lVar1 == 2) {
    func_0x00010bfd3880(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x000107c30ad0();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10b88d660; end: 10b88d6bf; -[SCDevice isSimilarToIphone7orNewer] */

long FUN_10b88d660(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf70ae0();
  if (lVar1 == 2) {
    func_0x00010bfd3880(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x000107c30ad0();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10b88d6c0; end: 10b88d71f; -[SCDevice isSimilarToIphone8orNewer] */

long FUN_10b88d6c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf70ae0();
  if (lVar1 == 2) {
    func_0x00010bfd3880(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x000107c30ad0();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10b88d720; end: 10b88d7a7; +[SCDevice deviceScore] */

undefined8 FUN_10b88d720(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07e1c0();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126b2930;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c07e1a0();
    _objc_release(puVar1);
    uVar3 = 0x50;
    if ((int)puVar2 == 0) {
      uVar3 = 0x3c;
    }
  }
  else {
    uVar3 = 100;
  }
  return uVar3;
}



/* Entry: 10b88d7a8; end: 10b88d83b; -[SCDevice systemNameType] */

undefined8 FUN_10b88d7a8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x00010c267120();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea5178);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f9d3b8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f9d3d8);
      uVar2 = 3;
      if ((int)uVar1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b88d83c; end: 10b88d883;  */

void FUN_10b88d83c(void)

{
  int iVar1;
  
  if (cRam00000001137fc7d8 == '\x01') {
    iVar1 = 0x137fc7d9;
    _open(0x1137fc7d9,0x601);
    if (-1 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__close_11034bfc8)();
      return;
    }
  }
  return;
}



/* Entry: 10b88d884; end: 10b88d8ff;  */

undefined * FUN_10b88d884(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fcbe0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f9d3f8,
                        &UNK_10e5f4878,&UNK_10e5f4978,0xb,FUN_10b88d900,0);
    do {
      if (puRam00000001137fcbe0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fcbe0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fcbe0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fcbe0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fcbe0;
}



/* Entry: 10b88d900; end: 10b88d90b;  */

bool FUN_10b88d900(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 10b88d90c; end: 10b88d973; +[SCParamedicJournalEntry descriptor] */

void FUN_10b88d90c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcbe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebac0,
                        &PTR____CFConstantStringClassReference_110f9d418,&PTR_DAT_1133fa518,
                        &PTR_s_eventType_1133fa550,8,0x40,0x1c);
    puRam00000001137fcbe8 = puVar1;
  }
  return;
}



/* Entry: 10b88d974; end: 10b88d9db; +[SCParamedicJournal descriptor] */

void FUN_10b88d974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcbf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebb10,
                        &PTR____CFConstantStringClassReference_110f9d438,&PTR_DAT_1133fa518,
                        &PTR_DAT_1133fa530,1,0x10,0x1c);
    puRam00000001137fcbf0 = puVar1;
  }
  return;
}



/* Entry: 10b88d9dc; end: 10b88da43; +[DiskBackgroundPolicy descriptor] */

void FUN_10b88d9dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcbf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebbb0,
                        &PTR____CFConstantStringClassReference_110f9d458,&PTR_DAT_1133fa650,
                        &PTR_DAT_1133fa808,3,0x20,0x1c);
    puRam00000001137fcbf8 = puVar1;
  }
  return;
}



/* Entry: 10b88da44; end: 10b88daab; +[DiskScanPolicy descriptor] */

void FUN_10b88da44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcc00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebc00,
                        &PTR____CFConstantStringClassReference_110f9d478,&PTR_DAT_1133fa650,
                        &PTR_DAT_1133fa6c8,2,0x10,0x1c);
    puRam00000001137fcc00 = puVar1;
  }
  return;
}



/* Entry: 10b88daac; end: 10b88db13; +[DiskScanRule descriptor] */

void FUN_10b88daac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcc08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebc50,
                        &PTR____CFConstantStringClassReference_110f9d498,&PTR_DAT_1133fa650,
                        &PTR_DAT_1133fa668,1,0x10,0x1c);
    puRam00000001137fcc08 = puVar1;
  }
  return;
}



/* Entry: 10b88db14; end: 10b88db7b; +[DiskReportPolicy descriptor] */

void FUN_10b88db14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcc10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebca0,
                        &PTR____CFConstantStringClassReference_110f9d4b8,&PTR_DAT_1133fa650,
                        &PTR_DAT_1133fa708,2,0x18,0x1c);
    puRam00000001137fcc10 = puVar1;
  }
  return;
}



/* Entry: 10b88db7c; end: 10b88dbe3; +[DiskReportRule descriptor] */

void FUN_10b88db7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcc18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebcf0,
                        &PTR____CFConstantStringClassReference_110f9d4d8,&PTR_DAT_1133fa650,
                        &PTR_DAT_1133fa868,3,0x20,0x1c);
    puRam00000001137fcc18 = puVar1;
  }
  return;
}



/* Entry: 10b88dbe4; end: 10b88dc4b; +[DiskReportDirectoryRule descriptor] */

void FUN_10b88dbe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcc20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebd40,
                        &PTR____CFConstantStringClassReference_110f9d4f8,&PTR_DAT_1133fa650,
                        &PTR_DAT_1133fa748,2,0x10,0x1c);
    puRam00000001137fcc20 = puVar1;
  }
  return;
}



/* Entry: 10b88dc4c; end: 10b88dcb3; +[DiskReportFileRule descriptor] */

void FUN_10b88dc4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcc28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebd90,
                        &PTR____CFConstantStringClassReference_110f9d518,&PTR_DAT_1133fa650,
                        &PTR_s_path_1133fa688,1,0x10,0x1c);
    puRam00000001137fcc28 = puVar1;
  }
  return;
}



/* Entry: 10b88dcb4; end: 10b88dd1b; +[DiskReportAttribution descriptor] */

void FUN_10b88dcb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcc30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebde0,
                        &PTR____CFConstantStringClassReference_110f9d538,&PTR_DAT_1133fa650,
                        &PTR_DAT_1133fa788,2,0x18,0x1c);
    puRam00000001137fcc30 = puVar1;
  }
  return;
}



/* Entry: 10b88dd1c; end: 10b88dd83; +[DiskDeletionPolicy descriptor] */

void FUN_10b88dd1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcc38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebe30,
                        &PTR____CFConstantStringClassReference_110f9d558,&PTR_DAT_1133fa650,
                        &PTR_DAT_1133fa8c8,3,0x20,0x1c);
    puRam00000001137fcc38 = puVar1;
  }
  return;
}



/* Entry: 10b88dd84; end: 10b88ddeb; +[DirectoryDeletionPolicy descriptor] */

void FUN_10b88dd84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcc40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebe80,
                        &PTR____CFConstantStringClassReference_110f9d578,&PTR_DAT_1133fa650,
                        &PTR_DAT_1133fa928,5,0x18,0x1c);
    puRam00000001137fcc40 = puVar1;
  }
  return;
}



/* Entry: 10b88ddec; end: 10b88de53; +[FileDeletionPolicy descriptor] */

void FUN_10b88ddec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcc48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebed0,
                        &PTR____CFConstantStringClassReference_110f9d598,&PTR_DAT_1133fa650,
                        &PTR_s_path_1133fa7c8,2,0x10,0x1c);
    puRam00000001137fcc48 = puVar1;
  }
  return;
}



/* Entry: 10b88de54; end: 10b88debb; +[FileDeletionGuard descriptor] */

void FUN_10b88de54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcc50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebf20,
                        &PTR____CFConstantStringClassReference_110f9d5b8,&PTR_DAT_1133fa650,
                        &PTR_DAT_1133fa6a8,1,0x10,0x1c);
    puRam00000001137fcc50 = puVar1;
  }
  return;
}



/* Entry: 10b88debc; end: 10b88df23; +[DiskUsageSamplingCofConfig descriptor] */

void FUN_10b88debc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcc58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cebfc0,
                        &PTR____CFConstantStringClassReference_110f9d5d8,&PTR_DAT_1133fa9c8,
                        &PTR_DAT_1133fa9e0,3,0x10,0x1c);
    puRam00000001137fcc58 = puVar1;
  }
  return;
}



/* Entry: 10b88df24; end: 10b88df27; -[SCPreferences invalidate] */

void FUN_10b88df24(void)

{
  return;
}



/* Entry: 10b88df28; end: 10b88df2b; -[SCPreferences invalidateWithCompletionHandler:] */

void FUN_10b88df28(void)

{
  return;
}



/* Entry: 10b88df2c; end: 10b88df33; -[SCPreferences objectForKeyedSubscript:] */

undefined8 FUN_10b88df2c(void)

{
  return 0;
}



/* Entry: 10b88df34; end: 10b88df37; -[SCPreferences setObject:forKeyedSubscript:] */

void FUN_10b88df34(void)

{
  return;
}



/* Entry: 10b88df38; end: 10b88df3f; -[SCPreferences objectForKey:] */

undefined8 FUN_10b88df38(void)

{
  return 0;
}



/* Entry: 10b88df40; end: 10b88df43; -[SCPreferences setObject:forKey:] */

void FUN_10b88df40(void)

{
  return;
}



/* Entry: 10b88df44; end: 10b88df4b; -[SCPreferences allKeysInNamespace:] */

undefined8 FUN_10b88df44(void)

{
  return 0;
}



/* Entry: 10b88df4c; end: 10b88df4f; -[SCPreferences addEntriesFromDictionary:] */

void FUN_10b88df4c(void)

{
  return;
}



/* Entry: 10b88df50; end: 10b88df53; -[SCPreferences deprecated_performChanges:completionQueue:completionHandler:] */

void FUN_10b88df50(void)

{
  return;
}



/* Entry: 10b88df54; end: 10b88df57; -[SCPreferences synchronize] */

void FUN_10b88df54(void)

{
  return;
}



/* Entry: 10b88df58; end: 10b88df5f; -[SCPreferences observe:callbackQueue:changeHandler:] */

undefined8 FUN_10b88df58(void)

{
  return 0;
}



/* Entry: 10b88df60; end: 10b88df8f; -[SCApplicationStorageServices .cxx_destruct] */

void FUN_10b88df60(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88df90; end: 10b88e003; -[SCUnauthenticatedStorageServices initWithPreferences:] */

undefined1 * FUN_10b88df90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270b948;
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



/* Entry: 10b88e004; end: 10b88e00b; -[SCUnauthenticatedStorageServices preferences] */

undefined8 FUN_10b88e004(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b88e00c; end: 10b88e017; -[SCUnauthenticatedStorageServices .cxx_destruct] */

void FUN_10b88e00c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88e018; end: 10b88e047; -[SCUserStorageServices .cxx_destruct] */

void FUN_10b88e018(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88e048; end: 10b88e35f;  */

void FUN_10b88e048(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uStack_70;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b88d8;
  _objc_opt_class(PTR_PTR_1126b88d8);
  lVar1 = param_1;
  func_0x00010beecc20(param_1,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf8d9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      lVar7 = lVar2;
      func_0x00010bf8d9a0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      uStack_70 = lVar9;
      func_0x00010c0f7580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
    }
    else {
      _objc_retain(lVar6);
      uStack_70 = lVar6;
    }
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar16 = PTR_PTR_1126e1978;
    _objc_alloc(PTR_PTR_1126e1978);
    lVar3 = lVar2;
    func_0x00010bf85f80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c0fb000();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010bf1a840(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar2;
    func_0x00010bf1ad00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00d380(puVar16,param_2,lVar5,uStack_70,lVar9,0,lVar12,lVar15);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uStack_70);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 10b88e360; end: 10b88e3b3; +[SCWebUtil sharedProcessPool] */

void FUN_10b88e360(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fcc70 != -1) {
    func_0x000107c27d9c(0x1137fcc70,&PTR___NSConcreteGlobalBlock_110d66e98);
  }
  uVar1 = uRam00000001137fcc68;
  _objc_retain(uRam00000001137fcc68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b88e3b4; end: 10b88e3df;  */

void FUN_10b88e3b4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___WKProcessPool_1126e1980;
  _objc_alloc_init();
  uVar1 = puRam00000001137fcc68;
  puRam00000001137fcc68 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b88e3e0; end: 10b88e433; +[SCWebUtil sharedDataStore] */

void FUN_10b88e3e0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fcc80 != -1) {
    func_0x000107c27d9c(0x1137fcc80,&PTR___NSConcreteGlobalBlock_110d66eb8);
  }
  uVar1 = uRam00000001137fcc78;
  _objc_retain(uRam00000001137fcc78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b88e434; end: 10b88e467;  */

void FUN_10b88e434(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___WKWebsiteDataStore_1126d6c38;
  func_0x00010bf69200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137fcc78;
  puRam00000001137fcc78 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b88e468; end: 10b88e4eb; +[SCWebUtil browserCachesAndCookiesSize] */

undefined * FUN_10b88e468(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd8a20(param_1);
  puVar3 = PTR_PTR_1126b24e8;
  func_0x00010bf278a0(PTR_PTR_1126b24e8,param_2,lVar2,0);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return puVar3 + param_1;
}



/* Entry: 10b88e4ec; end: 10b88e743; +[SCWebUtil clearBrowserCachesAndCookiesWithCompletionBlock:] */

void FUN_10b88e4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSHTTPCookieStorage_1126d9848;
  func_0x00010c22ba20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf519a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      func_0x00010bf6b980(puVar2);
      puVar8 = puVar8 + 1;
    } while (puVar4 != puVar8);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  uVar5 = 5;
  _NSSearchPathForDirectoriesInDomains(5,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar6;
  func_0x00010c25ce40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSURLCache_1126c7fe0;
  func_0x00010c22c4a0(PTR__OBJC_CLASS___NSURLCache_1126c7fe0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ab80();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___WKWebsiteDataStore_1126d6c38;
  func_0x00010bf69200(PTR__OBJC_CLASS___WKWebsiteDataStore_1126d6c38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___WKWebsiteDataStore_1126d6c38;
  func_0x00010bf00d60(PTR__OBJC_CLASS___WKWebsiteDataStore_1126d6c38);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf87080(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12bd00(puVar4);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf3aad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b88e744; end: 10b88e753; +[SCWebUtil clearBrowserCachesAndCookies] */

void FUN_10b88e744(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3aad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_clearBrowserCachesAndCookiesWith_1125ac458,
             &PTR___NSConcreteGlobalBlock_110d66ed8);
  return;
}



/* Entry: 10b88e754; end: 10b88e7bf; +[SCWebUtil markClearDiskCacheOnNextColdStartupIfExceeds:] */

void FUN_10b88e754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc0000000;
  pcStack_30 = FUN_10b88e7c0;
  puStack_28 = &UNK_11096b7c8;
  if (lRam00000001137fcc60 != -1) {
    uStack_20 = param_1;
    uStack_18 = param_3;
    func_0x000107c27d9c(0x1137fcc60,&puStack_40);
  }
  return;
}



/* Entry: 10b88e7c0; end: 10b88e82f;  */

void FUN_10b88e7c0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bdd8a20();
  if (*(ulong *)(param_1 + 0x28) < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be24e40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_retainAutorelease();
    iVar1 = (int)uVar4;
    func_0x00010bdc3520();
    _access();
    if (iVar1 != 0) {
      func_0x000107c31240(uVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10b88e830; end: 10b88e92f; +[SCWebUtil createOrUpdateWebViewConfigWhichScalesToPage:] */

void FUN_10b88e830(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
    _objc_opt_new();
  }
  else {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  puVar2 = puVar1;
  func_0x00010c291760();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___WKUserContentController_1126d44b8;
    _objc_opt_new(PTR__OBJC_CLASS___WKUserContentController_1126d44b8);
    func_0x00010c21e100(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c21e100(puVar1,param_2,puVar2);
  }
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
  _objc_alloc(PTR__OBJC_CLASS___WKUserScript_1126d6bd0);
  func_0x00010c04a760();
  puVar3 = PTR__OBJC_CLASS___WKUserContentController_1126d44b8;
  _objc_alloc_init(PTR__OBJC_CLASS___WKUserContentController_1126d44b8);
  func_0x00010befc7c0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b88e930; end: 10b88e9b3; +[SCWebUtil WKWebViewWithFrame:configuration:] */

void FUN_10b88e930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_opt_class(param_5);
  func_0x00010bdc3640(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10b88e9b4; end: 10b88eb17; +[SCWebUtil WKWebViewWithFrame:configuration:enableSharedCookie:] */

void FUN_10b88e9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,int param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_7);
  if (param_7 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
    _objc_opt_new();
  }
  else {
    _objc_retain(param_7);
    puVar1 = param_7;
  }
  if (param_8 != 0) {
    uVar2 = param_5;
    _objc_opt_class(param_5);
    func_0x00010c22be40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3700(puVar1,param_6,uVar2);
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010c2a46c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar1;
      func_0x00010c2a46c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c079ea0();
      _objc_release(puVar4);
      _objc_release(puVar3);
      if ((int)puVar5 == 0) goto LAB_10b88eac0;
    }
    _objc_opt_class(param_5);
    func_0x00010c22b940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225200(puVar1,param_6,param_5);
    _objc_release(param_5);
  }
LAB_10b88eac0:
  puVar3 = PTR_PTR_1126d6d58;
  _objc_alloc(PTR_PTR_1126d6d58);
  func_0x00010c014100(param_1,param_2,param_3,param_4);
  _objc_release(puVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b88eb18; end: 10b88eb63; +[SCWebUtil _guardFilePath] */

void FUN_10b88eb18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b88eb64; end: 10b88ebaf; +[SCWebUtil _cachePersistentDomainsPath] */

void FUN_10b88eb64(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b88ebb0; end: 10b88ecd3; +[SCWebUtil _persistentDomains] */

void FUN_10b88ebb0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bdd7be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (puVar1 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar3 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar2);
    puVar2 = puVar4;
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    if (puVar2 == (undefined *)0x0) {
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b88ecd4; end: 10b88ed4b; +[SCWebUtil _calculateWebKitCacheUsage] */

undefined * FUN_10b88ecd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b24e8;
  uVar1 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf278a0(puVar2,param_2,uVar1,0);
  _objc_release(uVar1);
  _objc_release(param_1);
  return puVar2;
}


