/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2751d0; end: 10b2751d7; -[SCSessionRequestManager username] */

undefined8 FUN_10b2751d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b2751d8; end: 10b2751df; -[SCSessionRequestManager userId] */

undefined8 FUN_10b2751d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b2751e0; end: 10b27521b; -[SCSessionRequestManager .cxx_destruct] */

void FUN_10b2751e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b27521c; end: 10b275377;  */

void FUN_10b27521c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c1196e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5260(param_2);
  func_0x00010bf48d20(param_1);
  func_0x00010c180ee0(param_2);
  uVar2 = param_1;
  func_0x00010bf87300();
  if ((int)uVar2 != -1) {
    func_0x00010bf87300(param_1);
    func_0x00010c190c00(param_2);
  }
  uVar2 = param_1;
  func_0x00010c24cce0();
  if ((int)uVar2 != -1) {
    func_0x00010c24cce0(param_1);
    func_0x00010c1f99e0(param_2);
  }
  uVar2 = param_1;
  func_0x00010bf48fc0();
  if ((int)uVar2 != -1) {
    func_0x00010bf48fc0(param_1);
    func_0x00010c180f40(param_2);
  }
  uVar2 = param_1;
  func_0x00010c134640();
  if ((int)uVar2 != -1) {
    func_0x00010c134640(param_1);
    func_0x00010c1eba80(param_2);
  }
  uVar2 = param_1;
  func_0x00010c13bd80();
  if ((int)uVar2 != -1) {
    func_0x00010c13bd80(param_1);
    func_0x00010c1ece40(param_2);
  }
  func_0x00010bfc63c0(PTR_PTR_1126dfd80);
  func_0x00010c1a9560(param_2);
  func_0x00010bfcb760(PTR_PTR_1126dfd80);
  func_0x00010c219c80(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b275378; end: 10b2757e3; -[SCGrpcEventLogger logStreamBlizzard:] */

void FUN_10b275378(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x000107c2bf64();
  _objc_release(uVar2);
  if ((int)uVar6 != 0) {
    puVar3 = PTR_PTR_1126dffb8;
    _objc_opt_new(PTR_PTR_1126dffb8);
    lVar4 = param_3;
    func_0x00010c142340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9200(puVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010c142340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c15f7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd7a0(puVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010c142340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf356e0();
    _objc_release(lVar4);
    func_0x00010c17ab80(puVar3);
    func_0x00010bf25fe0(param_3);
    func_0x00010c174d40(puVar3);
    func_0x00010bf25fa0(param_3);
    func_0x00010c174d20(puVar3);
    func_0x00010bf26000(param_3);
    func_0x00010c174d60(puVar3);
    func_0x00010c0d1aa0(param_3);
    func_0x00010c1c92a0(puVar3);
    func_0x00010c0d1a80(param_3);
    func_0x00010c1c9280(puVar3);
    func_0x00010c0d1ac0(param_3);
    func_0x00010c1c92c0(puVar3);
    lVar4 = param_3;
    func_0x00010c135700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar3);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010c26a800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212840(puVar3);
    _objc_release(lVar4);
    func_0x00010c261740(param_3);
    func_0x00010c20f8a0(puVar3);
    func_0x00010c252ee0(param_3);
    func_0x00010c20a3c0(puVar3);
    func_0x00010c160520(param_3);
    func_0x00010c20e660(puVar3);
    lVar4 = param_3;
    func_0x00010bf10a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_3;
      func_0x00010bf10a40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c16c860(puVar3);
      _objc_release(lVar4);
      func_0x00010bf10820(param_3);
      func_0x00010c16c760(puVar3);
      func_0x00010c16c8a0(puVar3);
    }
    lVar4 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_3;
      func_0x00010bfa1820(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19a840(puVar3);
      _objc_release(lVar4);
    }
    lVar4 = param_3;
    func_0x00010c15f3e0();
    if (lVar4 != -1) {
      func_0x00010c15f3e0(param_3);
      func_0x00010c1fd680(puVar3);
    }
    puVar1 = PTR_PTR_1126bfb10;
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf48f60();
    func_0x00010bdc2040(puVar1);
    func_0x00010c1e7a80(puVar3);
    _objc_release(uVar6);
    lVar4 = param_3;
    func_0x00010bf09d00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR_PTR_1126dffb0;
    if (lVar4 != 0) {
      func_0x00010bf09d80(param_3);
      func_0x00010bde8f60(puVar1);
      func_0x00010c16a260(puVar3);
      lVar4 = param_3;
      func_0x00010bf09d00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c16a240(puVar3);
      _objc_release(lVar4);
      func_0x00010bf09ca0(param_3);
      func_0x00010c16a220(puVar3);
    }
    func_0x00010c0d81a0(param_3);
    func_0x00010c21a8a0(puVar3);
    func_0x00010c160520(param_3);
    func_0x00010c21a9a0(puVar3);
    lVar4 = param_3;
    func_0x00010c142340(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10b27521c();
    _objc_release(lVar4);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b29e0();
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2757e4; end: 10b27580f; +[SCGrpcEventLogger channelTypeToString:] */

undefined ** FUN_10b2757e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f606d8;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f606b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f606f8;
  if (param_3 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b275810; end: 10b27581f; +[SCGrpcEventLogger _convertArgosType:] */

ulong FUN_10b275810(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 - 1;
  if (2 < uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 10b275820; end: 10b27585b; -[SCGrpcEventLogger .cxx_destruct] */

void FUN_10b275820(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b27585c; end: 10b275863; -[SCRequestManagerLogParameter runningCountMessages] */

undefined8 FUN_10b27585c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b275864; end: 10b27586b; -[SCRequestManagerLogParameter runningCountStories] */

undefined8 FUN_10b275864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b27586c; end: 10b275873; -[SCRequestManagerLogParameter runningCountDiscover] */

undefined8 FUN_10b27586c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b275874; end: 10b27587b; -[SCRequestManagerLogParameter runningCountLarge] */

undefined8 FUN_10b275874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b27587c; end: 10b275883; -[SCRequestManagerLogParameter setRunningCountLarge:] */

void FUN_10b27587c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b275884; end: 10b27588b; -[SCRequestManagerLogParameter runningCountSmall] */

undefined8 FUN_10b275884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b27588c; end: 10b275893; -[SCRequestManagerLogParameter setRunningCountSmall:] */

void FUN_10b27588c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b275894; end: 10b27589b; -[SCRequestManagerLogParameter maxCountLarge] */

undefined8 FUN_10b275894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b27589c; end: 10b2758a3; -[SCRequestManagerLogParameter setMaxCountLarge:] */

void FUN_10b27589c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10b2758a4; end: 10b2758ab; -[SCRequestManagerLogParameter maxCountSmall] */

undefined8 FUN_10b2758a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b2758ac; end: 10b2758b3; -[SCRequestManagerLogParameter setMaxCountSmall:] */

void FUN_10b2758ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10b2758b4; end: 10b2758bb; -[SCRequestManagerLogParameter maxCountInContext] */

undefined8 FUN_10b2758b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b2758bc; end: 10b2758c3; -[SCRequestManagerLogParameter setMaxCountInContext:] */

void FUN_10b2758bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 10b2758c4; end: 10b2758cb; -[SCRequestManagerLogParameter currentDisplayContext] */

undefined8 FUN_10b2758c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b2758cc; end: 10b2758cf; +[SCRequestManagerLogger didRunRequest:logInfo:] */

void FUN_10b2758cc(void)

{
  return;
}



/* Entry: 10b2758d0; end: 10b2758d3; +[SCRequestManagerLogger _printRequest:prefix:logInfo:] */

void FUN_10b2758d0(void)

{
  return;
}



/* Entry: 10b2758d4; end: 10b2758db; +[SCRequestManagerLogger _strFromPriority:] */

undefined8 FUN_10b2758d4(void)

{
  return 0;
}



/* Entry: 10b2758dc; end: 10b2758f7; +[SCRequestManagerLogger _stringFromConnectivity:] */

undefined ** FUN_10b2758dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f60738;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f60758;
  }
  return ppuVar1;
}



/* Entry: 10b2758f8; end: 10b2758fb; +[SCRequestManagerLogger printRequestStatus:logPrefix:] */

void FUN_10b2758f8(void)

{
  return;
}



/* Entry: 10b2758fc; end: 10b275a73; -[SCSeamlessSnapTokenMetricsLoggerImpl logErrorWithNSError:latencyMs:accessType:isSyncInvocation:] */

void FUN_10b2758fc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010bf3ec40(param_4);
  puVar2 = PTR_PTR_1126dfd38;
  func_0x00010bf987e0(PTR_PTR_1126dfd38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126decd8;
  func_0x00010bdc2480(PTR_PTR_1126decd8,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dd9438,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db6ad8;
  if (param_6 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db6af8;
  }
  puVar2 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110f60778,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar3 = PTR_PTR_1126bd360;
  func_0x00010c22d480(PTR_PTR_1126bd360,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dfbc58,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + 8),param_3,puVar4);
  func_0x00010befbfe0(*(undefined8 *)(param_2 + 8),param_3,puVar4,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b275a74; end: 10b275a7f; -[SCSeamlessSnapTokenMetricsLoggerImpl .cxx_destruct] */

void FUN_10b275a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b275a80; end: 10b275b53; -[SCRequestConcurrencyLoggingItem updateAccumulatedOverlappedDurationOfOtherRequestsWithDuration:overlappedRequest:] */

void FUN_10b275a80(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c07bdc0();
  if ((int)uVar1 == 0) {
    uVar1 = param_4;
    func_0x00010c07d7c0();
    if ((int)uVar1 == 0) goto LAB_10b275b40;
    *(double *)(param_2 + 0x38) = param_1 + *(double *)(param_2 + 0x38);
    uVar1 = param_4;
    func_0x00010c0823a0();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_4;
      func_0x00010c06bfc0();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_4;
        func_0x00010c06bfe0();
        if ((int)uVar1 == 0) goto LAB_10b275b40;
        lVar2 = 0x50;
      }
      else {
        lVar2 = 0x48;
      }
    }
    else {
      lVar2 = 0x40;
    }
  }
  else {
    *(double *)(param_2 + 0x20) = param_1 + *(double *)(param_2 + 0x20);
    uVar1 = param_4;
    func_0x00010c070e00();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_4;
      func_0x00010c077ce0();
      if ((uVar1 & 1) == 0) goto LAB_10b275b40;
      lVar2 = 0x30;
    }
    else {
      lVar2 = 0x28;
    }
  }
  *(double *)(param_2 + lVar2) = param_1 + *(double *)(param_2 + lVar2);
LAB_10b275b40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b275b54; end: 10b275b8b; -[SCRequestConcurrencyLoggingItem isReceiveDataRequestItem] */

ulong FUN_10b275b54(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c070e00();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c077cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isMetadataRequestItem_1125fb948);
  return param_1;
}



/* Entry: 10b275b8c; end: 10b275bcf; -[SCRequestConcurrencyLoggingItem isSendDataRequestItem] */

ulong FUN_10b275b8c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c0823a0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c06bfc0(), (uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c06bff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isAnalyticsV2RequestItem_1125f8a08);
    return param_1;
  }
  return 1;
}



/* Entry: 10b275bd0; end: 10b275bdf; -[SCRequestConcurrencyLoggingItem isDownloadRequestItem] */

bool FUN_10b275bd0(long param_1)

{
  return *(long *)(param_1 + 0x18) == 0;
}



/* Entry: 10b275be0; end: 10b275bef; -[SCRequestConcurrencyLoggingItem isMetadataRequestItem] */

bool FUN_10b275be0(long param_1)

{
  return *(long *)(param_1 + 0x18) == 3;
}



/* Entry: 10b275bf0; end: 10b275bff; -[SCRequestConcurrencyLoggingItem isUploadRequestItem] */

bool FUN_10b275bf0(long param_1)

{
  return *(long *)(param_1 + 0x18) == 2;
}



/* Entry: 10b275c00; end: 10b275c0f; -[SCRequestConcurrencyLoggingItem isAnalyticsRequestItem] */

bool FUN_10b275c00(long param_1)

{
  return *(long *)(param_1 + 0x18) == 1;
}



/* Entry: 10b275c10; end: 10b275c1f; -[SCRequestConcurrencyLoggingItem isAnalyticsV2RequestItem] */

bool FUN_10b275c10(long param_1)

{
  return *(long *)(param_1 + 0x18) == 5;
}



/* Entry: 10b275c20; end: 10b275c27; -[SCRequestConcurrencyLoggingItem setStartTimestamp:] */

void FUN_10b275c20(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 10b275c28; end: 10b275c2f; -[SCRequestConcurrencyLoggingItem setFinishTimestamp:] */

void FUN_10b275c28(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10b275c30; end: 10b275c37; -[SCRequestConcurrencyLoggingItem setRequestType:] */

void FUN_10b275c30(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b275c38; end: 10b275c3f; -[SCRequestConcurrencyLoggingItem setAccumulatedOverlappedDownloadDurationOfOtherRequests:] */

void FUN_10b275c38(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 10b275c40; end: 10b275c47; -[SCRequestConcurrencyLoggingItem setAccumulatedOverlappedDownloadDurationOfOtherDownloadRequests:] */

void FUN_10b275c40(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 10b275c48; end: 10b275c4f; -[SCRequestConcurrencyLoggingItem setAccumulatedOverlappedDownloadDurationOfOtherMetadataRequests:] */

void FUN_10b275c48(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 10b275c50; end: 10b275c57; -[SCRequestConcurrencyLoggingItem setAccumulatedOverlappedUploadDurationOfOtherRequests:] */

void FUN_10b275c50(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 10b275c58; end: 10b275c5f; -[SCRequestConcurrencyLoggingItem setAccumulatedOverlappedUploadDurationOfOtherUploadRequests:] */

void FUN_10b275c58(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 10b275c60; end: 10b275c67; -[SCRequestConcurrencyLoggingItem setAccumulatedOverlappedUploadDurationOfOtherAnalyticsRequests:] */

void FUN_10b275c60(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 10b275c68; end: 10b275c6f; -[SCRequestConcurrencyLoggingItem setAccumulatedOverlappedUploadDurationOfOtherAnalyticsV2Requests:] */

void FUN_10b275c68(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x50) = param_1;
  return;
}



/* Entry: 10b275c70; end: 10b275c77; -[SCRequestManagerRunningTaskState numOfAnalyticTasks] */

void FUN_10b275c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0de090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_numOfAnalyticTasks_112615238);
  return;
}



/* Entry: 10b275c78; end: 10b275c7f; -[SCRequestManagerRunningTaskState numOfMetadataTasks] */

void FUN_10b275c78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0de170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_numOfMetadataTasks_112615270);
  return;
}



/* Entry: 10b275c80; end: 10b275c87; -[SCRequestManagerRunningTaskState numOfUploadTasks] */

void FUN_10b275c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0de470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_numOfUploadTasks_112615330);
  return;
}



/* Entry: 10b275c88; end: 10b275c8f; -[SCRequestManagerRunningTaskState numOfSmallDLTasks] */

void FUN_10b275c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0de310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_numOfSmallDLTasks_1126152d8);
  return;
}



/* Entry: 10b275c90; end: 10b275c97; -[SCRequestManagerRunningTaskState numOfLargeDLTasks] */

void FUN_10b275c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0de130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_numOfLargeDLTasks_112615260);
  return;
}



/* Entry: 10b275c98; end: 10b275c9f; -[SCRequestManagerRunningTaskState numOfBatchSmallDLTasks] */

void FUN_10b275c98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0de0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_numOfBatchSmallDLTasks_112615240);
  return;
}



