/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0058bb6c; end: 0058bb73; -[SCExtensionAPIRequestInfo countOfBytesReceived] */

undefined8 FUN_0058bb6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 0058bb74; end: 0058bb7b; -[SCExtensionAPIRequestInfo setCountOfBytesReceived:] */

void FUN_0058bb74(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 0058bb7c; end: 0058bb83; -[SCExtensionAPIRequestInfo countOfBytesSent] */

undefined8 FUN_0058bb7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 0058bb84; end: 0058bb8b; -[SCExtensionAPIRequestInfo setCountOfBytesSent:] */

void FUN_0058bb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 0058bb8c; end: 0058bb93; -[SCExtensionAPIRequestInfo finishTime] */

undefined8 FUN_0058bb8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 0058bb94; end: 0058bb9b; -[SCExtensionAPIRequestInfo setFinishTime:] */

void FUN_0058bb94(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xa0) = param_1;
  return;
}



/* Entry: 0058bb9c; end: 0058bba3; -[SCExtensionAPIRequestInfo isDownloadTask] */

undefined1 FUN_0058bb9c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 0058bba4; end: 0058bbab; -[SCExtensionAPIRequestInfo setIsDownloadTask:] */

void FUN_0058bba4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 0058bbac; end: 0058bbb3; -[SCExtensionAPIRequestInfo isPaused] */

undefined1 FUN_0058bbac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 0058bbb4; end: 0058bbbb; -[SCExtensionAPIRequestInfo setIsPaused:] */

void FUN_0058bbb4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 0058bbbc; end: 0058bbc3; -[SCExtensionAPIRequestInfo isResumed] */

undefined1 FUN_0058bbbc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 0058bbc4; end: 0058bbcb; -[SCExtensionAPIRequestInfo setIsResumed:] */

void FUN_0058bbc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 0058bbcc; end: 0058bbd3; -[SCExtensionAPIRequestInfo isResumable] */

undefined1 FUN_0058bbcc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 0058bbd4; end: 0058bbdb; -[SCExtensionAPIRequestInfo setIsResumable:] */

void FUN_0058bbd4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return;
}



/* Entry: 0058bbdc; end: 0058bbe3; -[SCExtensionAPIRequestInfo isNSURLSessionTaskStarted] */

undefined1 FUN_0058bbdc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 0058bbe4; end: 0058bbeb; -[SCExtensionAPIRequestInfo setIsNSURLSessionTaskStarted:] */

void FUN_0058bbe4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 0058bbec; end: 0058bbf3; -[SCExtensionAPIRequestInfo isUserInitiated] */

undefined1 FUN_0058bbec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 0058bbf4; end: 0058bbfb; -[SCExtensionAPIRequestInfo setIsUserInitiated:] */

void FUN_0058bbf4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x15) = param_3;
  return;
}



/* Entry: 0058bbfc; end: 0058bc03; -[SCExtensionAPIRequestInfo isStreaming] */

undefined1 FUN_0058bbfc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 0058bc04; end: 0058bc0b; -[SCExtensionAPIRequestInfo setIsStreaming:] */

void FUN_0058bc04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x16) = param_3;
  return;
}



/* Entry: 0058bc0c; end: 0058bc13; -[SCExtensionAPIRequestInfo resumeDataBytes] */

undefined8 FUN_0058bc0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 0058bc14; end: 0058bc1b; -[SCExtensionAPIRequestInfo setResumeDataBytes:] */

void FUN_0058bc14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 0058bc1c; end: 0058bc23; -[SCExtensionAPIRequestInfo bytesReceivedByCronet] */

undefined4 FUN_0058bc1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 0058bc24; end: 0058bc2b; -[SCExtensionAPIRequestInfo setBytesReceivedByCronet:] */

void FUN_0058bc24(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 0058bc2c; end: 0058bc33; -[SCExtensionAPIRequestInfo lastUserInitiatedTime] */

undefined8 FUN_0058bc2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 0058bc34; end: 0058bc3b; -[SCExtensionAPIRequestInfo setLastUserInitiatedTime:] */

void FUN_0058bc34(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xb0) = param_1;
  return;
}



/* Entry: 0058bc3c; end: 0058bc43; -[SCExtensionAPIRequestInfo accumulatedUserInitiatedNetworkLatency] */

undefined8 FUN_0058bc3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 0058bc44; end: 0058bc4b; -[SCExtensionAPIRequestInfo setAccumulatedUserInitiatedNetworkLatency:] */

