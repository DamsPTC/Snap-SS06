/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b264e34; end: 10b264f6f; -[SCRequestManager submitRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:priority:method:authenticated:authenticator:completionQueue:completionBlock:] */

void FUN_10b264e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  uVar1 = param_1;
  func_0x00010be91b20(param_1,param_2,param_3,param_4,param_5,0,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b264f70;
  puStack_78 = &UNK_1108bc7f0;
  uStack_70 = param_16;
  _objc_retain(param_16);
  func_0x00010c25f560(param_1,param_2,uVar1,param_14,param_15,&puStack_90);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(uStack_70);
  _objc_release(param_16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b264f70; end: 10b264f8f;  */

void FUN_10b264f70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b264f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4,param_5);
    return;
  }
  return;
}



/* Entry: 10b264f90; end: 10b26512f; -[SCRequestManager _requestToEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:requestType:priority:method:authenticated:useGzipRequestCompression:] */

void FUN_10b264f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = param_7;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd4898);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    _objc_release(puVar1);
    param_7 = puVar2;
  }
  puVar2 = PTR_PTR_1126b4960;
  func_0x00010bf58660(PTR_PTR_1126b4960,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_9,param_11,1,param_10,param_12,param_13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b265130; end: 10b265273; -[SCSessionRequestManager submitProtoRequest:responseClass:completionQueue:completionBlock:] */

void FUN_10b265130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c25f660(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10b265274; end: 10b26536f;  */

void FUN_10b265274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_4);
  _objc_alloc();
  uStack_38 = 0;
  func_0x00010c008360();
  _objc_release(param_4);
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10b265370;
    puStack_58 = &UNK_11084a9e8;
    _objc_retain(lVar4);
    lStack_40 = lVar4;
    _objc_retain(uVar1);
    uStack_50 = uVar1;
    _objc_retain(uVar2);
    uStack_48 = uVar2;
    func_0x000107c27d8c(uVar3,&puStack_70);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(lStack_40);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b265370; end: 10b26539f;  */

void FUN_10b265370(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b265380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b2653a0; end: 10b265667; -[SCAPIRequestInfo initWithPath:requestTypeStr:requestBatchId:resumedData:startTime:startDate:requestSize:connectivityStatus:sequenceNumber:requestParser:trackingInfo:taskId:queuingLatency:isLargeDownloadRequest:isUserInitiated:isStreaming:appState:userInitiatedQueuingLatency:completionQueue:] */

undefined8 *
FUN_10b2653a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
             undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_20);
  puStack_80 = PTR_PTR_112705f98;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    *(bool *)((long)puVar1 + 0x13) = param_7 != 0;
    puVar1[7] = param_1;
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    puVar1[9] = param_9;
    puVar1[10] = param_10;
    puVar1[0xb] = param_11;
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    puVar1[0x10] = param_15;
    *(undefined1 *)(puVar1 + 2) = (undefined1)param_16;
    *(char *)((long)puVar1 + 0x16) = param_16._1_1_;
    *(undefined1 *)((long)puVar1 + 0x17) = param_16._2_1_;
    _objc_retain(param_20);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_20;
    _objc_release(uVar2);
    puVar1[0x11] = param_19;
    puVar1[0x1d] = 0;
    if (param_16._1_1_ != '\0') {
      puVar1[0x1c] = param_1;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    puVar1[0x1e] = param_18;
  }
  _objc_release(param_20);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b265668; end: 10b2656d3; -[SCAPIRequestInfo addUserInfoEntriesFromDictionary:] */

void FUN_10b265668(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  func_0x00010bef7f60(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2656d4; end: 10b26572f; -[SCAPIRequestInfo userInfo] */

void FUN_10b2656d4(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b265730; end: 10b265793; -[SCAPIRequestInfo setIsUserInitiated:] */

void FUN_10b265730(double param_1,long param_2,undefined8 param_3,uint param_4)

{
  if (*(byte *)(param_2 + 0x16) != param_4) {
    *(char *)(param_2 + 0x16) = (char)param_4;
    _CACurrentMediaTime();
    if (param_4 == 0) {
      *(long *)(param_2 + 0xe8) =
           *(long *)(param_2 + 0xe8) + (long)((param_1 - *(double *)(param_2 + 0xe0)) * 1000.0);
    }
    else {
      *(double *)(param_2 + 0xe0) = param_1;
    }
  }
  return;
}



/* Entry: 10b265794; end: 10b26579b; -[SCAPIRequestInfo path] */

undefined8 FUN_10b265794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b26579c; end: 10b2657a3; -[SCAPIRequestInfo requestTypeStr] */

undefined8 FUN_10b26579c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b2657a4; end: 10b2657ab; -[SCAPIRequestInfo requestBatchId] */

undefined8 FUN_10b2657a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b2657ac; end: 10b2657b3; -[SCAPIRequestInfo startTime] */

undefined8 FUN_10b2657ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b2657b4; end: 10b2657bb; -[SCAPIRequestInfo startDate] */

undefined8 FUN_10b2657b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b2657bc; end: 10b2657c3; -[SCAPIRequestInfo requestSize] */

undefined8 FUN_10b2657bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b2657c4; end: 10b2657cb; -[SCAPIRequestInfo connectivityStatus] */

undefined8 FUN_10b2657c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b2657cc; end: 10b2657d3; -[SCAPIRequestInfo sequenceNumber] */

undefined8 FUN_10b2657cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b2657d4; end: 10b2657db; -[SCAPIRequestInfo requestParser] */

undefined8 FUN_10b2657d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b2657dc; end: 10b2657e3; -[SCAPIRequestInfo trackingInfo] */

undefined8 FUN_10b2657dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b2657e4; end: 10b2657eb; -[SCAPIRequestInfo completionQueue] */

undefined8 FUN_10b2657e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b2657ec; end: 10b2657f3; -[SCAPIRequestInfo taskId] */

undefined8 FUN_10b2657ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b2657f4; end: 10b2657fb; -[SCAPIRequestInfo queuingLatency] */

undefined8 FUN_10b2657f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b2657fc; end: 10b265803; -[SCAPIRequestInfo userInitiatedQueuingLatency] */

undefined8 FUN_10b2657fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b265804; end: 10b26580b; -[SCAPIRequestInfo isLargeDownloadRequest] */

undefined1 FUN_10b265804(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10b26580c; end: 10b265813; -[SCAPIRequestInfo completionBlock] */

undefined8 FUN_10b26580c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b265814; end: 10b26581b; -[SCAPIRequestInfo setCompletionBlock:] */

void FUN_10b265814(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b26581c; end: 10b265823; -[SCAPIRequestInfo responseData] */

undefined8 FUN_10b26581c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b265824; end: 10b265853; -[SCAPIRequestInfo setResponseData:] */

void FUN_10b265824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b265854; end: 10b26585b; -[SCAPIRequestInfo response] */

undefined8 FUN_10b265854(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b26585c; end: 10b26588b; -[SCAPIRequestInfo setResponse:] */

void FUN_10b26585c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26588c; end: 10b265893; -[SCAPIRequestInfo error] */

undefined8 FUN_10b26588c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b265894; end: 10b2658c3; -[SCAPIRequestInfo setError:] */

void FUN_10b265894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2658c4; end: 10b2658cb; -[SCAPIRequestInfo sessionTaskStartDate] */

undefined8 FUN_10b2658c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10b2658cc; end: 10b2658fb; -[SCAPIRequestInfo setSessionTaskStartDate:] */

void FUN_10b2658cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2658fc; end: 10b265903; -[SCAPIRequestInfo sessionTaskEndDate] */

undefined8 FUN_10b2658fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10b265904; end: 10b265933; -[SCAPIRequestInfo setSessionTaskEndDate:] */

void FUN_10b265904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b265934; end: 10b26593b; -[SCAPIRequestInfo countOfBytesReceived] */

undefined8 FUN_10b265934(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10b26593c; end: 10b265943; -[SCAPIRequestInfo setCountOfBytesReceived:] */

void FUN_10b26593c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 10b265944; end: 10b26594b; -[SCAPIRequestInfo countOfBytesSent] */

undefined8 FUN_10b265944(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10b26594c; end: 10b265953; -[SCAPIRequestInfo setCountOfBytesSent:] */

void FUN_10b26594c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 10b265954; end: 10b26595b; -[SCAPIRequestInfo finishTime] */

undefined8 FUN_10b265954(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10b26595c; end: 10b265963; -[SCAPIRequestInfo setFinishTime:] */

void FUN_10b26595c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xd0) = param_1;
  return;
}



/* Entry: 10b265964; end: 10b26596b; -[SCAPIRequestInfo isDownloadTask] */

undefined1 FUN_10b265964(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 10b26596c; end: 10b265973; -[SCAPIRequestInfo setIsDownloadTask:] */

void FUN_10b26596c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 10b265974; end: 10b26597b; -[SCAPIRequestInfo isPaused] */

undefined1 FUN_10b265974(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 10b26597c; end: 10b265983; -[SCAPIRequestInfo setIsPaused:] */

void FUN_10b26597c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 10b265984; end: 10b26598b; -[SCAPIRequestInfo isResumed] */

undefined1 FUN_10b265984(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 10b26598c; end: 10b265993; -[SCAPIRequestInfo setIsResumed:] */

void FUN_10b26598c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return;
}



/* Entry: 10b265994; end: 10b26599b; -[SCAPIRequestInfo isResumable] */

undefined1 FUN_10b265994(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 10b26599c; end: 10b2659a3; -[SCAPIRequestInfo setIsResumable:] */

void FUN_10b26599c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 10b2659a4; end: 10b2659ab; -[SCAPIRequestInfo isNSURLSessionTaskStarted] */

undefined1 FUN_10b2659a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 10b2659ac; end: 10b2659b3; -[SCAPIRequestInfo setIsNSURLSessionTaskStarted:] */

void FUN_10b2659ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x15) = param_3;
  return;
}



/* Entry: 10b2659b4; end: 10b2659bb; -[SCAPIRequestInfo isUserInitiated] */

undefined1 FUN_10b2659b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 10b2659bc; end: 10b2659c3; -[SCAPIRequestInfo isStreaming] */

undefined1 FUN_10b2659bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17);
}



/* Entry: 10b2659c4; end: 10b2659cb; -[SCAPIRequestInfo setIsStreaming:] */

void FUN_10b2659c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x17) = param_3;
  return;
}



/* Entry: 10b2659cc; end: 10b2659d3; -[SCAPIRequestInfo resumeDataBytes] */

undefined8 FUN_10b2659cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10b2659d4; end: 10b2659db; -[SCAPIRequestInfo setResumeDataBytes:] */

void FUN_10b2659d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 10b2659dc; end: 10b2659e3; -[SCAPIRequestInfo bytesReceivedByCronet] */

undefined4 FUN_10b2659dc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10b2659e4; end: 10b2659eb; -[SCAPIRequestInfo setBytesReceivedByCronet:] */

void FUN_10b2659e4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b2659ec; end: 10b2659f3; -[SCAPIRequestInfo lastUserInitiatedTime] */

undefined8 FUN_10b2659ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10b2659f4; end: 10b2659fb; -[SCAPIRequestInfo setLastUserInitiatedTime:] */

void FUN_10b2659f4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xe0) = param_1;
  return;
}



/* Entry: 10b2659fc; end: 10b265a03; -[SCAPIRequestInfo accumulatedUserInitiatedNetworkLatency] */

undefined8 FUN_10b2659fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10b265a04; end: 10b265a0b; -[SCAPIRequestInfo setAccumulatedUserInitiatedNetworkLatency:] */

void FUN_10b265a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  return;
}



/* Entry: 10b265a0c; end: 10b265a13; -[SCAPIRequestInfo appState] */

undefined8 FUN_10b265a0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10b265a14; end: 10b265a1b; -[SCAPIRequestInfo setAppState:] */

void FUN_10b265a14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  return;
}



/* Entry: 10b265a1c; end: 10b265ae7; -[SCAPIRequestInfo .cxx_destruct] */

void FUN_10b265a1c(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b265ae8; end: 10b265e1f; -[SCDownloadRequest initWithEndpoint:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:requestParser:method:authenticated:requestTimestamp:readTimeoutInterval:compressionConfig:estimatedResponseSizeBytes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b265ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined *param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_14);
  _objc_retain(param_18);
  puStack_78 = PTR_PTR_112705fa0;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(param_1,puVar1,PTR_s_initWithKey_contexts_priority_co_112542720,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15,param_16);
  if (puVar1 != (undefined8 *)0x0) {
    uVar8 = param_6;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278db00);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278db00) = uVar8;
    _objc_release(uVar7);
    uVar8 = param_7;
    func_0x00010bf51e00(param_7);
    func_0x00010c21cc60(puVar1);
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = param_14;
    func_0x00010beeca20(param_14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = puVar2;
      func_0x00010c0e00e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00();
      _objc_release(puVar4);
      if ((int)puVar3 == 0) {
        puVar4 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_14;
        func_0x00010beeca20(param_14);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c25ce40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar4);
      }
      else {
        puVar6 = param_14;
        func_0x00010beeca20(param_14);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c1d0560(puVar2);
      _objc_release(puVar6);
    }
    puVar4 = puVar2;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278db04);
    *(undefined **)((long)puVar1 + (long)_DAT_11278db04) = puVar4;
    _objc_release(uVar8);
    uVar8 = param_5;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278db08);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278db08) = uVar8;
    _objc_release(uVar7);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278db0c) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278db10) = param_2;
    func_0x00010c180660(puVar1);
    func_0x00010c1b53c0(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_18);
  _objc_release(param_14);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10b265e20; end: 10b265f0f; -[SCDownloadRequest executeWithAuthenticator:completionQueue:completionBlock:] */