/* Entry: 10b275ca0; end: 10b275ca7; -[SCRequestManagerRunningTaskState numOfRunningInContextDownloadTasks] */

void FUN_10b275ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0de2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_numOfRunningInContextDownloadTas_1126152c8);
  return;
}



/* Entry: 10b275ca8; end: 10b275caf; -[SCRequestManagerRunningTaskState numOfRunningLargeInContextDownloadTasks] */

void FUN_10b275ca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0de2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_numOfRunningLargeInContextDownlo_1126152d0);
  return;
}



/* Entry: 10b275cb0; end: 10b275cb7; -[SCRequestManagerRunningTaskState startRunningTask:] */

void FUN_10b275cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1272b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_registerTask__1126276c8)
  ;
  return;
}



/* Entry: 10b275cb8; end: 10b275cbf; -[SCRequestManagerRunningTaskState finishRunningTask:] */

void FUN_10b275cb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c282210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_unregisterTask__11267e2a8);
  return;
}



/* Entry: 10b275cc0; end: 10b275cc7; -[SCRequestManagerRunningTaskState addContext:toTask:] */

void FUN_10b275cc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef7b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addContext_toTask__11259b868);
  return;
}



/* Entry: 10b275cc8; end: 10b275ccf; -[SCRequestManagerRunningTaskState removeContext:toTask:] */