void FUN_0058bc44(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 0058bc4c; end: 0058bc53; -[SCExtensionAPIRequestInfo requestCompleteBlock] */

undefined8 FUN_0058bc4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 0058bc54; end: 0058bc5b; -[SCExtensionAPIRequestInfo setRequestCompleteBlock:] */

void FUN_0058bc54(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0058bc5c; end: 0058bc63; -[SCExtensionAPIRequestInfo downloadCompleteBlock] */

undefined8 FUN_0058bc5c(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 0058bc64; end: 0058bc6b; -[SCExtensionAPIRequestInfo setDownloadCompleteBlock:] */

void FUN_0058bc64(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0058bc6c; end: 0058bc73; -[SCExtensionAPIRequestInfo trackingId] */

undefined8 FUN_0058bc6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 0058bc74; end: 0058bca3; -[SCExtensionAPIRequestInfo setTrackingId:] */

void FUN_0058bc74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058bca4; end: 0058bcab; -[SCExtensionAPIRequestInfo requestTrigger] */

undefined8 FUN_0058bca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 0058bcac; end: 0058bcb3; -[SCExtensionAPIRequestInfo setRequestTrigger:] */

void FUN_0058bcac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 0058bcb4; end: 0058bcbb; -[SCExtensionAPIRequestInfo contentAttribution] */

undefined8 FUN_0058bcb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 0058bcbc; end: 0058bcc3; -[SCExtensionAPIRequestInfo setContentAttribution:] */

void FUN_0058bcbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  return;
}



/* Entry: 0058bcc4; end: 0058bd9b; -[SCExtensionAPIRequestInfo .cxx_destruct] */

void FUN_0058bcc4(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0058bd9c; end: 0058becb;  */

void FUN_0058bd9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x0078aba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f980(param_2);
  func_0x00780a80(param_1);
  func_0x0078d600(param_2);
  uVar2 = param_1;
  func_0x00782340();
  if ((int)uVar2 != -1) {
    func_0x00782340(param_1);
    func_0x0078db20(param_2);
  }
  uVar2 = param_1;
  func_0x00791b40();
  if ((int)uVar2 != -1) {
    func_0x00791b40(param_1);
    func_0x00790360(param_2);
  }
  uVar2 = param_1;
  func_0x00780ac0();
  if ((int)uVar2 != -1) {
    func_0x00780ac0(param_1);
    func_0x0078d620(param_2);
  }
  uVar2 = param_1;
  func_0x0078b700();
  if ((int)uVar2 != -1) {
    func_0x0078b700(param_1);
    func_0x0078fd40(param_2);
  }
  uVar2 = param_1;
  func_0x0078bb00();
  if ((int)uVar2 != -1) {
    func_0x0078bb00(param_1);
    func_0x0078ffc0(param_2);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0058becc; end: 0058bf47; -[SCExtensionGrpcLogger initWithBlizzardLogger:] */

undefined1 * FUN_0058becc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3ef8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00782620(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0058bf48; end: 0058c50f; -[SCExtensionGrpcLogger logUnaryBlizzard:] */

void FUN_0058bf48(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) goto LAB_0058c4ec;
  puVar1 = PTR_PTR_00ac30a8;
  _objc_opt_new(PTR_PTR_00ac30a8);
  func_0x0078ed20();
  func_0x0078f240(puVar1);
  lVar2 = param_3;
  func_0x0078bd20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00780120();
  _objc_release(lVar2);
  func_0x0078e340(puVar1);
  func_0x00780aa0(param_3);
  func_0x0078d620(puVar1);
  func_0x0078bae0(param_3);
  func_0x0078f260(puVar1);
  func_0x0078bae0(param_3);
  func_0x00790ce0(puVar1);
  func_0x00789900(param_3);
  func_0x00780aa0(param_3);
  func_0x00790cc0(puVar1);
  lVar2 = param_3;
  func_0x0078bd20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x007844a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e560(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x0078bd20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x0078c880();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f6c0(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x0078b820(param_3);
  func_0x0078fca0(puVar1);
  func_0x0078fc40(puVar1);
  func_0x007924c0(param_3);
  func_0x00790880(puVar1);
  func_0x00791ca0(param_3);
  func_0x0078e360(puVar1);
  func_0x0078baa0(param_3);
  func_0x0078ffa0(puVar1);
  lVar2 = param_3;
  func_0x0078ba40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x0078ba20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) goto LAB_0058c17c;
  }
  else {
    _objc_release();
LAB_0058c17c:
    puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
    lVar2 = param_3;
    func_0x0078ba40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x0078ba20();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078c100(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078ff80(puVar1);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x0078b7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078fde0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00792740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00790940(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x0077f560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x0077f560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078cd40(puVar1);
    _objc_release(lVar2);
    func_0x0077f500(param_3);
    func_0x0078cd20(puVar1);
    func_0x0078cd60(puVar1);
  }
  lVar2 = param_3;
  func_0x0077f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_00ac3060;
  if (lVar2 != 0) {
    func_0x0077f0e0(param_3);
    func_0x0077c4a0(puVar4);
    func_0x0078cc40(puVar1);
    lVar2 = param_3;
    func_0x0077f0a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078cc20(puVar1);
    _objc_release(lVar2);
    func_0x0077f060(param_3);
    func_0x0078cc00(puVar1);
  }
  lVar2 = param_3;
  func_0x0078c7c0();
  if (lVar2 != -1) {
    func_0x0078c7c0(param_3);
    func_0x00790440(puVar1);
  }
  lVar2 = param_3;
  func_0x00780ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00780ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00790bc0(puVar1);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x0078bd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00781220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x0078bd20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00781220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078e700(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x0078bd20(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_0058bd9c();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x0078bd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x0078c7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x007882e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar5 != 0) {
    lVar2 = param_3;
    func_0x0078bd20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x0078c7a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x007903e0(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00788ac0(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar1);
LAB_0058c4ec:
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0058c510; end: 0058c90b; -[SCExtensionGrpcLogger logStreamBlizzard:] */

void FUN_0058c510(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) != 0) {
    puVar2 = PTR_PTR_00ac30b8;
    _objc_opt_new(PTR_PTR_00ac30b8);
    func_0x0078ed20();
    lVar3 = param_3;
    func_0x0078bd20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x007844a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078e560(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x0078bd20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x0078c880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00790460(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x0078bd20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00780120();
    _objc_release(lVar3);
    func_0x0078d3c0(puVar2);
    func_0x0077fe40(param_3);
    func_0x0078d160(puVar2);
    func_0x0077fe00(param_3);
    func_0x0078d140(puVar2);
    func_0x0077fe60(param_3);
    func_0x0078d180(puVar2);
    func_0x00789660(param_3);
    func_0x0078f0e0(puVar2);
    func_0x00789640(param_3);
    func_0x0078f0c0(puVar2);
    func_0x00789680(param_3);
    func_0x0078f100(puVar2);
    lVar3 = param_3;
    func_0x0078b7a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078fde0(puVar2);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00792740(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00790940(puVar2);
    _objc_release(lVar3);
    func_0x007924c0(param_3);
    func_0x00790880(puVar2);
    func_0x00791ca0(param_3);
    func_0x00790660(puVar2);
    func_0x0078c8e0(param_3);
    func_0x00790840(puVar2);
    lVar3 = param_3;
    func_0x0077f560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar3 = param_3;
      func_0x0077f560(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077fbc0();
      func_0x0078cd40(puVar2);
      _objc_release(lVar3);
      func_0x0077f500(param_3);
      func_0x0078cd20(puVar2);
      func_0x0078cd60(puVar2);
    }
    lVar3 = param_3;
    func_0x00783160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar3 = param_3;
      func_0x00783160(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078df40(puVar2);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x0078c7c0();
    if (lVar3 != -1) {
      func_0x0078c7c0(param_3);
      func_0x00790440(puVar2);
    }
    lVar3 = param_3;
    func_0x0077f0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR_PTR_00ac3060;
    if (lVar3 != 0) {
      func_0x0077f0e0(param_3);
      func_0x0077c4a0(puVar1);
      func_0x0078cc40(puVar2);
      lVar3 = param_3;
      func_0x0077f0a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077fbc0();
      func_0x0078cc20(puVar2);
      _objc_release(lVar3);
      func_0x0077f060(param_3);
      func_0x0078cc00(puVar2);
    }
    func_0x00789900(param_3);
    func_0x00790cc0(puVar2);
    func_0x0078c8e0(param_3);
    func_0x00790ce0(puVar2);
    lVar3 = param_3;
    func_0x0078bd20(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_0058bd9c();
    _objc_release(lVar3);
    func_0x00788ac0(*(undefined8 *)(param_1 + 8));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0058c90c; end: 0058c913; -[SCExtensionGrpcLogger logNetworkEventEnabled] */

undefined8 FUN_0058c90c(void)

{
  return 0;
}



/* Entry: 0058c914; end: 0058c917; -[SCExtensionGrpcLogger logRequestStarted:serviceMethodName:feature:streaming:] */

void FUN_0058c914(void)

{
  return;
}



/* Entry: 0058c918; end: 0058c927; +[SCExtensionGrpcLogger _convertArgosType:] */

ulong FUN_0058c918(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 - 1;
  if (2 < uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 0058c928; end: 0058c92b; -[SCExtensionGrpcLogger logRequestFinished:serviceMethodName:feature:streaming:succeeded:] */

void FUN_0058c928(void)

{
  return;
}



/* Entry: 0058c92c; end: 0058c92f; -[SCExtensionGrpcLogger logMessageReceived:] */

void FUN_0058c92c(void)

{
  return;
}



/* Entry: 0058c930; end: 0058c93f; -[SCExtensionGrpcLogger enableNativeClientLogging] */

void FUN_0058c930(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078dd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac30c0,PTR_s_setEventLoggerDelegate__00abe468,param_1);
  return;
}



/* Entry: 0058c940; end: 0058c94b; -[SCExtensionGrpcLogger .cxx_destruct] */

void FUN_0058c940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0058c94c; end: 0058c9d3; -[SCExtensionRequestParams initWithTrackingId:requestTrigger:contentAttribution:] */

undefined1 *
FUN_0058c94c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR__OBJC_CLASS___SCExtensionRequestParams_00ac3f00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0058c9d4; end: 0058c9db; -[SCExtensionRequestParams trackingId] */

undefined8 FUN_0058c9d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0058c9dc; end: 0058c9e3; -[SCExtensionRequestParams requestTrigger] */

undefined8 FUN_0058c9dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0058c9e4; end: 0058c9eb; -[SCExtensionRequestParams contentAttribution] */

undefined8 FUN_0058c9e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0058c9ec; end: 0058c9f7; -[SCExtensionRequestParams .cxx_destruct] */

void FUN_0058c9ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0058c9f8; end: 0058ca93; -[SCExtensionNetworkingRetryConfig initWithCoder:] */

undefined1 *
FUN_0058c9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_00ac3f08;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00781a60();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    func_0x00781a80(param_4);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    uVar2 = param_4;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0058ca94; end: 0058caf3; -[SCExtensionNetworkingRetryConfig initWithEnableRetry:retryTimeIntervalSecs:maxRetries:] */

void FUN_0058ca94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac3f08;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 0058caf4; end: 0058cb17; -[SCExtensionNetworkingRetryConfig copyWithZone:] */

undefined8 FUN_0058caf4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 0058cb18; end: 0058cb8b; -[SCExtensionNetworkingRetryConfig encodeWithCoder:] */

void FUN_0058cb18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x007826a0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_00a2a520);
  func_0x00782700(*(undefined8 *)(param_1 + 0x10),param_3,param_2,
                  &PTR____CFConstantStringClassReference_00a2a540);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                  &PTR____CFConstantStringClassReference_00a2a560);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0058cb8c; end: 0058cc0b; -[SCExtensionNetworkingRetryConfig hash] */

ulong * FUN_0058cb8c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  double dVar5;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  func_0x0076fd30(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] ||
          (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        dVar5 = ABS(*(double *)((long)puVar1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar5
                        );
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 0058cc0c; end: 0058ccd7; -[SCExtensionNetworkingRetryConfig isEqual:] */

bool FUN_0058cc0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 0058ccd8; end: 0058ccdf; -[SCExtensionNetworkingRetryConfig enableRetry] */

undefined1 FUN_0058ccd8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 0058cce0; end: 0058cce7; -[SCExtensionNetworkingRetryConfig retryTimeIntervalSecs] */

undefined8 FUN_0058cce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0058cce8; end: 0058ccef; -[SCExtensionNetworkingRetryConfig maxRetries] */

undefined8 FUN_0058cce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0058ccf0; end: 0058cd63; -[SCExtensionNetworkingClientConfigs initWithCoder:] */

undefined1 * FUN_0058ccf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3f10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0058cd64; end: 0058cdab; -[SCExtensionNetworkingClientConfigs initWithNetworkHttpMaxConnectionPerHost:] */

void FUN_0058cd64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3f10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 0058cdac; end: 0058cdcf; -[SCExtensionNetworkingClientConfigs copyWithZone:] */

undefined8 FUN_0058cdac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 0058cdd0; end: 0058cde7; -[SCExtensionNetworkingClientConfigs encodeWithCoder:] */

void FUN_0058cdd0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00782770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_3,PTR_s_encodeInteger_forKey__00abb6d0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_00a23be0);
  return;
}



/* Entry: 0058cde8; end: 0058cdef; -[SCExtensionNetworkingClientConfigs hash] */

undefined8 FUN_0058cde8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0058cdf0; end: 0058ce77; -[SCExtensionNetworkingClientConfigs isEqual:] */

bool FUN_0058cdf0(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 0058ce78; end: 0058ce7f; -[SCExtensionNetworkingClientConfigs networkHttpMaxConnectionPerHost] */

undefined8 FUN_0058ce78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0058ce80; end: 0058cf23; -[AFQueryStringPair initWithField:value:] */

undefined1 *
FUN_0058ce80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3f18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0078dfa0(puVar1);
    func_0x00791140(puVar1);
    _objc_retain(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 0058cf24; end: 0058d0c7; -[AFQueryStringPair URLEncodedStringValueWithEncoding:] */

void FUN_0058cf24(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = param_1;
  func_0x00793580();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00793580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNull_00ac2f90;
    func_0x00789b20(PTR__OBJC_CLASS___NSNull_00ac2f90);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x007877e0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    if ((int)puVar4 == 0) {
      puVar2 = param_1;
      func_0x00783220();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00781e40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_0058d0c8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00793580();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00781e40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      FUN_0058d0c8();
      _objc_retainAutoreleasedReturnValue();
      func_0x0078c100(puVar1,param_2,&PTR____CFConstantStringClassReference_00a2a580);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(param_1);
      _objc_release(puVar4);
      goto LAB_0058d098;
    }
  }
  func_0x00783220(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00781e40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  FUN_0058d0c8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
LAB_0058d098:
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0058d0c8; end: 0058d167;  */

void FUN_0058d0c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
  _objc_retain();
  func_0x0077bc20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00789700();
  _objc_release(puVar1);
  func_0x0077e460(puVar2,param_2,&PTR____CFConstantStringClassReference_00a2a880);
  func_0x0078b2a0(puVar2,param_2,&PTR____CFConstantStringClassReference_00a2a860);
  uVar3 = param_1;
  func_0x00791e40(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0058d168; end: 0058d16f; -[AFQueryStringPair field] */

undefined8 FUN_0058d168(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0058d170; end: 0058d19f; -[AFQueryStringPair setField:] */

void FUN_0058d170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058d1a0; end: 0058d1a7; -[AFQueryStringPair value] */

undefined8 FUN_0058d1a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0058d1a8; end: 0058d1d7; -[AFQueryStringPair setValue:] */

void FUN_0058d1a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058d1d8; end: 0058d207; -[AFQueryStringPair .cxx_destruct] */

void FUN_0058d1d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0058d208; end: 0058d7fb;  */

/* WARNING: Possible PIC construction at 0x0058d270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0058d53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0058d654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0058d728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0058d658) */
/* WARNING: Removing unreachable block (ram,0x0058d68c) */
/* WARNING: Removing unreachable block (ram,0x0058d6a8) */
/* WARNING: Removing unreachable block (ram,0x0058d540) */
/* WARNING: Removing unreachable block (ram,0x0058d564) */
/* WARNING: Removing unreachable block (ram,0x0058d274) */
/* WARNING: Removing unreachable block (ram,0x0058d294) */
/* WARNING: Removing unreachable block (ram,0x0058d2a0) */
/* WARNING: Removing unreachable block (ram,0x0058d2a4) */
/* WARNING: Removing unreachable block (ram,0x0058d2b4) */
/* WARNING: Removing unreachable block (ram,0x0058d2bc) */
/* WARNING: Removing unreachable block (ram,0x0058d2f8) */
/* WARNING: Removing unreachable block (ram,0x0058d314) */
/* WARNING: Removing unreachable block (ram,0x0058d384) */
/* WARNING: Removing unreachable block (ram,0x0058d360) */
/* WARNING: Removing unreachable block (ram,0x0058d72c) */
/* WARNING: Removing unreachable block (ram,0x0058d758) */

undefined1 * FUN_0058d208(undefined **param_1,undefined **param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  undefined **unaff_x22;
  undefined **unaff_x23;
  ulong uVar21;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined8 uVar22;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_68;
  
  puVar11 = &stack0xfffffffffffffff0;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar22 = 0x58d274;
  puVar3 = &uStack_130;
  ppuVar5 = (undefined **)0x0;
  ppuVar9 = param_1;
SUB_0058d388:
  *(undefined ***)((long)puVar3 + -0x60) = unaff_x28;
  *(undefined ***)((long)puVar3 + -0x58) = unaff_x27;
  *(undefined ***)((long)puVar3 + -0x50) = unaff_x26;
  *(undefined ***)((long)puVar3 + -0x48) = unaff_x25;
  *(undefined ***)((long)puVar3 + -0x40) = unaff_x24;
  *(undefined ***)((long)puVar3 + -0x38) = unaff_x23;
  *(undefined ***)((long)puVar3 + -0x30) = unaff_x22;
  *(undefined **)((long)puVar3 + -0x28) = puVar4;
  *(undefined ***)((long)puVar3 + -0x20) = param_2;
  *(undefined ***)((long)puVar3 + -0x18) = ppuVar9;
  *(undefined1 **)((long)puVar3 + -0x10) = puVar11;
  *(undefined8 *)((long)puVar3 + -8) = uVar22;
  puVar11 = (undefined1 *)((long)puVar3 + -0x10);
  *(undefined8 *)((long)puVar3 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  _objc_retain();
  _objc_retain(param_1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  ppuVar7 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar6);
  ppuVar8 = param_1;
  ppuVar9 = ppuVar5;
  param_2 = param_1;
  if (((ulong)ppuVar7 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSArray_00ac2c28;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_00ac2c28);
    ppuVar7 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar6);
    if (((ulong)ppuVar7 & 1) == 0) {
      puVar6 = PTR__OBJC_CLASS___NSSet_00ac2a68;
      _objc_opt_class(PTR__OBJC_CLASS___NSSet_00ac2a68);
      ppuVar7 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar6);
      if (((ulong)ppuVar7 & 1) == 0) {
        unaff_x22 = (undefined **)PTR_PTR_00ac30d0;
        _objc_alloc();
        func_0x00785540();
        func_0x0077e720(puVar4);
        ppuVar8 = unaff_x22;
        goto LAB_0058d778;
      }
      _objc_retain(param_1);
      *(undefined8 *)((long)puVar3 + -0x2b8) = 0;
      *(undefined8 *)((long)puVar3 + -0x2c0) = 0;
      *(undefined8 *)((long)puVar3 + -0x2a8) = 0;
      *(undefined8 *)((long)puVar3 + -0x2b0) = 0;
      *(undefined8 *)((long)puVar3 + -0x298) = 0;
      *(undefined8 *)((long)puVar3 + -0x2a0) = 0;
      *(undefined8 *)((long)puVar3 + -0x288) = 0;
      *(undefined8 *)((long)puVar3 + -0x290) = 0;
      ppuVar7 = param_1;
      func_0x00780ea0();
      if (ppuVar7 == (undefined **)0x0) goto LAB_0058d778;
      unaff_x24 = (undefined **)**(undefined8 **)((long)puVar3 + -0x2b0);
      unaff_x25 = (undefined **)0x0;
      if ((undefined **)**(undefined8 **)((long)puVar3 + -0x2b0) != unaff_x24) {
        _objc_enumerationMutation(param_1);
      }
      puVar1 = (undefined8 *)((long)puVar3 + -0x2b8);
      uVar22 = 0x58d72c;
      puVar3 = (undefined8 *)((long)puVar3 + -0x2e0);
      param_1 = *(undefined ***)*puVar1;
      unaff_x22 = ppuVar7;
    }
    else {
      _objc_retain(param_1);
      *(undefined8 *)((long)puVar3 + -0x278) = 0;
      *(undefined8 *)((long)puVar3 + -0x280) = 0;
      *(undefined8 *)((long)puVar3 + -0x268) = 0;
      *(undefined8 *)((long)puVar3 + -0x270) = 0;
      *(undefined8 *)((long)puVar3 + -600) = 0;
      *(undefined8 *)((long)puVar3 + -0x260) = 0;
      *(undefined8 *)((long)puVar3 + -0x248) = 0;
      *(undefined8 *)((long)puVar3 + -0x250) = 0;
      ppuVar7 = param_1;
      func_0x00780ea0();
      if (ppuVar7 == (undefined **)0x0) goto LAB_0058d778;
      unaff_x26 = (undefined **)**(undefined8 **)((long)puVar3 + -0x270);
      unaff_x27 = &PTR_s_initWithExecutionStartDateNanos__00ac2000;
      unaff_x28 = (undefined **)0x0;
      if ((undefined **)**(undefined8 **)((long)puVar3 + -0x270) != unaff_x26) {
        _objc_enumerationMutation(param_1);
      }
      unaff_x24 = (undefined **)**(undefined8 **)((long)puVar3 + -0x278);
      *(undefined ***)((long)puVar3 + -0x2e0) = ppuVar5;
      unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x0078c100();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = 0x58d658;
      puVar3 = (undefined8 *)((long)puVar3 + -0x2e0);
      ppuVar5 = unaff_x25;
      param_1 = unaff_x24;
      unaff_x22 = &PTR____CFConstantStringClassReference_00a2a600;
      unaff_x23 = ppuVar7;
    }
    goto SUB_0058d388;
  }
  _objc_retain(param_1);
  unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSSortDescriptor_00ac30c8;
  func_0x007919e0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)((long)puVar3 + -0x238) = 0;
  *(undefined8 *)((long)puVar3 + -0x240) = 0;
  *(undefined8 *)((long)puVar3 + -0x228) = 0;
  *(undefined8 *)((long)puVar3 + -0x230) = 0;
  *(undefined8 *)((long)puVar3 + -0x218) = 0;
  *(undefined8 *)((long)puVar3 + -0x220) = 0;
  *(undefined8 *)((long)puVar3 + -0x208) = 0;
  *(undefined8 *)((long)puVar3 + -0x210) = 0;
  unaff_x24 = param_1;
  func_0x0077eae0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined ***)((long)puVar3 + -0x2c8) = unaff_x22;
  *(undefined ***)((long)puVar3 + -0xf8) = unaff_x22;
  unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f200();
  _objc_retainAutoreleasedReturnValue();
  unaff_x23 = unaff_x24;
  func_0x00791a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(unaff_x25);
  _objc_release(unaff_x24);
  ppuVar7 = unaff_x23;
  func_0x00780ea0();
  if (ppuVar7 != (undefined **)0x0) {
    unaff_x22 = (undefined **)**(undefined8 **)((long)puVar3 + -0x230);
    unaff_x24 = ppuVar7;
    do {
      unaff_x25 = (undefined **)0x0;
      do {
        if ((undefined **)**(undefined8 **)((long)puVar3 + -0x230) != unaff_x22) {
          _objc_enumerationMutation(unaff_x23);
        }
        unaff_x28 = *(undefined ***)(*(long *)((long)puVar3 + -0x238) + (long)unaff_x25 * 8);
        unaff_x27 = param_1;
        func_0x00789ea0();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x27 != (undefined **)0x0) {
          if (ppuVar5 != (undefined **)0x0) {
            *(undefined ***)((long)puVar3 + -0x2e0) = ppuVar5;
            *(undefined ***)((long)puVar3 + -0x2d8) = unaff_x28;
            unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
            func_0x0078c100();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = unaff_x26;
          }
          uVar22 = 0x58d540;
          puVar3 = (undefined8 *)((long)puVar3 + -0x2e0);
          ppuVar5 = unaff_x28;
          param_1 = unaff_x27;
          goto SUB_0058d388;
        }
        _objc_release(0);
        unaff_x25 = (undefined **)((long)unaff_x25 + 1);
      } while (unaff_x24 != unaff_x25);
      unaff_x24 = unaff_x23;
      func_0x00780ea0();
    } while (unaff_x24 != (undefined **)0x0);
  }
  _objc_release(unaff_x23);
  _objc_release(*(undefined8 *)((long)puVar3 + -0x2c8));
LAB_0058d778:
  _objc_release(ppuVar8);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)puVar3 + -0x70)) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  puVar10 = PTR__OBJC_CLASS___NSException_00ac2f30;
  puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
  *(undefined ***)((long)puVar3 + -0x310) = unaff_x22;
  *(undefined **)((long)puVar3 + -0x308) = puVar4;
  *(undefined ***)((long)puVar3 + -0x300) = param_1;
  *(undefined ***)((long)puVar3 + -0x2f8) = ppuVar5;
  *(undefined1 **)((long)puVar3 + -0x2f0) = puVar11;
  *(code **)((long)puVar3 + -0x2e8) = FUN_0058d7fc;
  uVar20 = *(ulong *)PTR__NSInternalInconsistencyException_00999c88;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  *(undefined ***)((long)puVar3 + -800) = ppuVar9;
  func_0x0078c100();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00782f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar6);
  _objc_release(ppuVar9);
  puVar4 = puVar10;
  _objc_exception_throw();
  *(undefined ***)((long)puVar3 + -0x380) = unaff_x28;
  *(undefined ***)((long)puVar3 + -0x378) = unaff_x27;
  *(undefined ***)((long)puVar3 + -0x370) = unaff_x26;
  *(undefined ***)((long)puVar3 + -0x368) = unaff_x25;
  *(undefined ***)((long)puVar3 + -0x360) = unaff_x24;
  *(undefined ***)((long)puVar3 + -0x358) = unaff_x23;
  *(undefined ***)((long)puVar3 + -0x350) = ppuVar9;
  *(undefined **)((long)puVar3 + -0x348) = puVar6;
  *(ulong *)((long)puVar3 + -0x340) = uVar20;
  *(undefined **)((long)puVar3 + -0x338) = puVar10;
  *(undefined1 **)((long)puVar3 + -0x330) = (undefined1 *)((long)puVar3 + -0x2f0);
  *(code **)((long)puVar3 + -0x328) = FUN_0058d89c;
  _objc_retain(uVar21);
  *(undefined **)((long)puVar3 + -0x398) = puVar4;
  *(undefined **)((long)puVar3 + -0x390) = PTR_PTR_00ac3f20;
  puVar11 = (undefined1 *)((long)puVar3 + -0x398);
  _objc_msgSendSuper2(puVar11,PTR_s_init_00abbf70);
  if (puVar11 == (undefined1 *)0x0) goto LAB_0058dcf4;
  uVar20 = uVar21;
  func_0x0078a400();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar20;
  func_0x007882e0();
  uVar14 = uVar21;
  if (uVar12 == 0) {
LAB_0058d964:
    _objc_release(uVar20);
  }
  else {
    uVar12 = uVar21;
    func_0x0077e1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00784380();
    _objc_release(uVar12);
    _objc_release(uVar20);
    if ((uVar13 & 1) == 0) {
      func_0x0077bac0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar21;
      goto LAB_0058d964;
    }
  }
  func_0x0078cf20(puVar11);
  func_0x00790860(puVar11);
  func_0x0078f620(puVar11);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  func_0x00781fe0(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d9c0(puVar11);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSLocale_00ac2990;
  func_0x0078a840(PTR__OBJC_CLASS___NSLocale_00ac2990);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)puVar3 + -0x3c0) = PTR___NSConcreteStackBlock_00999f30;
  uVar22 = 0xc2000000;
  *(undefined8 *)((long)puVar3 + -0x3b8) = 0xc2000000;
  *(code **)((long)puVar3 + -0x3b0) = FUN_0058dd28;
  *(undefined **)((long)puVar3 + -0x3a8) = &UNK_00a025d0;
  _objc_retain(puVar4);
  *(undefined **)((long)puVar3 + -0x3a0) = puVar4;
  func_0x00782c00(puVar6);
  _objc_release(puVar6);
  *(undefined **)((long)puVar3 + -0x3e0) = puVar4;
  func_0x00780820(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d9a0(puVar11);
  _objc_release(puVar4);
  *(undefined **)((long)puVar3 + -0x400) = PTR__OBJC_CLASS___NSString_00ac2988;
  puVar4 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)puVar3 + -1000) = puVar4;
  func_0x00784940();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)puVar3 + -0x3f0) = puVar4;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)puVar3 + -0x3c8) = puVar4;
  *(undefined **)((long)puVar3 + -0x3f8) = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
    func_0x00788c00();
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)((long)puVar3 + -0x418) = puVar4;
    func_0x00784940();
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)((long)puVar3 + -0x420) = puVar4;
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)((long)puVar3 + -0x3c8) = puVar4;
  }
  *(ulong *)((long)puVar3 + -0x3d8) = uVar14;
  _CFBundleGetMainBundle();
  _CFBundleGetValueForInfoDictionaryKey();
  *(undefined **)((long)puVar3 + -0x3d0) = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
    func_0x00788c00();
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)((long)puVar3 + -0x408) = puVar6;
    func_0x00784940();
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)((long)puVar3 + -0x410) = puVar6;
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)((long)puVar3 + -0x3d0) = puVar6;
  }
  puVar6 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
  func_0x007812c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x007894c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
  func_0x007812c0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x007926e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___UIScreen_00ac2c50;
  func_0x00788c60();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar18 & 1) == 0) {
    uVar22 = 0x3ff0000000000000;
  }
  else {
    unaff_x25 = (undefined **)PTR__OBJC_CLASS___UIScreen_00ac2c50;
    func_0x00788c60(PTR__OBJC_CLASS___UIScreen_00ac2c50);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078c200();
  }
  *(undefined8 *)((long)puVar3 + -0x430) = uVar22;
  *(undefined **)((long)puVar3 + -0x440) = puVar10;
  *(undefined **)((long)puVar3 + -0x438) = puVar16;
  *(undefined8 *)((long)puVar3 + -0x450) = *(undefined8 *)((long)puVar3 + -0x3c8);
  *(undefined8 *)((long)puVar3 + -0x448) = *(undefined8 *)((long)puVar3 + -0x3d0);
  uVar22 = *(undefined8 *)((long)puVar3 + -0x400);
  func_0x007921a0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d9a0(puVar11);
  _objc_release(uVar22);
  if (((ulong)puVar18 & 1) != 0) {
    _objc_release(unaff_x25);
  }
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar10);
  _objc_release(puVar6);
  uVar22 = *(undefined8 *)((long)puVar3 + -0x410);
  uVar2 = *(undefined8 *)((long)puVar3 + -0x408);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(*(undefined8 *)((long)puVar3 + -0x3d0));
    _objc_release(uVar22);
    _objc_release(uVar2);
  }
  uVar21 = *(ulong *)((long)puVar3 + -0x3d8);
  lVar19 = *(long *)((long)puVar3 + -0x3f8);
  if (lVar19 == 0) {
    _objc_release(*(undefined8 *)((long)puVar3 + -0x3c8));
    _objc_release(*(undefined8 *)((long)puVar3 + -0x420));
    _objc_release(*(undefined8 *)((long)puVar3 + -0x418));
  }
  _objc_release(lVar19);
  _objc_release(*(undefined8 *)((long)puVar3 + -0x3f0));
  _objc_release(*(undefined8 *)((long)puVar3 + -1000));
  _objc_retain(puVar11);
  _objc_release(*(undefined8 *)((long)puVar3 + -0x3a0));
  _objc_release(*(undefined8 *)((long)puVar3 + -0x3e0));