void FUN_10b265e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf75f20(param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b265f10;
  puStack_58 = &UNK_1108465d0;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  (**(code **)((long)ppuVar1 + 0x10))();
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b265f10; end: 10b2662f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b265f10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  func_0x00010c064b40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c07c880();
  puVar13 = PTR_PTR_1126bc0e8;
  if (iVar2 == 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278db18);
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c136da0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c134b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99820();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1360a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c278f20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26a800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11e1a0();
    lVar10 = *(long *)(param_1 + 0x20);
    func_0x00010c136d60();
    if (lVar10 == 0) {
      func_0x00010c081c40();
    }
    func_0x00010c292920();
    func_0x00010c07ffc0();
    func_0x00010bf061e0();
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c291820();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26a580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed8a0();
    uVar15 = 0xc2000000;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar1);
    func_0x00010c1358c0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac320(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar14);
    _objc_release(uVar3);
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfed8e0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c135880(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd80();
    _objc_release(uVar3);
    _objc_release(uVar14);
    puVar13 = PTR_PTR_1126bc0e8;
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cc940(*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15fac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3340(*(undefined8 *)(param_1 + 0x20));
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c135880(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7a00(uVar15,puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212780(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar13);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar14);
    _objc_release(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be95f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resumeWithCompletionQueue_compl_112583180,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10b2662f4; end: 10b26632f;  */

void FUN_10b2662f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_3,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c212790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_setTask__112662408,0)
  ;
  return;
}



/* Entry: 10b266330; end: 10b266397; -[SCDownloadRequest cancel] */

void FUN_10b266330(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1f68c0(param_1,param_2,4);
  uVar1 = param_1;
  func_0x00010c07c880();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be70bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pause_112579c98);
    return;
  }
  uVar1 = param_1;
  func_0x00010c26a540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c212790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTask__112662408,0);
  return;
}