void FUN_10b275cc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ba70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeContext_toTask__1126288b8);
  return;
}



/* Entry: 10b275cd0; end: 10b275e77; -[SCRequestManagerRunningTaskState reset] */

void FUN_10b275cd0(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 8));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10b275d38;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_48);
  return;
}



/* Entry: 10b275e78; end: 10b275e7f; -[SCRequestManagerRunningTaskState downloadRequestConcurrency] */

undefined8 FUN_10b275e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b275e80; end: 10b275e87; -[SCRequestManagerRunningTaskState setDownloadRequestConcurrency:] */

void FUN_10b275e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b275e88; end: 10b275e8f; -[SCRequestManagerRunningTaskState totalRequestConcurrencySendingData] */

undefined8 FUN_10b275e88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b275e90; end: 10b275e97; -[SCRequestManagerRunningTaskState setTotalRequestConcurrencySendingData:] */

void FUN_10b275e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b275e98; end: 10b275e9f; -[SCRequestManagerRunningTaskState uploadRequestConcurrency] */

undefined8 FUN_10b275e98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b275ea0; end: 10b275ea7; -[SCRequestManagerRunningTaskState setUploadRequestConcurrency:] */

void FUN_10b275ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10b275ea8; end: 10b275eaf; -[SCRequestManagerRunningTaskState analyticsRequestConcurrency] */