LAB_0058dcf4:
  _objc_release(uVar21);
  _objc_release(puVar11);
  return puVar11;
}



/* Entry: 0058d7fc; end: 0058d89b; -[AFHTTPClient init] */

undefined ** FUN_0058d7fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *unaff_x25;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_f0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  
  puVar2 = PTR__OBJC_CLASS___NSException_00ac2f30;
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  uVar19 = *(ulong *)PTR__NSInternalInconsistencyException_00999c88;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00782f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_exception_throw();
  _objc_retain(uVar19);
  puStack_b0 = PTR_PTR_00ac3f20;
  ppuVar3 = &puStack_b8;
  puStack_b8 = puVar2;
  _objc_msgSendSuper2(ppuVar3,PTR_s_init_00abbf70);
  if (ppuVar3 == (undefined **)0x0) goto LAB_0058dcf4;
  uVar4 = uVar19;
  func_0x0078a400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x007882e0();
  uVar7 = uVar19;
  if (uVar5 == 0) {
LAB_0058d964:
    _objc_release(uVar4);
    uVar19 = uVar7;
  }
  else {
    uVar5 = uVar19;
    func_0x0077e1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00784380();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar6 & 1) == 0) {
      func_0x0077bac0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar19;
      goto LAB_0058d964;
    }
  }
  func_0x0078cf20(ppuVar3);
  func_0x00790860(ppuVar3);
  func_0x0078f620(ppuVar3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  func_0x00781fe0(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d9c0(ppuVar3);
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSLocale_00ac2990;
  func_0x0078a840(PTR__OBJC_CLASS___NSLocale_00ac2990);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  func_0x00782c00(puVar1);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00780820(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d9a0(ppuVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  puVar8 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00784940();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  if (puVar10 == (undefined *)0x0) {
    puStack_138 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
    func_0x00788c00();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puStack_138;
    func_0x00784940();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puStack_140;
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar12 = puVar11;
  _CFBundleGetMainBundle();
  _CFBundleGetValueForInfoDictionaryKey();
  puStack_f0 = puVar12;
  if (puVar12 == (undefined *)0x0) {
    puStack_128 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
    func_0x00788c00();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puStack_128;
    func_0x00784940();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puStack_130;
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar13 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
  func_0x007812c0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x007894c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
  func_0x007812c0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x007926e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___UIScreen_00ac2c50;
  func_0x00788c60();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar18 & 1) != 0) {
    unaff_x25 = PTR__OBJC_CLASS___UIScreen_00ac2c50;
    func_0x00788c60(PTR__OBJC_CLASS___UIScreen_00ac2c50);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078c200();
  }
  func_0x007921a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d9a0(ppuVar3);
  _objc_release(puVar1);
  if (((ulong)puVar18 & 1) != 0) {
    _objc_release(unaff_x25);
  }
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  if (puVar12 == (undefined *)0x0) {
    _objc_release(puStack_f0);
    _objc_release(puStack_130);
    _objc_release(puStack_128);
  }
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar11);
    _objc_release(puStack_140);
    _objc_release(puStack_138);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_retain(ppuVar3);
  _objc_release(puVar2);
  _objc_release(puVar2);
LAB_0058dcf4:
  _objc_release(uVar19);
  _objc_release(ppuVar3);
  return ppuVar3;
}



/* Entry: 0058d89c; end: 0058dd27; -[AFHTTPClient initWithBaseURL:] */

undefined8 * FUN_0058d89c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *unaff_x25;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_b0;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  puStack_70 = PTR_PTR_00ac3f20;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 == (undefined8 *)0x0) goto LAB_0058dcf4;
  uVar2 = param_3;
  func_0x0078a400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x007882e0();
  uVar5 = param_3;
  if (uVar3 == 0) {
LAB_0058d964:
    _objc_release(uVar2);
    param_3 = uVar5;
  }
  else {
    uVar3 = param_3;
    func_0x0077e1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00784380();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      func_0x0077bac0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      goto LAB_0058d964;
    }
  }
  func_0x0078cf20(puVar1);
  func_0x00790860(puVar1);
  func_0x0078f620(puVar1);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  func_0x00781fe0(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d9c0(puVar1);
  _objc_release(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSLocale_00ac2990;
  func_0x0078a840(PTR__OBJC_CLASS___NSLocale_00ac2990);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar7);
  func_0x00782c00(puVar6);
  _objc_release(puVar6);
  puVar6 = puVar7;
  func_0x00780820(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d9a0(puVar1);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
  puVar8 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00784940();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  if (puVar10 == (undefined *)0x0) {
    puStack_f8 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
    func_0x00788c00();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puStack_f8;
    func_0x00784940();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puStack_100;
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar12 = puVar11;
  _CFBundleGetMainBundle();
  _CFBundleGetValueForInfoDictionaryKey();
  puStack_b0 = puVar12;
  if (puVar12 == (undefined *)0x0) {
    puStack_e8 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
    func_0x00788c00();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puStack_e8;
    func_0x00784940();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puStack_f0;
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar13 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
  func_0x007812c0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x007894c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
  func_0x007812c0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x007926e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___UIScreen_00ac2c50;
  func_0x00788c60();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar18 & 1) != 0) {
    unaff_x25 = PTR__OBJC_CLASS___UIScreen_00ac2c50;
    func_0x00788c60(PTR__OBJC_CLASS___UIScreen_00ac2c50);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078c200();
  }
  func_0x007921a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d9a0(puVar1);
  _objc_release(puVar6);
  if (((ulong)puVar18 & 1) != 0) {
    _objc_release(unaff_x25);
  }
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  if (puVar12 == (undefined *)0x0) {
    _objc_release(puStack_b0);
    _objc_release(puStack_f0);
    _objc_release(puStack_e8);
  }
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar11);
    _objc_release(puStack_100);
    _objc_release(puStack_f8);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_retain(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar7);
LAB_0058dcf4:
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 0058dd28; end: 0058ddc3;  */

void FUN_0058dd28(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a2a640);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e720(uVar2);
  _objc_release(puVar1);
  *(bool *)param_4 = (float)param_3 * -0.1 + 1.0 <= 0.5;
  return;
}