/* Entry: 10b266398; end: 10b2663fb; -[SCDownloadRequest pause] */

void FUN_10b266398(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07c880();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bfed8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b3320();
    _objc_release(uVar1);
    func_0x00010c1f68c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be70bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pause_112579c98);
    return;
  }
  return;
}



/* Entry: 10b2663fc; end: 10b26646f; -[SCDownloadRequest _pause] */

void FUN_10b2663fc(undefined8 param_1)

{
  func_0x00010be06240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e040();
  _objc_release(param_1);
  return;
}



/* Entry: 10b266470; end: 10b2664ff;  */

void FUN_10b266470(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dfea0;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c086560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2eea0(puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c212790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_setTask__112662408,0)
  ;
  return;
}



/* Entry: 10b266500; end: 10b266503; -[SCDownloadRequest resumeWithCompletionQueue:completionBlock:] */

void FUN_10b266500(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be95f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumeWithCompletionQueue_compl_112583180);
  return;
}



/* Entry: 10b266504; end: 10b266a5f; -[SCDownloadRequest _resumeWithCompletionQueue:completionBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b266504(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c07c880();
  if ((int)lVar1 != 0) {
    func_0x00010bf75f20(param_1);
    puVar2 = PTR_PTR_1126dfea0;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c13d440();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf51e00();
    uVar13 = *(undefined8 *)(param_1 + _DAT_11278db1c);
    *(undefined **)(param_1 + _DAT_11278db1c) = puVar4;
    _objc_release(uVar13);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126bc0e8;
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_10b266a60;
    uStack_88 = 0x10b266a70;
    uStack_80 = 0;
    uVar5 = *(undefined8 *)(param_1 + _DAT_11278db18);
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c136da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c134b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c2bf30();
    lVar8 = param_1;
    func_0x00010c1360a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c278f20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c26a800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11e1a0();
    lVar11 = param_1;
    func_0x00010c136d60();
    if (lVar11 == 0) {
      func_0x00010c081c40();
    }
    func_0x00010c292920();
    func_0x00010c07ffc0();
    func_0x00010bf061e0();
    lVar11 = param_1;
    func_0x00010c291820();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010c26a580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed8a0();
    uVar14 = 0xc2000000;
    _objc_retain(param_4);
    func_0x00010c1358e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac320(param_1);
    _objc_release(puVar2);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(uVar13);
    _objc_release(uVar5);
    lVar1 = param_1;
    func_0x00010bfed8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b08a0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfed8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b3f60();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfed8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c135880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd80();
    _objc_release(lVar6);
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126bc0e8;
    lVar1 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cc940(param_1);
    lVar6 = param_1;
    func_0x00010c15fac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3340(param_1);
    lVar7 = param_1;
    func_0x00010c135880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7800(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = puStack_a0[5];
    puStack_a0[5] = puVar2;
    _objc_release(uVar13);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar1);
    func_0x00010c212780(param_1);
    _objc_release(param_4);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b266a60; end: 10b266a77;  */