undefined8 FUN_10b275ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b275eb0; end: 10b275eb7; -[SCRequestManagerRunningTaskState setAnalyticsRequestConcurrency:] */

void FUN_10b275eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10b275eb8; end: 10b275ebf; -[SCRequestManagerRunningTaskState analyticsV2RequestConcurrency] */

undefined8 FUN_10b275eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b275ec0; end: 10b275ec7; -[SCRequestManagerRunningTaskState setAnalyticsV2RequestConcurrency:] */

void FUN_10b275ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10b275ec8; end: 10b275f0f; -[SCRequestManagerRunningTaskState .cxx_destruct] */

void FUN_10b275ec8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b275f10; end: 10b2761eb; -[SCCDNSelectionManager _createPredicatesIfNil] */

void FUN_10b275f10(undefined **param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **unaff_x19;
  long lVar6;
  undefined **unaff_x20;
  undefined *unaff_x21;
  undefined **ppuVar7;
  undefined8 unaff_x22;
  undefined **unaff_x23;
  undefined *unaff_x24;
  undefined8 *puVar8;
  long unaff_x25;
  long lVar9;
  long unaff_x26;
  undefined8 *puVar10;
  undefined *unaff_x27;
  undefined8 *puVar11;
  undefined **unaff_x28;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 auStack_308 [16];
  long lStack_288;
  undefined **ppuStack_280;
  undefined *puStack_278;
  long lStack_270;
  long lStack_268;
  undefined *puStack_260;
  undefined **ppuStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_1;
  if (param_1[2] == (undefined *)0x0) {
    unaff_x20 = param_1;
    func_0x00010bf33720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = unaff_x20;
    func_0x00010c142160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    ppuVar7 = unaff_x20;
    _objc_release();
    unaff_x21 = (undefined *)0x0;
    unaff_x19 = param_1;
    if (ppuVar1 != (undefined **)0x0) {
      ppuStack_210 = param_1;
      func_0x00010bf33720();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = param_1;
      func_0x00010c142160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      unaff_x21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(ppuVar7);
      puVar2 = unaff_x21;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      puStack_1f8 = puVar2;
      _objc_retain(ppuVar7);
      param_3 = &uStack_1b0;
      param_4 = auStack_f0;
      param_5 = (undefined8 *)0x10;
      ppuStack_208 = ppuVar7;
      func_0x00010bf52a60();
      if (ppuVar7 != (undefined **)0x0) {
        lStack_200 = *plStack_1a0;
        unaff_x28 = &PTR_PTR_1126b0000;
        unaff_x23 = &PTR____CFConstantStringClassReference_110db3198;
        do {
          unaff_x20 = (undefined **)0x0;
          do {
            if (*plStack_1a0 != lStack_200) {
              _objc_enumerationMutation(ppuStack_208);
            }
            unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            unaff_x25 = *(long *)(lStack_1a8 + (long)unaff_x20 * 8);
            unaff_x26 = unaff_x25;
            func_0x00010c28f720();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf529e0();
            func_0x00010bf0a0e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x26);
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            lStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            puStack_1e0 = (undefined8 *)0x0;
            func_0x00010c28f720();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = unaff_x25;
            func_0x00010bf52a60();
            if (lVar9 != 0) {
              unaff_x21 = (undefined *)*puStack_1e0;
              do {
                lVar6 = 0;
                do {
                  if ((undefined *)*puStack_1e0 != unaff_x21) {
                    _objc_enumerationMutation(unaff_x25);
                  }
                  uStack_220 = *(undefined8 *)(lStack_1e8 + lVar6 * 8);
                  unaff_x27 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
                  func_0x00010c1063c0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(unaff_x24);
                  _objc_release(unaff_x27);
                  lVar6 = lVar6 + 1;
                } while (lVar9 != lVar6);
                lVar9 = unaff_x25;
                func_0x00010bf52a60();
                unaff_x26 = 0;
              } while (lVar9 != 0);
            }
            _objc_release(unaff_x25);
            func_0x00010befa120(puStack_1f8);
            _objc_release(unaff_x24);
            unaff_x20 = (undefined **)((long)unaff_x20 + 1);
          } while (unaff_x20 != ppuVar7);
          param_3 = &uStack_1b0;
          param_4 = auStack_f0;
          param_5 = (undefined8 *)0x10;
          ppuVar7 = ppuStack_208;
          func_0x00010bf52a60();
          unaff_x22 = 0;
        } while (ppuVar7 != (undefined **)0x0);
      }
      unaff_x19 = ppuStack_208;
      _objc_release(ppuStack_208);
      puVar2 = ppuStack_210[2];
      ppuStack_210[2] = puStack_1f8;
      _objc_release(puVar2);
      ppuVar7 = unaff_x19;
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_350;
  pcStack_228 = FUN_10b2761ec;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  puVar11 = param_4;
  ppuStack_280 = unaff_x28;
  puStack_278 = unaff_x27;
  lStack_270 = unaff_x26;
  lStack_268 = unaff_x25;
  puStack_260 = unaff_x24;
  ppuStack_258 = unaff_x23;
  uStack_250 = unaff_x22;
  puStack_248 = unaff_x21;
  ppuStack_240 = unaff_x20;
  ppuStack_238 = unaff_x19;
  puStack_230 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar10 = param_4;
  if ((param_3 == (undefined8 *)0x37e30d) || (param_3 == (undefined8 *)0x37af15)) {
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    _objc_retain(param_4);
    puVar11 = auStack_308;
    puVar3 = param_4;
    func_0x00010bf52a60();
    if (puVar3 != (undefined8 *)0x0) {
      lVar9 = *plStack_340;
      do {
        puVar11 = (undefined8 *)0x0;
        do {
          if (*plStack_340 != lVar9) {
            _objc_enumerationMutation(param_4);
          }
          puVar8 = *(undefined8 **)(lStack_348 + (long)puVar11 * 8);
          puVar4 = puVar8;
          func_0x00010c120700();
          if ((puVar4 == param_3) ||
             (puVar4 = puVar8, func_0x00010c120700(), puVar4 == (undefined8 *)0x179ec)) {
            func_0x00010bf33740();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar8;
            puVar11 = param_5;
            func_0x00010be1e940();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            goto LAB_10b2763ac;
          }
          puVar11 = (undefined8 *)((long)puVar11 + 1);
        } while (puVar3 != puVar11);
        puVar11 = auStack_308;
        puVar3 = param_4;
        puVar4 = &uStack_350;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined8 *)0x0);
    }
    _objc_release(param_4);
    puVar3 = puVar4;
  }
  else {
    puVar4 = param_4;
    func_0x00010bf529e0();
    if (puVar4 != (undefined8 *)0x0) {
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar10;
      func_0x00010bf33740();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      puVar11 = param_5;
      func_0x00010be1e940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
LAB_10b2763ac:
      _objc_release(puVar10);
      goto LAB_10b2763c8;
    }
  }
  ppuVar7 = &PTR____CFConstantStringClassReference_110f62078;
  _objc_retain(&PTR____CFConstantStringClassReference_110f62078);
LAB_10b2763c8:
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
    ___stack_chk_fail();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar3);
    _objc_retain(puVar11);
    _objc_retain(puVar11);
    puVar4 = puVar11;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (puVar4 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(puVar11);
        }
        ppuVar7 = *(undefined ***)((long)puVar10 * 8);
        ppuVar1 = ppuVar7;
        func_0x00010bf33740();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar1;
        func_0x00010c0720c0();
        _objc_release(ppuVar1);
        if (((ulong)ppuVar5 & 1) != 0) {
          func_0x00010bfe4420(ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          goto LAB_10b27654c;
        }
        puVar10 = (undefined8 *)((long)puVar10 + 1);
      } while (puVar4 != puVar10);
      puVar4 = puVar11;
      func_0x00010bf52a60();
    }
    _objc_release(puVar11);
    ppuVar7 = &PTR____CFConstantStringClassReference_110f62078;
    _objc_retain(&PTR____CFConstantStringClassReference_110f62078);