/* Entry: 0058ddc4; end: 0058de33; -[AFHTTPClient setDefaultHeader:value:] */

void FUN_0058ddc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00781c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00791180();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0058de34; end: 0058e12f; -[AFHTTPClient requestWithMethod:path:parameters:] */

void FUN_0058de34(undefined8 param_1,undefined8 param_2,ulong param_3,undefined **param_4,
                 long param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  ppuVar1 = &PTR____CFConstantStringClassReference_00a212a0;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  uVar2 = param_1;
  func_0x0077f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077bc80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableURLRequest_00ac30d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableURLRequest_00ac30d8);
  func_0x00786ba0();
  func_0x0078d240();
  func_0x0078e400(puVar4);
  uVar2 = param_1;
  func_0x00781c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078cb20(puVar4);
  _objc_release(uVar2);
  if (param_5 != 0) {
    uVar5 = param_3;
    func_0x007878e0();
    if ((((uVar5 & 1) == 0) && (uVar5 = param_3, func_0x007878e0(), (uVar5 & 1) == 0)) &&
       (uVar5 = param_3, func_0x007878e0(), (int)uVar5 == 0)) {
      uVar2 = param_1;
      func_0x00792020();
      _CFStringConvertNSStringEncodingToEncoding();
      _CFStringConvertEncodingToIANACharSetName();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988);
      _objc_retainAutoreleasedReturnValue();
      func_0x00791160(puVar4);
      _objc_release(puVar8);
      uVar9 = param_1;
      func_0x00792020(param_1);
      lVar10 = param_5;
      FUN_0058d208(param_5,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00792020(param_1);
      lVar11 = lVar10;
      func_0x007815a0(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078e380(puVar4);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(uVar2);
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSURL_00ac2a90;
      puVar6 = puVar3;
      func_0x0077e1c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078ae00();
      func_0x00792020(param_1);
      lVar10 = param_5;
      FUN_0058d208(param_5,param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00791e60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077bc60(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar7);
      _objc_release(lVar10);
      _objc_release(puVar6);
      func_0x00790e00(puVar4);
      puVar3 = puVar8;
    }
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 0058e130; end: 0058e457; -[AFHTTPClient multipartFormRequestWithMethod:path:parameters:constructingBodyWithBlock:] */

/* WARNING: Removing unreachable block (ram,0x0058e23c) */

undefined * FUN_0058e130(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long in_x4;
  long in_x5;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  uVar1 = param_1;
  func_0x0078b8a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac30e0;
  _objc_alloc(PTR_PTR_00ac30e0);
  func_0x00792020(param_1);
  func_0x00786be0(puVar2);
  if (in_x4 != 0) {
    lVar3 = 0;
    func_0x0058d388(0,in_x4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00780ea0();
    while (lVar4 != 0) {
      lVar9 = 0;
      do {
        puVar10 = *(undefined **)(lVar9 * 8);
        puVar5 = puVar10;
        func_0x00793580();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSData_00ac2b10;
        _objc_opt_class(PTR__OBJC_CLASS___NSData_00ac2b10);
        puVar7 = puVar5;
        _objc_opt_isKindOfClass(puVar5,puVar6);
        _objc_release(puVar5);
        puVar5 = puVar10;
        func_0x00793580();
        _objc_retainAutoreleasedReturnValue();
        if (((ulong)puVar7 & 1) == 0) {
          puVar6 = PTR__OBJC_CLASS___NSNull_00ac2f90;
          func_0x00789b20(PTR__OBJC_CLASS___NSNull_00ac2f90);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          func_0x007877e0();
          _objc_release(puVar6);
          _objc_release(puVar5);
          if ((int)puVar7 == 0) {
            puVar6 = puVar10;
            func_0x00793580();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00781e40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00792020(param_1);
            puVar5 = puVar7;
            func_0x007815a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            _objc_release(puVar6);
          }
          else {
            puVar5 = PTR__OBJC_CLASS___NSData_00ac2b10;
            func_0x007814c0();
            _objc_retainAutoreleasedReturnValue();
          }
        }
        if (puVar5 != (undefined *)0x0) {
          func_0x00783220(puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar10;
          func_0x00781e40();
          _objc_retainAutoreleasedReturnValue();
          func_0x0077ef40(puVar2);
          _objc_release(puVar6);
          _objc_release(puVar10);
        }
        _objc_release(puVar5);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar3;
      func_0x00780ea0();
    }
    _objc_release(lVar3);
  }
  if (in_x5 != 0) {
    (**(code **)(in_x5 + 0x10))(in_x5,puVar2);
  }
  puVar5 = puVar2;
  func_0x0078b740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(in_x5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  return *(undefined **)(in_x4 + 0x10);
}



/* Entry: 0058e458; end: 0058e45f; -[AFHTTPClient baseURL] */

undefined8 FUN_0058e458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0058e460; end: 0058e48f; -[AFHTTPClient setBaseURL:] */

void FUN_0058e460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058e490; end: 0058e497; -[AFHTTPClient stringEncoding] */

undefined8 FUN_0058e490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0058e498; end: 0058e49f; -[AFHTTPClient setStringEncoding:] */

void FUN_0058e498(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 0058e4a0; end: 0058e4a7; -[AFHTTPClient parameterEncoding] */

undefined4 FUN_0058e4a0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 0058e4a8; end: 0058e4af; -[AFHTTPClient setParameterEncoding:] */

void FUN_0058e4a8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 0058e4b0; end: 0058e4b7; -[AFHTTPClient defaultHeaders] */

undefined8 FUN_0058e4b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0058e4b8; end: 0058e4e7; -[AFHTTPClient setDefaultHeaders:] */

void FUN_0058e4b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058e4e8; end: 0058e4ef; -[AFHTTPClient operationQueue] */

undefined8 FUN_0058e4e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0058e4f0; end: 0058e52b; -[AFHTTPClient .cxx_destruct] */

void FUN_0058e4f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0058e52c; end: 0058e5eb; -[AFStreamingMultipartFormData initWithURLRequest:stringEncoding:] */

undefined1 * FUN_0058e52c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3f28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0078fd60(puVar1);
    func_0x00790860(puVar1);
    puVar2 = PTR_PTR_00ac30e8;
    _objc_alloc(PTR_PTR_00ac30e8);
    func_0x00786980();
    func_0x0078d020(puVar1);
    _objc_release(puVar2);
    _objc_retain(puVar1);
  }
  _objc_release(param_3);
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 0058e5ec; end: 0058e6fb; -[AFStreamingMultipartFormData appendPartWithFileData:name:fileName:mimeType:] */

void FUN_0058e5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00781fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a2a780);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00791180(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_00a2a7a0);
  _objc_release(puVar2);
  func_0x00791180(puVar1,param_2,param_6,&PTR____CFConstantStringClassReference_00a244c0);
  _objc_release(param_6);
  func_0x0077ef60(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0058e6fc; end: 0058e7c7; -[AFStreamingMultipartFormData appendPartWithFormData:name:] */

void FUN_0058e6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00781fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a2a7c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00791180(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_00a2a7a0);
  _objc_release(puVar2);
  func_0x0077ef60(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0058e7c8; end: 0058e88f; -[AFStreamingMultipartFormData appendPartWithHeaders:body:] */

void FUN_0058e7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_00ac30f0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_1;
  func_0x00792020(param_1);
  func_0x00790860(puVar1,param_2,uVar2);
  func_0x0078e4e0(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x007882e0(param_4);
  func_0x0078d000(puVar1,param_2,uVar2);
  func_0x0078cfe0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x0077fae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077eee0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}