void FUN_10b266a60(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b266a78; end: 10b266c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b266a78(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  _objc_retain(lVar4);
  lVar5 = (long)_DAT_11278db20;
  if (*(long *)(*(long *)(param_1 + 0x20) + lVar5) == 0) {
    lVar1 = lVar4;
    func_0x00010bdc2400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
    *(long *)(*(long *)(param_1 + 0x20) + lVar5) = lVar1;
    _objc_release(uVar3);
  }
  if (param_4 == (undefined *)0x0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar1 + lVar5) == 0) {
      func_0x00010c135880();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c0d1480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar5 == 0) {
        param_4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar2 = *(undefined **)(param_1 + 0x20);
        func_0x00010c135880(puVar2);
        _objc_retainAutoreleasedReturnValue();
        param_4 = puVar2;
        func_0x00010c0d1480();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
    }
    else {
      param_4 = (undefined *)0x0;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13d0c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_3,uVar3,param_4);
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010c26a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == lVar5) {
    func_0x00010c212780(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b266c40; end: 10b266c97; -[SCDownloadRequest additionalHTTPHeaders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b266c40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11278db18);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11278db04);
    _objc_retain(lVar1);
  }
  else {
    func_0x00010bf001a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b266c98; end: 10b266ca7; -[SCDownloadRequest approximateRequestSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b266c98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_11278db18);
  func_0x000107c61174();
  lVar1 = lVar3;
  func_0x000107c3ab74();
  func_0x000107c61180();
  func_0x000107c61170();
  lVar2 = lVar3;
  if (lVar1 == 0) {
    func_0x000107c3abfc(lVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar1 = lVar2;
    func_0x000107c3ceb0(lVar2);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c4adb0();
    func_0x000107c61170(lVar1);
  }
  else {
    func_0x000107c3ab74();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    func_0x000107c4adac(lVar2);
  }
  func_0x000107c61170(lVar2);
  return lVar3;
}



/* Entry: 10b266ca8; end: 10b266ceb; -[SCDownloadRequest resumableDownloadedData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b266ca8(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + _DAT_11278db20) != 0) {
    func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,
                        *(long *)(param_1 + _DAT_11278db20),8,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b266cec; end: 10b266cef; -[SCDownloadRequest _downloadTask] */

void FUN_10b266cec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_task_112678378);
  return;
}