LAB_10b27654c:
    _objc_release(puVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar3[1],PTR_s_removeAllObjects_112628590);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 10b2761ec; end: 10b276417; -[SCCDNSelectionManager _getDestinationHostWithReachability:routingRules:cdnInfos:] */

void FUN_10b2761ec(undefined **param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar10 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_4;
  if ((param_3 == (undefined1 *)0x37e30d) || (param_3 == (undefined1 *)0x37af15)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_4);
    puVar10 = auStack_e8;
    puVar1 = param_4;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_4);
          }
          puVar7 = *(undefined1 **)(lStack_128 + (long)puVar10 * 8);
          puVar9 = puVar7;
          func_0x00010c120700();
          if ((puVar9 == param_3) ||
             (puVar9 = puVar7, func_0x00010c120700(), puVar9 == (undefined1 *)0x179ec)) {
            func_0x00010bf33740();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puVar7;
            puVar10 = param_5;
            func_0x00010be1e940();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            goto LAB_10b2763ac;
          }
          puVar10 = puVar10 + 1;
        } while (puVar1 != puVar10);
        puVar10 = auStack_e8;
        puVar1 = param_4;
        puVar5 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(param_4);
    puVar1 = (undefined1 *)puVar5;
  }
  else {
    puVar9 = param_4;
    func_0x00010bf529e0();
    if (puVar9 != (undefined1 *)0x0) {
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
      func_0x00010bf33740();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar9;
      puVar10 = param_5;
      func_0x00010be1e940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
LAB_10b2763ac:
      _objc_release(puVar2);
      goto LAB_10b2763c8;
    }
  }
  param_1 = &PTR____CFConstantStringClassReference_110f62078;
  _objc_retain(&PTR____CFConstantStringClassReference_110f62078);
LAB_10b2763c8:
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar1);
    _objc_retain(puVar10);
    _objc_retain(puVar10);
    puVar2 = puVar10;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (puVar2 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(puVar10);
        }
        param_1 = *(undefined ***)((long)puVar9 * 8);
        ppuVar3 = param_1;
        func_0x00010bf33740();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar3;
        func_0x00010c0720c0();
        _objc_release(ppuVar3);
        if (((ulong)ppuVar4 & 1) != 0) {
          func_0x00010bfe4420(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          goto LAB_10b27654c;
        }
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = puVar10;
      func_0x00010bf52a60();
    }
    _objc_release(puVar10);
    param_1 = &PTR____CFConstantStringClassReference_110f62078;
    _objc_retain(&PTR____CFConstantStringClassReference_110f62078);
LAB_10b27654c:
    _objc_release(puVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(puVar1 + 8),PTR_s_removeAllObjects_112628590);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b276418; end: 10b27659b; -[SCCDNSelectionManager _getDestinationHostForCdnId:cdnInfos:] */

void FUN_10b276418(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(param_4);
      ppuVar6 = &PTR____CFConstantStringClassReference_110f62078;
      _objc_retain(&PTR____CFConstantStringClassReference_110f62078);
LAB_10b27654c:
      _objc_release(param_4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_3 + 8),PTR_s_removeAllObjects_112628590);
      return;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      ppuVar6 = *(undefined ***)(lVar7 * 8);
      ppuVar3 = ppuVar6;
      func_0x00010bf33740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c0720c0();
      _objc_release(ppuVar3);
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x00010bfe4420(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_4);
        goto LAB_10b27654c;
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10b27659c; end: 10b2765a3; -[SCCDNSelectionManager resetUrlMappingCaches] */