/* Entry: 10b266cf0; end: 10b266cff; -[SCDownloadRequest parameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b266cf0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278db00);
}



/* Entry: 10b266d00; end: 10b266e7f; -[SCUploadRequest initWithURL:parameters:uploadFileURL:additionalHTTPHeaders:key:contexts:priority:connectivity:requestParser:requestType:method:authenticated:requestTimestamp:estimatedResponseSizeBytes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b266d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_112705fa8;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(param_1,puVar1,PTR_s_initWithKey_contexts_priority_co_112542720,param_8,
                      param_9,param_10,param_11,param_13,param_12,param_14,param_15);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278db24);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278db24) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11278db28;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278db2c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278db2c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278db30);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278db30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b266e80; end: 10b267017; -[SCUploadRequest initializeURLRequestWithAuthenticator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b266e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar2 = PTR_PTR_1126bc0e8;
  lVar9 = (long)_DAT_11278db34;
  if (*(long *)(param_1 + lVar9) != 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_11278db30);
  lVar4 = (long)_DAT_11278db28;
  uVar6 = *(undefined8 *)(param_1 + _DAT_11278db24);
  uVar7 = *(undefined8 *)(param_1 + lVar4);
  uVar8 = *(undefined8 *)(param_1 + _DAT_11278db2c);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0cc940(param_1);
  func_0x00010bdc3180(puVar2,param_2,uVar5,uVar6,uVar7,uVar8,lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar2;
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126dfea8;
  func_0x00010c22b6a0(PTR_PTR_1126dfea8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bdc2b80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c286560(puVar2,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21afe0(*(undefined8 *)(param_1 + lVar9),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(param_1 + lVar4);
  lVar4 = param_1;
  func_0x00010c086560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bdc2b80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b267018(uVar6);
  func_0x00010c1974a0(param_1,param_2,uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10b267018; end: 10b2670c3;  */