void FUN_10b27659c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10b2765a4; end: 10b2765af; -[SCCDNSelectionManager cachedCDNClientConfigurationString] */

void FUN_10b2765a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 10b2765b0; end: 10b2765b7; -[SCCDNSelectionManager setCachedCDNClientConfigurationString:] */

void FUN_10b2765b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10b2765b8; end: 10b2765c3; -[SCCDNSelectionManager cdnClientConfig] */

void FUN_10b2765b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 10b2765c4; end: 10b2765cb; -[SCCDNSelectionManager setCdnClientConfig:] */

void FUN_10b2765c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10b2765cc; end: 10b2765fb; -[SCCDNSelectionManager setMappedCofConfig:] */

void FUN_10b2765cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2765fc; end: 10b276667; -[SCCDNSelectionManager .cxx_destruct] */

void FUN_10b2765fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 10b276668; end: 10b27666f; -[SCMappedCdnClientConfig mappedRoutingDefinitions] */

undefined8 FUN_10b276668(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b276670; end: 10b27673b; -[SCMappedRoutingDefinition init:withRouteRules:withRouteInfo:] */

undefined1 *
FUN_10b276670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112706070;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfc9600();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b27673c; end: 10b276987; -[SCMappedRoutingDefinition getReachabilityCdnHostMap:withRouteInfo:] */

void FUN_10b27673c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = 0x179ec;
  func_0x000107c309e8(0x179ec);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  if ((param_4 != 0) && (uVar9 = param_4, func_0x00010bf529e0(), uVar9 != 0)) {
    uVar9 = 0;
    do {
      uVar3 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf33740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar2,param_2,uVar4,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar9 = uVar9 + 1;
      uVar3 = param_4;
      func_0x00010bf529e0();
    } while (uVar9 < uVar3);
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar9 = param_3;
  func_0x00010bf529e0();
  if (uVar9 != 0) {
    uVar9 = 0;
    do {
      uVar3 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar3 != 0) {
        uVar3 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf33740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        puVar8 = puVar2;
        func_0x00010c0dff20(puVar2,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 != (undefined *)0x0) {
          if (uVar9 == 0) {
            func_0x00010c220220(puVar7,param_2,puVar8,uVar1);
          }
          uVar3 = param_3;
          func_0x00010c0dfd40(param_3,param_2,uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c1206a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c220220(puVar7,param_2,puVar8,uVar5);
          _objc_release(uVar5);
          _objc_release(uVar3);
        }
        _objc_release(puVar8);
        _objc_release(uVar4);
      }
      uVar9 = uVar9 + 1;
      uVar3 = param_3;
      func_0x00010bf529e0();
    } while (uVar9 < uVar3);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b276988; end: 10b27698f; -[SCMappedRoutingDefinition urlMatchPatterns] */

undefined8 FUN_10b276988(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b276990; end: 10b276997; -[SCMappedRoutingDefinition urlPredicates] */

undefined8 FUN_10b276990(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b276998; end: 10b27699f; -[SCMappedRoutingDefinition reachabilityCdnHostMap] */

undefined8 FUN_10b276998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b2769a0; end: 10b2769e7; -[SCRequestRouting .cxx_destruct] */

void FUN_10b2769a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b2769e8; end: 10b276a3f; +[SCAPI isErrorSojuResponse:] */

uint FUN_10b2769e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_loggedValue_11260a7e0);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0b3740(param_3);
    uVar2 = (uint)uVar1 ^ 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10b276a40; end: 10b276a77; +[SCAPI errorMessageForResponseDictionary:] */

void FUN_10b276a40(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110dd9438);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010b277114();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b276a78; end: 10b276aaf; +[SCAPI fallbackMessageForResponseDictionary:] */

void FUN_10b276a78(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110f608f8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010b277114();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b276ab0; end: 10b276b77; +[SCAPI requestCouldNotConnectErrorDictionary] */

void FUN_10b276ab0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long lVar7;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b25802c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010b258014();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc3e98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dae758;
    ppuStack_a8 = ppuVar3;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = &ppuStack_a8;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_a0 = ppuVar4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      _objc_retain(pppuVar6);
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      ppuVar4 = &PTR____CFConstantStringClassReference_110dc3e98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf720a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      func_0x00010bf98d80();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110dae758;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c220220(puVar2);
      pppuVar5 = pppuVar6;
      func_0x00010c0e00e0(pppuVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar2);
      _objc_release(pppuVar5);
      pppuVar5 = pppuVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (pppuVar5 != (undefined ***)0x0) {
        pppuVar5 = pppuVar6;
        func_0x00010c0e00e0(pppuVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar2);
        _objc_release(pppuVar5);
      }
      _objc_release(ppuVar3);
      _objc_release(pppuVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b276b78; end: 10b276c57; +[SCAPI requestSomethingWentWrongErrorDictionary] */

void FUN_10b276b78(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc3e98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dae758;
  ppuStack_48 = ppuVar1;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
  _objc_retainAutoreleasedReturnValue();
  pppuVar5 = &ppuStack_48;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_retain(pppuVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc3e98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf720a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    func_0x00010bf98d80();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dae758;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c220220(puVar3);
    pppuVar4 = pppuVar5;
    func_0x00010c0e00e0(pppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar3);
    _objc_release(pppuVar4);
    pppuVar4 = pppuVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (pppuVar4 != (undefined ***)0x0) {
      pppuVar4 = pppuVar5;
      func_0x00010c0e00e0(pppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar3);
      _objc_release(pppuVar4);
    }
    _objc_release(ppuVar1);
    _objc_release(pppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b276c58; end: 10b276ddb; +[SCAPI requestErrorInfoWithRequestDictionary:] */

void FUN_10b276c58(undefined **param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc3e98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf720a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x00010bf98d80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined **)0x0) {
    param_1 = &PTR____CFConstantStringClassReference_110dae758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c220220(puVar2);
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar2);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b276ddc; end: 10b276f1f; +[SCAPI extractErrorMessageFromFailureResponse:] */

void FUN_10b276ddc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf64920(lVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    if (ppuVar3 != (undefined **)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      ppuVar5 = ppuVar3;
      _objc_opt_isKindOfClass(ppuVar3,puVar4);
      if (((ulong)ppuVar5 & 1) != 0) {
        ppuVar5 = ppuVar3;
        func_0x00010c0dff20(ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        _objc_release(lVar2);
        goto LAB_10b276f00;
      }
    }
    _objc_release(ppuVar3);
    _objc_release(0);
    _objc_release(lVar2);
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110e50bb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e50bb8,0);
  _objc_retainAutoreleasedReturnValue();
LAB_10b276f00:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10b276f20; end: 10b276feb; +[SCAPI methodForString:] */

undefined8 FUN_10b276f20(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf433c0(param_3,param_2,&PTR____CFConstantStringClassReference_110deec98,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    lVar1 = param_3;
    func_0x00010bf433c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dada18,1);
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010bf433c0(param_3,param_2,&PTR____CFConstantStringClassReference_110deecd8,1);
      if (lVar1 == 0) {
        uVar2 = 2;
      }
      else {
        lVar1 = param_3;
        func_0x00010bf433c0(param_3,param_2,&PTR____CFConstantStringClassReference_110deecb8,1);
        if (lVar1 == 0) {
          uVar2 = 3;
        }
        else {
          lVar1 = param_3;
          func_0x00010bf433c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e0ce98,1);
          uVar2 = 4;
          if (lVar1 != 0) {
            uVar2 = 0;
          }
        }
      }
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10b276fec; end: 10b27706b; +[SCAPI failureReasonFromStatusCode:withError:] */

undefined8 FUN_10b276fec(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (param_3 == 0x191) {
    uVar2 = 5;
  }
  else {
    if (param_3 == 0) {
      lVar1 = param_4;
      func_0x00010bf3ec40();
      if (lVar1 + 0x3f1U < 10) {
        uVar2 = *(undefined8 *)(&UNK_10e56fc10 + (lVar1 + 0x3f1U) * 8);
        goto LAB_10b277054;
      }
    }
    else if (399 < param_3) {
      uVar2 = 4;
      goto LAB_10b277054;
    }
    uVar2 = 0;
  }
LAB_10b277054:
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 10b27706c; end: 10b2770a3; +[SCAPI failureReasonFromPosixErrorCode:] */

undefined8 FUN_10b27706c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 0xfffffffffffffffe) == 0x32) {
    return 1;
  }
  if (param_3 - 0x3d < 5) {
    return *(undefined8 *)(&UNK_10e56fc60 + (param_3 - 0x3d) * 8);
  }
  return 2;
}



/* Entry: 10b2770a4; end: 10b2770d3; +[SCAPI stringForFailureReason:] */

void FUN_10b2770a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = (&PTR_PTR_110ccc4a8)[param_3];
  _objc_retain(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2770d4; end: 10b2770fb; +[SCAPI failureReasonStringFromPosixErrorCode:] */

void FUN_10b2770d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfa00e0();
                    /* WARNING: Could not recover jumptable at 0x00010c25d2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stringForFailureReason__112674ed8,uVar1);
  return;
}