undefined * FUN_10b267018(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain();
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uStack_38 = 0;
  puVar3 = puVar1;
  func_0x00010bf0e880(puVar1,param_2,uVar2,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfad040();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 10b2670c4; end: 10b2671b3; -[SCUploadRequest executeWithAuthenticator:completionQueue:completionBlock:] */

void FUN_10b2670c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf75f20(param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b2671b4;
  puStack_58 = &UNK_1108465d0;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  (**(code **)((long)ppuVar1 + 0x10))();
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b2671b4; end: 10b2675bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2671b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x00010c064b40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_initWeak(auStack_80,*(undefined8 *)(param_1 + 0x20));
  puVar11 = PTR_PTR_1126bc0e8;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278db34);
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c136da0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c134b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99820();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1360a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c278f20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26a800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11e1a0();
  lVar8 = *(long *)(param_1 + 0x20);
  func_0x00010c136d60();
  if (lVar8 == 0) {
    func_0x00010c081c40();
  }
  func_0x00010c292920();
  func_0x00010c07ffc0();
  func_0x00010bf061e0();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c291820();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26a580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beed8a0();
  uVar14 = 0xc2000000;
  _objc_copyWeak(auStack_88,auStack_80);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar13);
  func_0x00010c1358c0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac320(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar1);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfed8e0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c135880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd80();
  _objc_release(uVar1);
  _objc_release(uVar12);
  puVar11 = PTR_PTR_1126bc0e8;
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cc940();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15fac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3340(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c135880(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7a20(uVar14,puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212780(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar11);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 10b2675bc; end: 10b267647;  */

void FUN_10b2675bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b220();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b267648; end: 10b26769f; -[SCUploadRequest url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b267648(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11278db34);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11278db30);
    _objc_retain(lVar1);
  }
  else {
    func_0x00010bdc2b80(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b2676a0; end: 10b267717; -[SCUploadRequest path] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2676a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11278db34);
  if (lVar2 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11278db30);
    func_0x00010c0f5800(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdc2b80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b267718; end: 10b267747; -[SCUploadRequest urlRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b267718(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278db34);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b267748; end: 10b2677bb; -[SCUploadRequest approximateRequestSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b267748(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278db28);
  lVar1 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28f340(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b267018(uVar2);
  _objc_release(param_1);
  _objc_release(lVar1);
  return uVar2;
}



/* Entry: 10b2677bc; end: 10b2677fb; -[SCUploadRequest _onRequestCompleteWithResponseData:response:error:completionBlock:] */

void FUN_10b2677bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  (**(code **)(param_6 + 0x10))(param_6,param_1,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c212790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTask__112662408,0);
  return;
}



/* Entry: 10b2677fc; end: 10b26780b; -[SCUploadRequest uploadFileURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2677fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278db28);
}



/* Entry: 10b26780c; end: 10b26787b; -[SCUploadRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26780c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278db28,0);
  _objc_storeStrong(param_1 + _DAT_11278db30,0);
  _objc_storeStrong(param_1 + _DAT_11278db34,0);
  _objc_storeStrong(param_1 + _DAT_11278db2c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278db24,0);
  return;
}



/* Entry: 10b26787c; end: 10b2679df; -[SCRequestBatchEntity initWithRequest:batchId:successQueue:failureQueue:successBlock:failureBlock:] */

undefined1 *
FUN_10b26787c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112705fb0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = 1;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2679e0; end: 10b267ae3; -[SCRequestBatchEntity initWithRequest:batchId:completionQueue:completionBlock:] */

undefined1 *
FUN_10b2679e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112705fb0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b267ae4; end: 10b267aeb; -[SCRequestBatchEntity batchId] */

undefined8 FUN_10b267ae4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


