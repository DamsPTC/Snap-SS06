/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ee7624; end: 107ee762b; -[SCCloudSync setSyncedFirstPage:] */

void FUN_107ee7624(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x121) = param_3;
  return;
}



/* Entry: 107ee762c; end: 107ee77c3; -[SCCloudSync .cxx_destruct] */

void FUN_107ee762c(long param_1)

{
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 107ee77c4; end: 107ee7833;  */

double FUN_107ee77c4(float param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  double dVar2;
  
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ec019c();
  dVar1 = (double)param_1;
  _pow(dVar1,(double)param_3);
  _objc_release(param_2);
  dVar2 = (double)NEON_ucvtf((long)(dVar1 * 750.0));
  dVar1 = 86400000.0;
  if (dVar2 <= 86400000.0) {
    dVar1 = dVar2;
  }
  return dVar1;
}



/* Entry: 107ee7834; end: 107ee78ef; -[SCCloudSyncOperation serialize] */

void FUN_107ee7834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010c27dd80();
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  _objc_alloc(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
  func_0x00010bfef3a0();
  func_0x00010bf92fc0();
  func_0x00010c0b7940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(puVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110ec36d8);
  _objc_release(param_1);
  func_0x00010bfaf860(puVar1);
  puVar2 = puVar1;
  func_0x00010bf934c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ee78f0; end: 107ee7977; -[SCCloudSyncOperation deserializeData:requestID:userTrackedLogger:] */

void FUN_107ee78f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf6e8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107ee7978; end: 107ee7b5f; +[SCCloudSyncOperation deserialize:requestID:userTrackedLogger:] */

void FUN_107ee7978(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010800c28c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c27dd80();
  puVar1 = param_3;
  func_0x00010c245de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  switch(puVar3) {
  case (undefined *)0x0:
    puVar3 = PTR_PTR_1126d8240;
    _objc_opt_new(PTR_PTR_1126d8240);
    func_0x00010c1ebd20();
    func_0x00010c1d5a60(puVar3,param_2,10);
    func_0x00010c197240(puVar3,param_2,4);
    uVar2 = 4;
    func_0x00010baa2848(4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1971a0(puVar3,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    _objc_release(puVar3);
    puVar3 = (undefined *)0x0;
    goto LAB_107ee7b28;
  case (undefined *)0x1:
    puVar3 = PTR_PTR_1126d8268;
    break;
  case (undefined *)0x2:
    puVar3 = PTR_PTR_1126d7f40;
    break;
  case (undefined *)0x3:
    puVar3 = PTR_PTR_1126d82a0;
    break;
  case (undefined *)0x4:
    puVar3 = PTR_PTR_1126d7f38;
    break;
  case (undefined *)0x5:
    puVar3 = PTR_PTR_1126d7f58;
    break;
  case (undefined *)0x6:
    puVar3 = PTR_PTR_1126d82f8;
    break;
  case (undefined *)0x7:
    puVar3 = PTR_PTR_1126d7f50;
    break;
  case (undefined *)0x8:
    puVar3 = PTR_PTR_1126d7f20;
    break;
  case (undefined *)0x9:
    puVar3 = PTR_PTR_1126d7f30;
    break;
  case (undefined *)0xa:
    puVar3 = PTR_PTR_1126d83d0;
    break;
  case (undefined *)0xb:
    puVar3 = PTR_PTR_1126d8328;
    break;
  case (undefined *)0xc:
    puVar3 = PTR_PTR_1126d7f60;
    break;
  default:
    goto LAB_107ee7b28;
  }
  _objc_alloc(puVar3);
  func_0x00010c04a260();
LAB_107ee7b28:
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ee7b60; end: 107ee7ce7; +[SCCloudSyncOperation numberOfSnapsForPayload:requestID:] */

undefined * FUN_107ee7b60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  func_0x00010800c28c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c27dd80();
  puVar5 = (undefined *)0x1;
  lVar2 = param_3;
  if (lVar1 < 5) {
    if (2 < lVar1) {
      if (lVar1 == 3) {
        func_0x00010c245de0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126d82a0;
      }
      else {
        if (lVar1 != 4) goto LAB_107ee7cc0;
        func_0x00010c245de0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126d7f38;
      }
      goto LAB_107ee7c7c;
    }
    if ((lVar1 != 0) && (lVar1 != 2)) goto LAB_107ee7cc0;
  }
  else if (lVar1 < 7) {
    if (lVar1 != 5) {
      if (lVar1 != 6) goto LAB_107ee7cc0;
      func_0x00010c245de0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d82f8;
LAB_107ee7c7c:
      _objc_alloc(puVar3);
      func_0x00010c04a260();
      puVar4 = puVar3;
      func_0x00010c2424c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf529e0();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar2);
      goto LAB_107ee7cc0;
    }
  }
  else {
    if (lVar1 == 8) {
      func_0x00010c245de0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d7f20;
      goto LAB_107ee7c7c;
    }
    if (lVar1 != 7) goto LAB_107ee7cc0;
  }
  puVar5 = (undefined *)0x0;
LAB_107ee7cc0:
  _objc_release(param_3);
  _objc_release(param_4);
  return puVar5;
}



/* Entry: 107ee7ce8; end: 107ee7e9b; +[SCCloudSyncOperation snaps:details:private:forPayload:requestID:dataObjectContext:userTrackedLogger:] */

void FUN_107ee7ce8(long param_1,undefined8 param_2,long *param_3,long *param_4,undefined1 *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  
  _objc_retain(param_8);
  if (param_3 != (long *)0x0 || param_4 != (long *)0x0) {
    func_0x00010bf6e8e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      lVar3 = param_1;
      func_0x00010010fab4(param_1,PTR_DAT_1126a50b0);
      if ((int)lVar3 == 0) {
        uVar5 = 0;
        lVar4 = 0;
        lVar3 = 0;
      }
      else {
        _objc_retain(param_1);
        lVar3 = param_1;
        func_0x00010c2424c0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf529e0();
        lVar1 = param_1;
        func_0x00010bf6f620();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf529e0();
        _objc_release(lVar1);
        _objc_release(lVar3);
        if (lVar4 == lVar2) {
          lVar3 = param_1;
          func_0x00010c2424c0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_1;
          func_0x00010bf6f620();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = param_1;
          func_0x00010c07b300();
          uVar5 = (undefined1)lVar1;
        }
        else {
          uVar5 = 0;
          lVar4 = 0;
          lVar3 = 0;
        }
        _objc_release(param_1);
      }
      lVar1 = lVar3;
      func_0x00010bf529e0();
      lVar2 = lVar4;
      func_0x00010bf529e0();
      if (lVar1 == lVar2) {
        if (param_3 != (long *)0x0) {
          _objc_retainAutorelease(lVar3);
          *param_3 = lVar3;
        }
        if (param_4 != (long *)0x0) {
          _objc_retainAutorelease(lVar4);
          *param_4 = lVar4;
        }
        *param_5 = uVar5;
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 107ee7e9c; end: 107ee7ed7; -[SCCloudSyncOperation recordOperationStartNetworkProcessing] */

void FUN_107ee7e9c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ee7ed8; end: 107ee7edf; -[SCCloudSyncOperation type] */

undefined8 FUN_107ee7ed8(void)

{
  return 0;
}



/* Entry: 107ee7ee0; end: 107ee7ee7; -[SCCloudSyncOperation analyticsType] */

undefined8 FUN_107ee7ee0(void)

{
  return 1;
}



/* Entry: 107ee7ee8; end: 107ee7eef; -[SCCloudSyncOperation requestID] */

undefined8 FUN_107ee7ee8(void)

{
  return 0;
}



/* Entry: 107ee7ef0; end: 107ee7ef7; -[SCCloudSyncOperation entryIds] */

undefined8 FUN_107ee7ef0(void)

{
  return 0;
}



/* Entry: 107ee7ef8; end: 107ee7eff; -[SCCloudSyncOperation makeSnapshot] */

undefined8 FUN_107ee7ef8(void)

{
  return 0;
}



/* Entry: 107ee7f00; end: 107ee7f17; -[SCCloudSyncOperation initWithSnapshot:requestID:] */

undefined8 FUN_107ee7f00(void)

{
  _objc_release();
  return 0;
}



/* Entry: 107ee7f18; end: 107ee7f1f; -[SCCloudSyncOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:] */

undefined8 FUN_107ee7f18(void)

{
  return 0;
}



/* Entry: 107ee7f20; end: 107ee7f27; -[SCCloudSyncOperation executeOptimisticallyWithDataObjectContext:] */

undefined8 FUN_107ee7f20(void)

{
  return 0;
}



/* Entry: 107ee7f28; end: 107ee7f2b; -[SCCloudSyncOperation prepareRemoteSyncWithDataObjectContext:cloudFS:dataVault:networker:logger:queue:completionHandler:] */

void FUN_107ee7f28(void)

{
  return;
}



/* Entry: 107ee7f2c; end: 107ee7f37; -[SCCloudSyncOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:] */

void FUN_107ee7f2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8eb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae6b8,PTR_s_empty_1125c1470);
  return;
}



/* Entry: 107ee7f38; end: 107ee7f3f; -[SCCloudSyncOperation commitWithEntryUpdates:dataObjectContext:] */

undefined8 FUN_107ee7f38(void)

{
  return 0;
}



/* Entry: 107ee7f40; end: 107ee7f43; -[SCCloudSyncOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:] */

void FUN_107ee7f40(void)

{
  return;
}



/* Entry: 107ee7f44; end: 107ee7f4b; -[SCCloudSyncOperation changedSnapContextsWithEntryUpdate:] */

undefined8 FUN_107ee7f44(void)

{
  return 0;
}



/* Entry: 107ee7f4c; end: 107ee7f53; -[SCCloudSyncOperation eligibleForOutOfOrderExecution] */

undefined8 FUN_107ee7f4c(void)

{
  return 0;
}



/* Entry: 107ee7f54; end: 107ee7f5b; -[SCCloudSyncOperation doesNotRequireMediaUpload] */

undefined8 FUN_107ee7f54(void)

{
  return 0;
}



/* Entry: 107ee7f5c; end: 107ee7f63; -[SCCloudSyncOperation allMediaUploadsCompleteWithBoltDataUploader:] */

undefined8 FUN_107ee7f5c(void)

{
  return 0;
}



/* Entry: 107ee7f64; end: 107ee7f6b; -[SCCloudSyncOperation isOperationFromRetryEntry] */

undefined8 FUN_107ee7f64(void)

{
  return 0;
}



/* Entry: 107ee7f6c; end: 107ee7f73; -[SCCloudSyncOperation isOperationValidBeforeRemoteSync:dataObjectContext:] */

undefined8 FUN_107ee7f6c(void)

{
  return 1;
}



/* Entry: 107ee7f74; end: 107ee7f7b; -[SCCloudSyncOperation logParameters] */

undefined8 FUN_107ee7f74(void)

{
  return 0;
}



/* Entry: 107ee7f7c; end: 107ee7f83; -[SCCloudSyncOperation requiresSyncStatusUpdate] */

undefined8 FUN_107ee7f7c(void)

{
  return 1;
}



/* Entry: 107ee7f84; end: 107ee7f8b; -[SCCloudSyncOperation needRunImmediately] */

undefined8 FUN_107ee7f84(void)

{
  return 0;
}



/* Entry: 107ee7f8c; end: 107ee7f93; -[SCCloudSyncOperation isEligibleForTacomaWithCOFService:] */

undefined8 FUN_107ee7f8c(void)

{
  return 0;
}



/* Entry: 107ee7f94; end: 107ee7f9b; -[SCCloudSyncOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:] */

undefined8 FUN_107ee7f94(void)

{
  return 0;
}



/* Entry: 107ee7f9c; end: 107ee7fa3; -[SCCloudSyncOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:] */

undefined8 FUN_107ee7f9c(void)

{
  return 0;
}



/* Entry: 107ee7fa4; end: 107ee7fab; -[SCCloudSyncOperation operationStartNetworkProcessingTimestampUtc] */

undefined8 FUN_107ee7fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ee7fac; end: 107ee7fb3; -[SCCloudSyncOperation setOperationStartNetworkProcessingTimestampUtc:] */

void FUN_107ee7fac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107ee7fb4; end: 107ee7fbf; -[SCCloudSyncOperation .cxx_destruct] */

void FUN_107ee7fb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ee7fc0; end: 107ee80e3; +[SCCloudSyncOperationSnapChangeLogContext snapChangeLogWithSnapId:captureSessionId:mediaId:entryId:entryType:isFromRetry:requestId:] */

void FUN_107ee7fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126d8278;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar2);
  *(undefined4 *)(puVar1 + 0xc) = param_7;
  puVar1[8] = param_8;
  uVar2 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined8 *)(puVar1 + 0x30) = param_9;
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ee80e4; end: 107ee80eb; -[SCCloudSyncOperationSnapChangeLogContext snapId] */

undefined8 FUN_107ee80e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ee80ec; end: 107ee80f3; -[SCCloudSyncOperationSnapChangeLogContext captureSessionId] */

undefined8 FUN_107ee80ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ee80f4; end: 107ee80fb; -[SCCloudSyncOperationSnapChangeLogContext mediaId] */

undefined8 FUN_107ee80f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107ee80fc; end: 107ee8103; -[SCCloudSyncOperationSnapChangeLogContext entryId] */

undefined8 FUN_107ee80fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107ee8104; end: 107ee810b; -[SCCloudSyncOperationSnapChangeLogContext entryType] */

undefined4 FUN_107ee8104(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107ee810c; end: 107ee8113; -[SCCloudSyncOperationSnapChangeLogContext isFromRetry] */

undefined1 FUN_107ee810c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107ee8114; end: 107ee811b; -[SCCloudSyncOperationSnapChangeLogContext requestId] */

undefined8 FUN_107ee8114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107ee811c; end: 107ee816f; -[SCCloudSyncOperationSnapChangeLogContext .cxx_destruct] */

void FUN_107ee811c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107ee8170; end: 107ee81bb; -[SCCloudSyncRetry retryCountForRequestID:] */

undefined8 FUN_107ee8170(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c067fc0();
    _objc_release(uVar1);
    return uVar2;
  }
  return 0;
}



/* Entry: 107ee81bc; end: 107ee8257; -[SCCloudSyncRetry increaseRetryCountForRequestID:] */

void FUN_107ee81bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c0e00e0(lVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = lVar3;
    func_0x00010c067fc0();
    func_0x00010c0df780(puVar2,param_2,lVar1 + 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
    _objc_release(param_3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 107ee8258; end: 107ee8267; -[SCCloudSyncRetry removeForRequestID:] */

void FUN_107ee8258(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectForKey__112628f18);
    return;
  }
  return;
}



/* Entry: 107ee8268; end: 107ee8273; -[SCCloudSyncRetry .cxx_destruct] */

void FUN_107ee8268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ee8274; end: 107ee863f;  */

bool FUN_107ee8274(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar3 = param_2;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    bVar2 = false;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_2);
    puVar3 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126d81e0;
        _objc_alloc();
        func_0x00010c008360();
        _objc_retain(0);
        puVar7 = puVar6;
        func_0x00010bfd4360();
        puVar13 = PTR_PTR_1126bc808;
        if ((int)puVar7 == 0) {
          _objc_release(puVar6);
          _objc_release(0);
          bVar2 = false;
          puVar3 = param_2;
          goto LAB_107ee85c8;
        }
        puVar7 = puVar6;
        func_0x00010bf0af00();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar6;
        func_0x00010bf0af00(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b9b2414();
        puVar10 = puVar6;
        func_0x00010bf89180(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar6;
        func_0x00010bf93e80(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar6;
        func_0x00010bf93ec0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfbccc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        puVar7 = PTR_PTR_1126bc820;
        func_0x00010bf5a960();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0fd880();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar13);
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar16 = puVar16 + 1;
      } while (puVar3 != puVar16);
      puVar3 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar3 = puVar4;
    func_0x00010bf51e00();
    puVar5 = puVar3;
    func_0x00010bf529e0();
    puVar16 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    if (puVar5 == (undefined *)0x0) {
      bVar2 = true;
    }
    else {
      func_0x00010bf529e0(puVar3);
      func_0x00010bfed320(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066780(param_1);
      _objc_release(puVar16);
      puVar5 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      func_0x00010bf529e0(puVar3);
      func_0x00010bfed320();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067060(param_1);
      bVar2 = true;
LAB_107ee85c8:
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(puVar14);
    puVar3 = puVar14;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      bVar2 = false;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = puVar3 != (undefined *)0x0;
      if (puVar3 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126bc800;
        func_0x00010bfbd7a0(PTR_PTR_1126bc800);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = PTR_PTR_1126bc828;
        func_0x00010bf5aa00(PTR_PTR_1126bc828);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar16;
        func_0x00010c0fd900();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c203f00(param_1);
        _objc_release(puVar5);
        puVar5 = puVar16;
        func_0x00010c0fd900(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c210f20(param_1);
        _objc_release(puVar5);
        _objc_release(puVar16);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar14);
    _objc_release(param_1);
    return bVar2;
  }
  return bVar2;
}



/* Entry: 107ee8640; end: 107ee8777;  */

bool FUN_107ee8640(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar3 != (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126bc800;
      func_0x00010bfbd7a0(PTR_PTR_1126bc800);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126bc828;
      func_0x00010bf5aa00(PTR_PTR_1126bc828);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0fd900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c203f00(param_1);
      _objc_release(puVar6);
      puVar6 = puVar5;
      func_0x00010c0fd900(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c210f20(param_1);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107ee8778; end: 107ee879b;  */

void FUN_107ee8778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_1 / 1000.0,PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 107ee879c; end: 107ee87e3;  */

void FUN_107ee879c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c23f220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ee87e4; end: 107ee887f;  */

void FUN_107ee87e4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c0ce1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126bf900;
    func_0x00010c2aec40(PTR_PTR_1126bf900,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    puVar2 = param_1;
    func_0x00010c0ce1e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ee8880; end: 107ee892f;  */

void FUN_107ee8880(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf900;
  for (; PTR_PTR_1126bf900 = puVar2, param_1 != 0; param_1 = param_1 + -1) {
    func_0x00010c2aec40(puVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126bf900;
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ee8930; end: 107ee8a93;  */

void FUN_107ee8930(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      puVar2 = PTR_PTR_1126d7f18;
      _objc_alloc(PTR_PTR_1126d7f18);
      uVar3 = param_1;
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00e960(puVar2);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      func_0x00010befa120(puVar1);
      _objc_release(puVar2);
      uVar6 = uVar6 + 1;
      uVar3 = param_1;
      func_0x00010bf529e0();
    } while (uVar6 < uVar3);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ee8a94; end: 107ee8beb;  */

undefined * FUN_107ee8a94(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010befa160(puVar1);
  }
  lVar3 = param_2;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010befa160(puVar1);
  }
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if ((undefined *)0x1 < puVar2) {
    puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246bc0(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  puVar1 = (undefined *)0xffffffffffffd8f1;
  if (param_1 != (undefined *)0x270f) {
    puVar1 = (undefined *)0x0;
  }
  if ((undefined *)0x7 < param_1 + -1) {
    param_1 = puVar1;
  }
  return param_1;
}



/* Entry: 107ee8bec; end: 107ee8c83;  */

long FUN_107ee8bec(long param_1)

{
  long lVar1;
  
  lVar1 = -9999;
  if (param_1 != 9999) {
    lVar1 = 0;
  }
  if (7 < param_1 - 1U) {
    param_1 = lVar1;
  }
  return param_1;
}



/* Entry: 107ee8c84; end: 107ee8d8f;  */

undefined * FUN_107ee8c84(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = (undefined *)0x0;
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(undefined8 *)(lVar8 * 8);
        func_0x00010c247520(uVar2);
        func_0x000107ee8c0c(puVar6,(long)(int)uVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_1;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    lVar3 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar7 = *(undefined8 *)(lVar8 * 8);
        uVar2 = uVar7;
        func_0x00010c15e520(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf97200(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(uVar7);
        _objc_release(uVar2);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    puVar4 = puVar6;
    func_0x00010bf51e00(puVar6);
    _objc_release(puVar6);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
      return puVar4;
    }
    ___stack_chk_fail();
    _objc_retain();
    lVar3 = param_1;
    func_0x00010c06cde0();
    if ((int)lVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar3 = param_1;
      func_0x00010c080740(param_1);
      puVar6 = (undefined *)(ulong)((uint)lVar3 ^ 1);
    }
    _objc_release(param_1);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 107ee8d90; end: 107ee8f07;  */

undefined * FUN_107ee8d90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        uVar5 = *(undefined8 *)(lStack_118 + lVar7 * 8);
        uVar2 = uVar5;
        func_0x00010c15e520(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf97200(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4,param_2,uVar2,uVar5);
        _objc_release(uVar5);
        _objc_release(uVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  puVar3 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c06cde0();
  if ((int)lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c080740(param_1);
    puVar4 = (undefined *)(ulong)((uint)lVar1 ^ 1);
  }
  _objc_release(param_1);
  return puVar4;
}



/* Entry: 107ee8f08; end: 107ee8f53;  */

uint FUN_107ee8f08(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c06cde0();
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c080740(param_1);
    uVar2 = (uint)uVar1 ^ 1;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107ee8f54; end: 107ee904b;  */

long FUN_107ee8f54(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010c13a8c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_107ee8f08();
  }
  else {
    lVar2 = param_1;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_1;
      FUN_107f053ac(param_1,lVar1,param_3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 107ee904c; end: 107ee9ddb;  */

void FUN_107ee904c(double param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  double dVar18;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0ed120();
  if (uVar1 < 4) {
    func_0x00010c1d6440(param_2);
  }
  uVar1 = param_3;
  func_0x00010bf298a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c176700(param_2);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c6da0(param_3);
  func_0x00010c0df760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206760(param_2);
  _objc_release(puVar2);
  func_0x00010c0c6da0(param_3);
  func_0x00010b5f9f38();
  func_0x00010c1c5440(param_2);
  uVar1 = param_3;
  func_0x00010c0c5040();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar3 = 0xffffffff9f128b37;
    func_0x00010b77c6b4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar1);
    uVar3 = uVar1;
  }
  _objc_release(uVar1);
  uVar4 = 0;
  func_0x00010b77c6b4(0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  uVar5 = uVar3;
  if ((int)uVar1 != 0) {
    uVar5 = 0xffffffff9f128b37;
    func_0x00010b77c6b4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  func_0x00010c1fd840(param_2);
  uVar3 = param_3;
  func_0x00010c0c5060();
  uVar1 = 0xffffffff9f128b37;
  if (uVar3 != 0) {
    uVar1 = uVar3;
  }
  func_0x00010b5fb5d4(uVar1);
  func_0x00010c1c4760(param_2);
  uVar1 = param_3;
  func_0x00010bf29920();
  if ((((int)uVar1 * -0x5b05b05b + 0x2d82d80U >> 2 | (int)uVar1 * 0x40000000) < 0x16c16c1) ||
     (uVar1 = param_3, func_0x00010c0c6cc0(), uVar1 == 0)) {
    func_0x00010c2a51c0(param_3);
    func_0x00010c2256c0(param_2);
    func_0x00010bfe09c0(param_3);
  }
  else {
    func_0x00010bfe09c0(param_3);
    func_0x00010c2256c0(param_2);
    func_0x00010c2a51c0(param_3);
  }
  func_0x00010c1a7d00(param_2);
  func_0x00010bf8b480(param_3);
  func_0x00010c192d40((float)param_1,param_2);
  uVar1 = param_3;
  func_0x00010bf59980(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655e0((double)(long)uVar1 / 1000.0,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185360(param_2);
  _objc_release(puVar2);
  uVar1 = param_3;
  func_0x00010bf313c0(param_3);
  dVar18 = (double)(long)uVar1 / 1000.0;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655e0(dVar18,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179340(param_2);
  _objc_release(puVar2);
  func_0x00010c1a7000(param_2);
  uVar1 = param_3;
  func_0x00010c0d21e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c97e0(param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c15e1a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcca0(param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0c41a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4140(param_2);
  _objc_release(uVar1);
  func_0x00010bfd9de0(param_3);
  func_0x00010c1a65c0(param_2);
  func_0x00010bfdd4e0(param_3);
  func_0x00010c1a70a0(param_2);
  uVar1 = param_3;
  func_0x00010c247520(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dde0();
  func_0x00010c206c40(param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c247520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf2a8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176e00(param_2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c247520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(param_2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c247520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b8e0(param_2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfb73c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f680(param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c09ea00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6360(param_2);
  _objc_release(uVar1);
  func_0x00010bfed780(param_3);
  func_0x00010c1ac2c0(param_2);
  uVar1 = param_3;
  func_0x00010c26e240(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214320(param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c26da20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213fc0(param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0efd20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d77c0(param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0ef7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7560(param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0c6160(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c50c0(param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0c4a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4520(param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c247520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c14be80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5ce0(param_2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c273740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216ee0(param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf9e420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1996e0(param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0c7520(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5820(param_2);
  _objc_release(uVar1);
  func_0x00010bfdd4e0();
  func_0x00010c214460(param_2);
  uVar1 = param_3;
  func_0x00010bf4d480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    func_0x00010c1a6160(param_2);
    func_0x00010bf4d4a0(param_3);
    func_0x00010c1ae3e0((float)dVar18,param_2);
  }
  uVar1 = param_3;
  func_0x00010bf70720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bf529e0();
  if (1 < uVar1) {
    uVar1 = uVar3;
    func_0x00010c0dfd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c9a0(param_2);
    _objc_release(uVar1);
    uVar1 = uVar3;
    func_0x00010c0dfd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c900(param_2);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0ce200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126bc7c8;
  if (uVar6 != 0) {
    lVar7 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa8b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    puVar9 = PTR_PTR_1126bf8f0;
    if (puVar2 != (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6bee0(puVar9);
      _objc_release(puVar8);
    }
    puVar8 = PTR_PTR_1126bf8f0;
    func_0x00010bf5aa20(PTR_PTR_1126bf8f0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    uVar1 = param_3;
    func_0x00010c0ce200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213f60(puVar8);
    _objc_release(puVar9);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680(puVar8);
    _objc_release(uVar1);
    puVar9 = puVar8;
    func_0x00010c0fd920(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8100(param_2);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar2);
  }
  uVar1 = param_3;
  func_0x00010bf0bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar6 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf0bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (uVar1 != 0) {
      uVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(uVar6);
        }
        puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126d81e0;
        _objc_alloc(PTR_PTR_1126d81e0);
        func_0x00010c008360();
        puVar10 = PTR_PTR_1126d83d8;
        _objc_alloc(PTR_PTR_1126d83d8);
        puVar11 = puVar8;
        func_0x00010bf0af00(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar8;
        func_0x00010bf0af00(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b9b2414();
        puVar14 = puVar8;
        func_0x00010bdc2b80(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff4420(puVar10);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        func_0x00010befa120(puVar2);
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(puVar9);
        uVar17 = uVar17 + 1;
      } while (uVar1 != uVar17);
      uVar1 = uVar6;
      func_0x00010bf52a60();
    }
    _objc_release(uVar6);
    puVar9 = puVar2;
    func_0x00010bf529e0();
    if (puVar9 != (undefined *)0x0) {
      func_0x00010c203960(param_2);
    }
    _objc_release(puVar2);
  }
  uVar1 = param_3;
  func_0x00010c2404e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (uVar1 != 0) {
    uVar15 = param_3;
    func_0x00010c2404e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    func_0x00010c203f40(param_2);
    uVar15 = 0;
    puVar9 = puVar2;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf30e80();
    _objc_release(puVar8);
    func_0x00010c179060(param_2);
    _objc_release(puVar9);
    _objc_release(puVar2);
  }
  uVar1 = param_3;
  func_0x00010bf93d20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x000108dfcc4c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (uVar6 != 0) {
    uVar1 = uVar6;
    func_0x00010bf93ec0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    uVar1 = uVar6;
    func_0x00010bf93e80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010bf93ce0(uVar6);
    puVar8 = PTR_PTR_1126bf908;
    _objc_alloc();
    func_0x00010c020a60();
    func_0x00010c195c20(param_2);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar2);
  }
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(uVar15);
    if (uVar15 != 0) {
      lVar16 = param_2;
      func_0x00010c26e220();
      _objc_retainAutoreleasedReturnValue();
      if (lVar16 == 0) {
        uVar1 = uVar15;
        func_0x00010c26e220(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c214320(param_2);
        _objc_release(uVar1);
      }
      else {
        func_0x00010c214320(param_2);
      }
      _objc_release(lVar16);
      lVar16 = param_2;
      func_0x00010c26da80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar16 == 0) {
        uVar1 = uVar15;
        func_0x00010c26da80(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213fc0(param_2);
        _objc_release(uVar1);
      }
      else {
        func_0x00010c213fc0(param_2);
      }
      _objc_release(lVar16);
      lVar16 = param_2;
      func_0x00010c0efd00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar16 == 0) {
        uVar1 = uVar15;
        func_0x00010c0efd00(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d77c0(param_2);
        _objc_release(uVar1);
      }
      else {
        func_0x00010c1d77c0(param_2);
      }
      _objc_release(lVar16);
      lVar16 = param_2;
      func_0x00010c0ef7c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar16 == 0) {
        uVar1 = uVar15;
        func_0x00010c0ef7c0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d7560(param_2);
        _objc_release(uVar1);
      }
      else {
        func_0x00010c1d7560(param_2);
      }
      _objc_release(lVar16);
      lVar16 = param_2;
      func_0x00010c0c6140();
      _objc_retainAutoreleasedReturnValue();
      if (lVar16 == 0) {
        uVar1 = uVar15;
        func_0x00010c0c6140(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c50c0(param_2);
        _objc_release(uVar1);
      }
      else {
        func_0x00010c1c50c0(param_2);
      }
      _objc_release(lVar16);
      lVar16 = param_2;
      func_0x00010c0c4ae0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar16 == 0) {
        uVar1 = uVar15;
        func_0x00010c0c4ae0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c4520(param_2);
        _objc_release(uVar1);
      }
      else {
        func_0x00010c1c4520(param_2);
      }
      _objc_release(lVar16);
    }
    _objc_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 107ee9ddc; end: 107eea02f;  */

void FUN_107ee9ddc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_1;
    func_0x00010c26e220();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_2;
      func_0x00010c26e220(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214320(param_1);
      _objc_release(lVar2);
    }
    else {
      func_0x00010c214320(param_1);
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c26da80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_2;
      func_0x00010c26da80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213fc0(param_1);
      _objc_release(lVar2);
    }
    else {
      func_0x00010c213fc0(param_1);
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0efd00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_2;
      func_0x00010c0efd00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d77c0(param_1);
      _objc_release(lVar2);
    }
    else {
      func_0x00010c1d77c0(param_1);
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0ef7c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_2;
      func_0x00010c0ef7c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7560(param_1);
      _objc_release(lVar2);
    }
    else {
      func_0x00010c1d7560(param_1);
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0c6140();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_2;
      func_0x00010c0c6140(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c50c0(param_1);
      _objc_release(lVar2);
    }
    else {
      func_0x00010c1c50c0(param_1);
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0c4ae0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_2;
      func_0x00010c0c4ae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4520(param_1);
      _objc_release(lVar2);
    }
    else {
      func_0x00010c1c4520(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107eea030; end: 107eeb68b;  */

void FUN_107eea030(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,undefined8 param_8,undefined8 param_9,long param_10,
                  undefined8 param_11,long param_12)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  float fVar20;
  double dVar21;
  undefined **ppuStack_388;
  long lStack_338;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_120;
  long lStack_118;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126d83e0;
  func_0x00010c2b1d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf9e420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bf9e420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1996e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_338 = param_4;
  if ((param_3 != 0) && (param_4 == 0)) {
    lStack_338 = param_10;
    func_0x00010bfbfb80();
    _objc_retainAutoreleasedReturnValue();
    if (lStack_338 == 0) {
      lStack_338 = 0;
    }
    else {
      puVar3 = PTR_PTR_1126bf900;
      func_0x00010c2aec40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c213f60();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puStack_1d8 = puVar7;
      uStack_1d0 = 0xc2000000;
      pcStack_1c8 = FUN_107eeb68c;
      puStack_1c0 = &UNK_110848ba8;
      puStack_1b8 = puVar5;
      _objc_retain(param_1);
      lStack_1b0 = param_1;
      _objc_retain(param_9);
      uStack_1a8 = param_9;
      _objc_retain(puVar5);
      func_0x00010c0f8520(param_9);
      _objc_release(uStack_1a8);
      _objc_release(lStack_1b0);
      _objc_release(puStack_1b8);
      _objc_release(puVar5);
    }
  }
  puStack_200 = &uStack_208;
  uStack_208 = 0;
  uStack_1f8 = 0x3032000000;
  pcStack_1f0 = FUN_107eeb764;
  uStack_1e8 = 0x107eeb774;
  uStack_1e0 = 0;
  uVar6 = 0;
  _dispatch_semaphore_create();
  puVar7 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  uVar8 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar6);
  func_0x00010c135a60(param_8);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _dispatch_semaphore_wait(uVar6,0xffffffffffffffff);
  uVar8 = puStack_200[5];
  func_0x00010c271e60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195c20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  lVar2 = param_1;
  func_0x00010bf59960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c185380(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c247520();
  lVar9 = param_12;
  func_0x00010c0c7fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  if (((uint)lVar2 < 8) && ((1 << (ulong)((uint)lVar2 & 0x1f) & 0x8aU) != 0)) {
    lVar2 = param_1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_1;
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar10;
      func_0x00010bfa7c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = param_1;
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bfa7be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if ((lVar9 != 0) && (lVar11 != 0)) {
        puVar7 = PTR_PTR_1126d83f0;
        func_0x00010c2b1c00(PTR_PTR_1126d83f0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18a6c0();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c18a6a0(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar3 = puVar7;
        func_0x00010bf21f60(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c271e60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18a680(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar7);
      }
      _objc_release(lVar11);
      _objc_release(lVar9);
    }
  }
  lVar2 = param_1;
  func_0x00010bf313a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bf313a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c179360(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  func_0x00010bfed740(param_1);
  func_0x00010c1ac2e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d83f8;
  _objc_alloc_init();
  func_0x00010c247520(param_1);
  func_0x00010c21ace0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf2a8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176e00(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf0e960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b8e0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf9e140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c14be80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5ce0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar3 = puVar7;
  func_0x00010bf21f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010bf8b0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bf8b0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206720(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar3 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107eeb43c;
  }
  lVar2 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010b5fa414(param_1);
  lVar2 = param_1;
  func_0x00010c15fa20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar9 = param_1;
    func_0x00010c15fa20();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010b77c58c();
    _objc_release(lVar9);
    _objc_release(lVar2);
    if (lVar11 == 0) {
      lVar2 = param_1;
      func_0x00010bf6e340(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec36f8,lVar2,0,param_11);
      _objc_release(lVar2);
    }
  }
  func_0x00010c0ed100();
  lVar2 = param_2;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bf6e340(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec3738,lVar2,0,param_11);
    _objc_release(lVar2);
    ppuStack_388 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lVar2 = param_2;
    func_0x00010c0ef4a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010c271c60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_388 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c008340();
    _objc_release(puVar3);
    _objc_release(lVar9);
    _objc_release(lVar2);
  }
  func_0x00010c1c5460(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1c4780(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1c47a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1d7460(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c273740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216ee0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0c41a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4140(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar8 = 0;
  lVar2 = param_2;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar11;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  fVar20 = (float)uVar8;
  do {
    if (lVar2 == 0) {
LAB_107eeaae0:
      _objc_release(lVar11);
      func_0x00010c1d6480(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bfd89e0();
      if ((int)lVar2 != 0) {
        lVar2 = param_1;
        func_0x00010c241220(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar1);
        func_0x00010c135bc0(param_8);
        _objc_release(lVar2);
        _objc_release(puVar1);
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf298a0(param_1);
      func_0x00010c0df6e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c176700(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      lVar2 = param_1;
      func_0x00010c26fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c215860(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010c2a5040(param_1);
      func_0x00010c2a5040(param_1);
      func_0x00010c225760(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010bfe0640(param_1);
      func_0x00010bfe0640(param_1);
      func_0x00010c1a7dc0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010bf8b160(param_1);
      if (NAN(fVar20)) goto LAB_107eeb51c;
      func_0x00010bf8b160(param_1);
      dVar21 = (double)fVar20;
      while( true ) {
        func_0x00010c192f40(dVar21,puVar1);
        fVar20 = SUB84(dVar21,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar2 = param_1;
        func_0x00010bfb73c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19f680(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar2 = lStack_338;
        func_0x00010bf15d80(lStack_338);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c8120(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar2 = param_1;
        func_0x00010c0d21e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c97e0(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar2 = param_1;
        func_0x00010c15e1a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fcca0(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar2 = param_5;
        func_0x00010bf16080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 != 0) {
          lVar2 = param_5;
          func_0x00010bf16080(param_5);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = param_6;
          FUN_107effb70();
          lVar11 = lVar2;
          if ((int)lVar9 != 0) {
            lVar11 = param_6;
            func_0x00010bfaca00(param_6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
          }
          lVar2 = lVar11;
          func_0x00010bfad080(lVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4ca0();
          func_0x00010c202d20(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar2);
          lVar2 = lVar11;
          func_0x00010c0c3d00(lVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c4b80(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar2);
          uVar8 = param_7;
          func_0x00010c0c6f20(param_7);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar8;
          func_0x00010c28ea80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c41c0(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar13);
          _objc_release(uVar8);
          _objc_release(lVar11);
        }
        lVar2 = param_5;
        func_0x00010c26d7c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 != 0) {
          lVar2 = param_5;
          func_0x00010c26d7c0(param_5);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar2;
          func_0x00010c0c3d00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2141e0(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar9);
          _objc_release(lVar2);
          lVar2 = param_5;
          func_0x00010c26d7c0(param_5);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar2;
          func_0x00010bfad080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4ca0();
          func_0x00010c2143c0(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar9);
          _objc_release(lVar2);
          uVar8 = param_7;
          func_0x00010c26e460(param_7);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar8;
          func_0x00010c28ea80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213e80(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar13);
          _objc_release(uVar8);
        }
        lVar2 = param_5;
        func_0x00010c0ef580();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 != 0) {
          lVar2 = param_5;
          func_0x00010c0ef580(param_5);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar2;
          func_0x00010c0c3d00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d7680(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar9);
          _objc_release(lVar2);
          lVar2 = param_5;
          func_0x00010c0ef580(param_5);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar2;
          func_0x00010bfad080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d76c0(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar9);
          _objc_release(lVar2);
          uVar8 = param_7;
          func_0x00010c0efe20(param_7);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar8;
          func_0x00010c28ea80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d7600(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar13);
          _objc_release(uVar8);
        }
        lVar2 = param_1;
        func_0x00010bfd8000();
        if ((int)lVar2 != 0) {
          func_0x00010c069060(param_1);
          func_0x00010c1826e0((double)fVar20,puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        lVar2 = param_1;
        func_0x00010bf70720();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          lVar9 = param_1;
          func_0x00010bf704c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar2);
          if (lVar9 != 0) {
            lVar2 = param_1;
            func_0x00010bf70720();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = param_1;
            lStack_120 = lVar2;
            func_0x00010bf704c0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            lStack_118 = lVar9;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar9);
            _objc_release(lVar2);
            puVar4 = puVar3;
            func_0x00010bf446e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18c9a0(puVar1);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar4);
            _objc_release(puVar3);
          }
        }
        uVar8 = param_7;
        func_0x00010bfc0e60();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar8;
        func_0x00010050471c();
        _objc_release(uVar8);
        lVar2 = param_1;
        func_0x00010c23f420();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar2;
        func_0x00010bf529e0();
        _objc_release(lVar2);
        if (lVar9 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          lVar11 = param_1;
          func_0x00010c23f420();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar11;
          func_0x00010bf52a60();
          lVar9 = lRam0000000000000000;
          while (lVar2 != 0) {
            lVar18 = 0;
            do {
              if (lRam0000000000000000 != lVar9) {
                _objc_enumerationMutation(lVar11);
              }
              uVar19 = *(undefined8 *)(lVar18 * 8);
              puVar4 = PTR_PTR_1126d81e0;
              _objc_opt_new(PTR_PTR_1126d81e0);
              puVar5 = PTR_PTR_1126d8408;
              _objc_opt_new(PTR_PTR_1126d8408);
              uVar8 = uVar19;
              func_0x00010bf0b260(uVar19);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1a99c0(puVar5);
              _objc_release(uVar8);
              uVar8 = uVar19;
              func_0x00010bf0b760(uVar19);
              func_0x00010b9b244c(puVar5,uVar8);
              func_0x00010c16a7a0(puVar4);
              lVar12 = param_5;
              func_0x00010bf0b280(param_5);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar19;
              func_0x00010bf0b260(uVar19);
              _objc_retainAutoreleasedReturnValue();
              lVar14 = lVar12;
              func_0x00010c0e00e0(lVar12);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar8);
              _objc_release(lVar12);
              lVar12 = lVar14;
              func_0x00010bfad080(lVar14);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c282760();
              func_0x00010c202c80(puVar4);
              _objc_release(lVar12);
              lVar12 = lVar14;
              func_0x00010c0c3d00(lVar14);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c3e40(puVar4);
              _objc_release(lVar12);
              func_0x00010bf0b260(uVar19);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar13;
              func_0x00010c0e00e0(uVar13);
              _objc_retainAutoreleasedReturnValue();
              uVar15 = uVar8;
              func_0x00010c28ea80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c21afe0(puVar4);
              _objc_release(uVar15);
              _objc_release(uVar8);
              _objc_release(uVar19);
              puVar16 = puVar4;
              func_0x00010bf63640(puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar17 = puVar16;
              func_0x00010bf15d80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3);
              _objc_release(puVar17);
              _objc_release(puVar16);
              _objc_release(lVar14);
              _objc_release(puVar5);
              _objc_release(puVar4);
              lVar18 = lVar18 + 1;
            } while (lVar2 != lVar18);
            lVar2 = lVar11;
            func_0x00010bf52a60();
          }
          _objc_release(lVar11);
          func_0x00010c16aae0(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar3);
        }
        puVar3 = puVar1;
        func_0x00010bf21f60(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        _objc_release(ppuStack_388);
LAB_107eeb43c:
        _objc_release(puVar7);
        _objc_release(lVar10);
        _objc_release(uVar6);
        _objc_release(uVar6);
        __Block_object_dispose(&uStack_208,8);
        _objc_release(uStack_1e0);
        _objc_release(puVar1);
        _objc_release(param_12);
        _objc_release(param_11);
        _objc_release(param_10);
        _objc_release(param_9);
        _objc_release(param_8);
        _objc_release(param_7);
        _objc_release(param_6);
        _objc_release(param_5);
        _objc_release(lStack_338);
        _objc_release(param_3);
        _objc_release(param_2);
        _objc_release(param_1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) break;
        ___stack_chk_fail();
LAB_107eeb51c:
        dVar21 = 0.0;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
      return;
    }
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar11);
      }
      lVar12 = *(long *)(lVar18 * 8);
      func_0x00010c27dde0();
      fVar20 = (float)uVar8;
      if (lVar12 == -0x15e045b1) {
        func_0x00010c1889a0(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        goto LAB_107eeaae0;
      }
      lVar18 = lVar18 + 1;
    } while (lVar2 != lVar18);
    lVar2 = lVar11;
    func_0x00010bf52a60();
    fVar20 = (float)uVar8;
  } while( true );
}



/* Entry: 107eeb68c; end: 107eeb763;  */

void FUN_107eeb68c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bf8f0;
  func_0x00010bf5aa20(PTR_PTR_1126bf8f0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0(puVar3,param_2,uVar2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126bc7f8;
  func_0x00010bf35100(PTR_PTR_1126bc7f8,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c0fd920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8100(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eeb764; end: 107eeb77b;  */

void FUN_107eeb764(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107eeb77c; end: 107eeb8f3;  */

void FUN_107eeb77c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    lVar1 = param_2;
    func_0x00010bdc1800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126d83e8;
      func_0x00010c2b1c20();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010c086560(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195ce0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar5);
      lVar5 = param_2;
      func_0x00010bdc1800(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195cc0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar5);
      func_0x00010c0719c0(param_2);
      func_0x00010c195c00(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined **)(lVar5 + 0x28) = puVar3;
      _objc_release(uVar4);
      _objc_release(puVar2);
    }
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107eeb8f4; end: 107eeb9d7;  */

void FUN_107eeb8f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d8400;
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf51c80(param_4);
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf51c80(param_4);
  _objc_release(param_4);
  func_0x00010c0df720(param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0219e0(puVar1);
  func_0x00010c1bf6c0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107eeb9d8; end: 107eebb1f;  */

undefined * FUN_107eeb9d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      func_0x00010c241220(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar7);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(param_2);
  func_0x00010bf002e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar7 = param_2;
  func_0x00010c0b8600(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c225c20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar5 = puVar4;
  func_0x00010c080280(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  return puVar5;
}



/* Entry: 107eebb20; end: 107eebbf7;  */

undefined * FUN_107eebb20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(param_2);
  func_0x00010bf002e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar2 = param_2;
  func_0x00010c0b8600(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c225c20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = puVar3;
  func_0x00010c080280(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 107eebbf8; end: 107eebbff;  */

void FUN_107eebbf8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107eebc00; end: 107eebea3;  */

void FUN_107eebc00(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfcdfa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b24e0;
    uVar4 = param_3;
    func_0x00010bf87dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40(param_3);
    func_0x00010bf59540(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar3);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0dfd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107eebea4; end: 107eec017;  */

void FUN_107eebea4(ulong param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf529e0();
  if (uVar8 != 0) {
    uVar8 = 0;
    do {
      uVar2 = param_1;
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf6f520();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010c130520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if (lVar6 == 0) {
        puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar7);
      }
      else {
        func_0x00010befa120(puVar1);
      }
      _objc_release(lVar6);
      uVar8 = uVar8 + 1;
      uVar2 = param_1;
      func_0x00010bf529e0();
    } while (uVar8 < uVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107eec018; end: 107eec72f;  */

void FUN_107eec018(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  undefined8 param_13)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  uVar11 = param_8;
  func_0x00010bf51e00(param_8);
  lVar13 = param_1;
  FUN_107ef6464(param_1,param_2,uVar11,0,param_10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  puStack_1d0 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_107eeb764;
  uStack_150 = 0x107eeb774;
  uStack_148 = 0;
  puStack_1a8 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x3032000000;
  pcStack_188 = FUN_107eeb764;
  uStack_180 = 0x107eeb774;
  uStack_178 = 0;
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_107eec730;
  puStack_1b0 = &UNK_110a12098;
  puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e8 = 0xc2000000;
  uStack_1e0 = 0x107eec768;
  puStack_1d8 = &UNK_11084d888;
  puStack_198 = puStack_1a8;
  puStack_168 = puStack_1d0;
  func_0x00010c0c0800(lVar13);
  if (puStack_168[5] == 0) {
    lVar1 = param_2;
    func_0x00010c0b8600(param_2,0,&PTR___NSConcreteGlobalBlock_110a120c8);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puStack_198[5];
    func_0x00010c241320();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar1);
    _objc_retain(uVar11);
    _objc_retain(lVar3);
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lVar4 = lVar1;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar15 = *plStack_130;
      do {
        lVar14 = 0;
        do {
          if (*plStack_130 != lVar15) {
            _objc_enumerationMutation(lVar1);
          }
          uVar16 = *(undefined8 *)(lStack_138 + lVar14 * 8);
          uVar12 = uVar16;
          func_0x00010c241220(uVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar11;
          func_0x00010c0e00e0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          uVar12 = uVar5;
          func_0x00010c0ef580(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar12;
          func_0x00010bfad080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c282760();
          func_0x00010c246620(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0();
          func_0x00010c0a9480(lVar3);
          _objc_release(uVar16);
          _objc_release(uVar6);
          _objc_release(uVar12);
          _objc_release(uVar5);
          lVar14 = lVar14 + 1;
        } while (lVar4 != lVar14);
        lVar4 = lVar1;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
    _objc_release(uVar11);
    _objc_release(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar11);
    puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_258 = 0xc2000000;
    pcStack_250 = FUN_107eec7a8;
    puStack_248 = &UNK_110a12148;
    _objc_retain(lVar1);
    puStack_1f8 = &uStack_1a0;
    uStack_238 = 0;
    lStack_240 = lVar1;
    _objc_retain(param_3);
    uStack_230 = param_3;
    _objc_retain(param_1);
    lStack_228 = param_1;
    _objc_retain(param_6);
    uStack_220 = param_6;
    _objc_retain(param_9);
    uStack_218 = param_9;
    _objc_retain(param_11);
    uStack_210 = param_11;
    _objc_retain(param_12);
    lStack_208 = param_12;
    _objc_retain(param_13);
    uStack_200 = param_13;
    ppuVar7 = &puStack_260;
    _objc_retainBlock();
    uVar11 = puStack_198[5];
    func_0x00010c2412e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = puStack_198[5];
    func_0x00010c241320();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf3e200(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar15;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    FUN_107ef68d0(param_2,uVar11,uVar12,0,lVar3,param_6,param_4,param_5,param_7,lVar14,param_9,
                  lVar10,param_1,param_11,ppuVar7);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar14);
    _objc_release(lVar15);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(ppuVar7);
    _objc_release(uStack_200);
    _objc_release(lStack_208);
    _objc_release(uStack_210);
    _objc_release(uStack_218);
    _objc_release(uStack_220);
    _objc_release(lStack_228);
    _objc_release(uStack_230);
    _objc_release(uStack_238);
    _objc_release(lStack_240);
    _objc_release(lVar1);
  }
  else {
    (**(code **)(param_12 + 0x10))();
  }
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(uStack_178);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(uStack_148);
  _objc_release(lVar13);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1a0,8);
  uVar12 = 8;
  __Block_object_dispose(&uStack_170);
  __Unwind_Resume();
  _objc_retain(uVar12);
  lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar11 = *(undefined8 *)(lVar13 + 0x28);
  *(undefined8 *)(lVar13 + 0x28) = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 107eec730; end: 107eec79f;  */

void FUN_107eec730(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107eec7a0; end: 107eec7a7;  */

void FUN_107eec7a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snap_11266d6b0);
  return;
}



/* Entry: 107eec7a8; end: 107eec99b;  */

void FUN_107eec7a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar12);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
  func_0x00010c0c09e0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107eec99c; end: 107eecb33;  */

void FUN_107eec99c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_2);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28);
  func_0x00010c2412e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28);
  func_0x00010c241320();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf3e200(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bface80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107f07d94(param_2,uVar12,uVar5,uVar13,uVar6,uVar14,0,uVar8,uVar2,uVar10,uVar1,uVar3,
                      uVar11,puVar4,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60))
  ;
  _objc_release(param_2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107eecb34; end: 107eecc77;  */

void FUN_107eecb34(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  return;
}



/* Entry: 107eecc78; end: 107eecc83;  */

void FUN_107eecc78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107eecc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107eecc84; end: 107eed1bf;  */

void FUN_107eecc84(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  if (param_4 == 0) {
    uVar7 = param_2;
    FUN_107eebea4(param_2,param_9);
    _objc_retainAutoreleasedReturnValue();
    FUN_107eec018(param_1,param_2,param_5,param_6,param_7,param_8,param_9,uVar7,param_10,param_11,
                  param_12,param_13,param_14);
    _objc_release(uVar7);
  }
  else {
    uVar1 = param_1;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_107eed1c0;
    puStack_160 = &UNK_110a12178;
    _objc_retain(param_1);
    uStack_158 = param_1;
    _objc_retain(param_2);
    uStack_150 = param_2;
    _objc_retain(param_5);
    uStack_148 = param_5;
    _objc_retain(param_6);
    uStack_140 = param_6;
    _objc_retain(param_7);
    uStack_138 = param_7;
    _objc_retain(param_8);
    uStack_130 = param_8;
    _objc_retain(param_9);
    uStack_128 = param_9;
    _objc_retain(param_10);
    uStack_120 = param_10;
    uStack_100 = param_11;
    _objc_retain(param_12);
    uStack_118 = param_12;
    _objc_retain(param_13);
    uStack_110 = param_13;
    _objc_retain(param_14);
    uStack_108 = param_14;
    _objc_retain(param_4);
    _objc_retain(param_2);
    _objc_retain(param_9);
    _objc_retain(uVar2);
    _objc_retain(param_12);
    _objc_retain(&puStack_178);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _dispatch_group_create();
    uVar7 = param_2;
    func_0x00010bf529e0();
    if (uVar7 != 0) {
      uVar7 = 0;
      do {
        _dispatch_group_enter(puVar4);
        uVar5 = param_2;
        func_0x00010c0dfd40(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_107eebc00;
        puStack_a8 = &UNK_110a12068;
        _objc_retain(puVar3);
        puStack_a0 = puVar3;
        _objc_retain(param_2);
        uStack_98 = param_2;
        uStack_80 = uVar7;
        _objc_retain(uVar2);
        uStack_90 = uVar2;
        _objc_retain(puVar4);
        puStack_88 = puVar4;
        func_0x00010c1304e0(param_9);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(puStack_88);
        _objc_release(uStack_90);
        _objc_release(uStack_98);
        _objc_release(puStack_a0);
        uVar7 = uVar7 + 1;
        uVar5 = param_2;
        func_0x00010bf529e0();
      } while (uVar7 < uVar5);
    }
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x107eebd58;
    puStack_e0 = &UNK_11084a9e8;
    ppuStack_c8 = &puStack_178;
    uStack_d8 = param_2;
    puStack_d0 = puVar3;
    _objc_retain(&puStack_178);
    _objc_retain(puVar3);
    _objc_retain(param_2);
    func_0x000100bc0718(puVar4,param_12,&puStack_f8);
    _objc_release(ppuStack_c8);
    _objc_release(puStack_d0);
    _objc_release(uStack_d8);
    _objc_release(&puStack_178);
    _objc_release(puVar3);
    _objc_release(param_2);
    _objc_release(puVar4);
    _objc_release(param_12);
    _objc_release(uVar2);
    _objc_release(param_9);
    _objc_release(param_4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
    _objc_release(uStack_128);
    _objc_release(uStack_130);
    _objc_release(uStack_138);
    _objc_release(uStack_140);
    _objc_release(uStack_148);
    _objc_release(uStack_150);
    _objc_release(uStack_158);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107eed1c0; end: 107eed207;  */

void FUN_107eed1c0(long param_1,undefined8 param_2)

{
  FUN_107eec018(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x58),
                *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x60),
                *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  return;
}



/* Entry: 107eed208; end: 107eed28b;  */

void FUN_107eed208(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),7);
  return;
}



/* Entry: 107eed28c; end: 107eed373;  */

void FUN_107eed28c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(param_1);
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_2);
  func_0x00010bf97e80(param_1);
  _objc_release(param_1);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107eed374; end: 107eed717;  */

void FUN_107eed374(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puStack_70;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c268480();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c268500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if ((lVar2 != 0) &&
       ((func_0x00010c268520(), (*(byte *)(param_1 + 0x30) & 1) != 0 ||
        ((lVar1 = param_2, func_0x00010c268520(), (int)lVar1 < 0x186a1 &&
         (lVar1 = param_2, func_0x00010c268520(), (int)lVar1 == 3)))))) {
      lVar1 = param_2;
      func_0x00010c268480();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d8410;
      _objc_alloc();
      func_0x00010c0206e0();
      puVar5 = puVar4;
      func_0x00010c270fa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 == (undefined *)0x0) {
        puStack_70 = (undefined *)0x0;
      }
      else {
        puVar5 = puVar4;
        func_0x00010c270fa0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        FUN_107ff4980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        puStack_70 = puVar6;
        func_0x000107ff4cd8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298be0();
        _objc_release(puVar6);
      }
      uVar16 = *(undefined8 *)(param_1 + 0x20);
      lVar7 = param_2;
      func_0x00010c241220(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c09f780();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c26f9c0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar4;
      func_0x00010c0cc080();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010c2a05a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar4;
      func_0x00010c087f20();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar4;
      func_0x00010c2681a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar4;
      func_0x00010c09eba0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar4;
      func_0x00010bf2fba0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = param_2;
      func_0x00010bf59980(param_2);
      puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0((double)lVar14 / 1000.0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0670c0(uVar16);
      _objc_release(puVar15);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(lVar7);
      uVar16 = *(undefined8 *)(param_1 + 0x28);
      lVar7 = param_2;
      func_0x00010c241220(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar16);
      _objc_release(lVar7);
      _objc_release(puStack_70);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107eed718; end: 107eed7c7;  */

byte FUN_107eed718(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  byte bStack_23;
  undefined2 uStack_22;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c15fa80();
  if (lVar1 - 5000U < 1000) {
    bVar2 = 1;
  }
  else {
    lVar1 = param_1;
    func_0x00010c15fa80();
    if (lVar1 == 0x7d1) {
      uStack_22 = 0;
      bStack_23 = 0;
      FUN_107eed7c8(param_1,&uStack_22,(long)&uStack_22 + 1,&bStack_23,&uStack_24,&uStack_25,
                    &uStack_26,0);
      bVar2 = 0;
      if (((uStack_22 & 1) == 0) && ((uStack_22 & 0x100) == 0)) {
        bVar2 = bStack_23;
      }
    }
    else {
      bVar2 = 0;
    }
  }
  _objc_release(param_1);
  return bVar2 & 1;
}



/* Entry: 107eed7c8; end: 107eedfd3;  */

ulong FUN_107eed7c8(ulong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4,
                   undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,long param_8)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [128];
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  puVar7 = param_3;
  puVar8 = param_4;
  _objc_retain();
  _objc_retain(param_8);
  uVar2 = param_1;
  func_0x00010c15fa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010c15fa60();
    _objc_retainAutoreleasedReturnValue();
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    puVar7 = &uStack_2b0;
    puVar8 = auStack_f0;
    uVar12 = uVar2;
    func_0x00010bf52a60();
    if (uVar12 != 0) {
      lVar10 = *plStack_2a0;
      do {
        uVar11 = 0;
        do {
          if (*plStack_2a0 != lVar10) {
            _objc_enumerationMutation(uVar2);
          }
          lVar9 = *(long *)(lStack_2a8 + uVar11 * 8);
          lVar3 = lVar9;
          func_0x00010c252ee0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c067fc0();
          if (lVar4 - 4000U < 1000) {
            puVar7 = param_2;
            if (lVar4 != 0xfa2) {
              puVar7 = param_3;
            }
LAB_107eed8d0:
            *(undefined1 *)puVar7 = 1;
          }
          else if (lVar4 - 5000U < 1000) {
            *param_4 = 1;
            puVar7 = param_5;
            if (lVar4 - 0x138bU < 3) goto LAB_107eed8d0;
          }
          else if ((lVar4 - 2000U < 1000) &&
                  ((puVar7 = param_6, lVar4 == 0x7d2 || (puVar7 = param_7, lVar4 == 2000))))
          goto LAB_107eed8d0;
          _objc_release(lVar3);
          if ((param_3 != (undefined8 *)0x0) && (param_8 == 0)) {
            func_0x00010c252ee0();
            _objc_retainAutoreleasedReturnValue();
            param_8 = lVar9;
          }
          uVar11 = uVar11 + 1;
        } while (uVar12 != uVar11);
        puVar7 = &uStack_2b0;
        puVar8 = auStack_f0;
        uVar12 = uVar2;
        func_0x00010bf52a60();
      } while (uVar12 != 0);
    }
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010c15fa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010c15fa00();
    _objc_retainAutoreleasedReturnValue();
    lStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    plStack_2e0 = (long *)0x0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    puVar7 = &uStack_2f0;
    puVar8 = auStack_170;
    uVar12 = uVar2;
    func_0x00010bf52a60();
    if (uVar12 != 0) {
      lVar10 = *plStack_2e0;
      do {
        uVar11 = 0;
        do {
          if (*plStack_2e0 != lVar10) {
            _objc_enumerationMutation(uVar2);
          }
          lVar9 = *(long *)(lStack_2e8 + uVar11 * 8);
          lVar3 = lVar9;
          func_0x00010c252ee0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c067fc0();
          if (lVar4 - 4000U < 1000) {
            puVar7 = param_2;
            if (lVar4 != 0xfa2) {
              puVar7 = param_3;
            }
LAB_107eeda38:
            *(undefined1 *)puVar7 = 1;
          }
          else if (lVar4 - 5000U < 1000) {
            *param_4 = 1;
            puVar7 = param_5;
            if (lVar4 - 0x138bU < 3) goto LAB_107eeda38;
          }
          else if ((lVar4 - 2000U < 1000) &&
                  ((puVar7 = param_6, lVar4 == 0x7d2 || (puVar7 = param_7, lVar4 == 2000))))
          goto LAB_107eeda38;
          _objc_release(lVar3);
          if ((param_3 != (undefined8 *)0x0) && (param_8 == 0)) {
            func_0x00010c252ee0();
            _objc_retainAutoreleasedReturnValue();
            param_8 = lVar9;
          }
          uVar11 = uVar11 + 1;
        } while (uVar12 != uVar11);
        puVar7 = &uStack_2f0;
        puVar8 = auStack_170;
        uVar12 = uVar2;
        func_0x00010bf52a60();
      } while (uVar12 != 0);
    }
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010c15fa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010c15fa40();
    _objc_retainAutoreleasedReturnValue();
    lStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    plStack_320 = (long *)0x0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    puVar7 = &uStack_330;
    puVar8 = auStack_1f0;
    uVar12 = uVar2;
    func_0x00010bf52a60();
    if (uVar12 != 0) {
      lVar10 = *plStack_320;
      do {
        uVar11 = 0;
        do {
          if (*plStack_320 != lVar10) {
            _objc_enumerationMutation(uVar2);
          }
          lVar9 = *(long *)(lStack_328 + uVar11 * 8);
          lVar3 = lVar9;
          func_0x00010c252ee0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c067fc0();
          if (lVar4 - 4000U < 1000) {
            puVar7 = param_2;
            if (lVar4 != 0xfa2) {
              puVar7 = param_3;
            }
LAB_107eedba0:
            *(undefined1 *)puVar7 = 1;
          }
          else if (lVar4 - 5000U < 1000) {
            *param_4 = 1;
            puVar7 = param_5;
            if (lVar4 - 0x138bU < 3) goto LAB_107eedba0;
          }
          else if ((lVar4 - 2000U < 1000) &&
                  ((puVar7 = param_6, lVar4 == 0x7d2 || (puVar7 = param_7, lVar4 == 2000))))
          goto LAB_107eedba0;
          _objc_release(lVar3);
          if ((param_3 != (undefined8 *)0x0) && (param_8 == 0)) {
            func_0x00010c252ee0();
            _objc_retainAutoreleasedReturnValue();
            param_8 = lVar9;
          }
          uVar11 = uVar11 + 1;
        } while (uVar12 != uVar11);
        puVar7 = &uStack_330;
        puVar8 = auStack_1f0;
        uVar12 = uVar2;
        func_0x00010bf52a60();
      } while (uVar12 != 0);
    }
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010c15faa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010c15faa0();
    _objc_retainAutoreleasedReturnValue();
    lStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    plStack_360 = (long *)0x0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    puVar7 = &uStack_370;
    puVar8 = auStack_270;
    uVar12 = uVar2;
    func_0x00010bf52a60();
    if (uVar12 != 0) {
      lVar10 = *plStack_360;
      do {
        uVar11 = 0;
        do {
          if (*plStack_360 != lVar10) {
            _objc_enumerationMutation(uVar2);
          }
          lVar9 = *(long *)(lStack_368 + uVar11 * 8);
          lVar3 = lVar9;
          func_0x00010c252ee0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c067fc0();
          if (lVar4 - 4000U < 1000) {
            puVar7 = param_2;
            if (lVar4 != 0xfa2) {
              puVar7 = param_3;
            }
LAB_107eedd08:
            *(undefined1 *)puVar7 = 1;
          }
          else if (lVar4 - 5000U < 1000) {
            *param_4 = 1;
            puVar7 = param_5;
            if (lVar4 - 0x138bU < 3) goto LAB_107eedd08;
          }
          else if ((lVar4 - 2000U < 1000) &&
                  ((puVar7 = param_6, lVar4 == 0x7d2 || (puVar7 = param_7, lVar4 == 2000))))
          goto LAB_107eedd08;
          _objc_release(lVar3);
          if ((param_3 != (undefined8 *)0x0) && (param_8 == 0)) {
            func_0x00010c252ee0();
            _objc_retainAutoreleasedReturnValue();
            param_8 = lVar9;
          }
          uVar11 = uVar11 + 1;
        } while (uVar12 != uVar11);
        puVar7 = &uStack_370;
        puVar8 = auStack_270;
        uVar12 = uVar2;
        func_0x00010bf52a60();
      } while (uVar12 != 0);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  uVar2 = param_1;
  func_0x00010bf879c0();
  puVar1 = PTR_DAT_1126a5a48;
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_1);
    uVar2 = param_1;
    func_0x00010010fab4(param_1,puVar1);
    _objc_release(param_1);
    uVar13 = 0;
    uVar12 = 0;
    if ((param_1 != 0) && ((int)uVar2 != 0)) {
      uVar12 = param_1;
      func_0x00010c2424c0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = 1;
    }
  }
  else {
    uVar12 = 0;
    uVar13 = 0;
  }
  _objc_retain(uVar12);
  uVar2 = uVar12;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  do {
    if (uVar2 == 0) {
LAB_107eedf64:
      _objc_release(uVar12);
      if ((long)puVar8 < 3) {
        uVar13 = 1;
      }
      _objc_release(uVar12);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        return (ulong)uVar13;
      }
      ___stack_chk_fail();
      func_0x00010bf97260();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
      return uVar2;
    }
    uVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(uVar12);
      }
      uVar5 = *(undefined8 *)(uVar11 * 8);
      FUN_107ee8f54(uVar5,puVar6,puVar7);
      if ((int)uVar5 == 0) {
        uVar13 = 0;
        goto LAB_107eedf64;
      }
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
    uVar2 = uVar12;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107eedfd4; end: 107eee017;  */

void FUN_107eedfd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf97260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107eee018; end: 107eee1a7;  */

void FUN_107eee018(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010010fab4(param_1,PTR_DAT_1126a5a48);
  lVar3 = 0;
  if ((param_1 != 0) && ((int)lVar1 != 0)) {
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010c2424c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar3 == 1) {
      lVar1 = param_1;
      func_0x00010c2424c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    else {
      lVar3 = 0;
    }
    _objc_release(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107eee1a8; end: 107eee49b;  */

void FUN_107eee1a8(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  puVar15 = PTR_DAT_1126a5a48;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf97260();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  puVar8 = puVar3;
  if ((uVar4 == 0) || (uVar1 == 0)) {
    _objc_retain(puVar3);
  }
  else {
    uVar2 = param_1;
    func_0x00010bf97260();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x00010c2424c0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &uStack_130;
    uVar2 = param_1;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar17 = *plStack_120;
      do {
        uVar19 = 0;
        do {
          if (*plStack_120 != lVar17) {
            _objc_enumerationMutation(param_1);
          }
          lVar21 = *(long *)(lStack_128 + uVar19 * 8);
          lVar16 = lVar21;
          func_0x00010bf8b0c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar5 = PTR_PTR_1126af4d0;
          if (lVar16 != 0) {
            func_0x00010bf8b0c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa72e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar21);
            if (puVar5 != (undefined *)0x0) {
              puVar18 = PTR_PTR_1126af4c0;
              func_0x00010bfa7060();
              _objc_retainAutoreleasedReturnValue();
              if (puVar18 != (undefined *)0x0) {
                puVar6 = puVar18;
                func_0x00010bf97200();
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar4;
                func_0x00010c0720c0();
                _objc_release(puVar6);
                if ((uVar7 & 1) == 0) {
                  puVar6 = puVar18;
                  func_0x00010bf97200(puVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar3);
                  _objc_release(puVar6);
                }
              }
              _objc_release(puVar18);
            }
            _objc_release(puVar5);
          }
          uVar19 = uVar19 + 1;
        } while (uVar2 != uVar19);
        param_3 = &uStack_130;
        uVar2 = param_1;
        func_0x00010bf52a60();
      } while (uVar2 != 0);
    }
    _objc_release(param_1);
    func_0x00010bf51e00();
    _objc_release(uVar4);
  }
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar15);
    _objc_retain(param_3);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126bc7e0;
    func_0x00010bfa5a80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010bf52a60();
    lVar17 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar17) {
          _objc_enumerationMutation(puVar8);
        }
        puVar6 = PTR_PTR_1126c3198;
        lVar20 = *(long *)((long)puVar18 * 8);
        lVar21 = lVar20;
        func_0x00010c0f6420();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar20;
        func_0x00010c1356e0(lVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6e8e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
        _objc_release(lVar21);
        puVar10 = puVar6;
        func_0x00010c27dd80();
        if (puVar10 != (undefined *)0x2) {
          puVar10 = puVar6;
          func_0x00010bf97260();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010bf529e0();
          _objc_release(puVar10);
          if (puVar11 != (undefined *)0x0) {
            puVar10 = puVar6;
            func_0x00010bf97260();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar10);
            lVar21 = lVar20;
            func_0x00010c269ee0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar21 == 0) {
              _objc_retain(puVar11);
              func_0x00010c0f8520(puVar15);
              _objc_release(puVar11);
            }
            puVar12 = puVar6;
            FUN_107eee1a8(puVar6,puVar15);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar12;
            func_0x00010bf52a60();
            lVar21 = lRam0000000000000000;
            while (puVar10 != (undefined *)0x0) {
              puVar22 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar21) {
                  _objc_enumerationMutation(puVar12);
                }
                puVar13 = puVar5;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (puVar13 == (undefined *)0x0) {
                  puVar13 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
                  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0560(puVar5);
                  _objc_release(puVar13);
                }
                puVar14 = puVar5;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c15e520(lVar20);
                func_0x00010c0df7c0(puVar13);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar14);
                _objc_release(puVar13);
                _objc_release(puVar14);
                puVar22 = puVar22 + 1;
              } while (puVar10 != puVar22);
              puVar10 = puVar12;
              func_0x00010bf52a60();
            }
            _objc_release(puVar12);
            _objc_release(puVar11);
          }
        }
        _objc_release(puVar6);
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar3);
      puVar3 = puVar8;
      func_0x00010bf52a60();
    }
    _objc_release(puVar8);
    puVar8 = puVar5;
    func_0x00010bf51e00();
    _objc_release(puVar5);
    _objc_release(param_3);
    _objc_release(puVar15);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
      ___stack_chk_fail();
      puVar15 = PTR_PTR_1126bc838;
      func_0x00010bf35060(PTR_PTR_1126bc838);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar15);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107eee49c; end: 107eee8cf;  */

void FUN_107eee49c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bc7e0;
  func_0x00010bfa5a80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      puVar7 = PTR_PTR_1126c3198;
      lVar15 = *(long *)((long)puVar14 * 8);
      lVar5 = lVar15;
      func_0x00010c0f6420();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar15;
      func_0x00010c1356e0(lVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      puVar8 = puVar7;
      func_0x00010c27dd80();
      if (puVar8 != (undefined *)0x2) {
        puVar8 = puVar7;
        func_0x00010bf97260();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf529e0();
        _objc_release(puVar8);
        if (puVar9 != (undefined *)0x0) {
          puVar8 = puVar7;
          func_0x00010bf97260();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          lVar5 = lVar15;
          func_0x00010c269ee0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar5 == 0) {
            _objc_retain(puVar9);
            func_0x00010c0f8520(param_2);
            _objc_release(puVar9);
          }
          puVar10 = puVar7;
          FUN_107eee1a8(puVar7,param_2);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar10;
          func_0x00010bf52a60();
          lVar5 = lRam0000000000000000;
          while (puVar8 != (undefined *)0x0) {
            puVar16 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar5) {
                _objc_enumerationMutation(puVar10);
              }
              puVar11 = puVar2;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar11 == (undefined *)0x0) {
                puVar11 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
                func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0560(puVar2);
                _objc_release(puVar11);
              }
              puVar12 = puVar2;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c15e520(lVar15);
              func_0x00010c0df7c0(puVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar12);
              _objc_release(puVar11);
              _objc_release(puVar12);
              puVar16 = puVar16 + 1;
            } while (puVar8 != puVar16);
            puVar8 = puVar10;
            func_0x00010bf52a60();
          }
          _objc_release(puVar10);
          _objc_release(puVar9);
        }
      }
      _objc_release(puVar7);
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar4);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126bc838;
  func_0x00010bf35060(PTR_PTR_1126bc838);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107eee8d0; end: 107eee913;  */

void FUN_107eee8d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc838;
  func_0x00010bf35060(PTR_PTR_1126bc838,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eee914; end: 107eeeaaf;  */

long FUN_107eee914(long param_1,long param_2)

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
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar8 = param_1;
  func_0x00010c27dd80();
  if (lVar8 == 2) {
    lVar2 = param_1;
    func_0x00010bf97260();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar3 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          lVar4 = param_2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf529e0();
          _objc_release(lVar4);
          _objc_release(lVar3);
          if (lVar5 != 0) {
            lVar8 = 0;
            goto LAB_107eeea58;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
      lVar8 = lVar2;
      func_0x00010bf52a60();
    }
    lVar8 = 1;
LAB_107eeea58:
    _objc_release(lVar2);
  }
  else {
    lVar8 = 0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return lVar8;
  }
  ___stack_chk_fail();
  if (lVar6 != 0) {
    _objc_retain(lVar6);
    func_0x00010bf97260(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf4b900();
    _objc_release(lVar6);
    _objc_release(param_1);
    return lVar8;
  }
  return 0;
}



/* Entry: 107eeeab0; end: 107eeeb1f;  */

undefined8 FUN_107eeeab0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    _objc_retain(param_2);
    func_0x00010bf97260(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf4b900();
    _objc_release(param_2);
    _objc_release(param_1);
    return uVar1;
  }
  return 0;
}



/* Entry: 107eeeb20; end: 107eeed5f;  */

undefined ** FUN_107eeeb20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c0d7100();
  if (((int)lVar1 == 0) ||
     ((lVar1 = param_1, func_0x00010c27dd80(), lVar1 != 8 &&
      (lVar1 = param_1, func_0x00010c27dd80(), lVar1 != 9)))) {
    ppuVar10 = (undefined **)0x0;
  }
  else {
    puVar6 = PTR_DAT_1126a5a48;
    _objc_retain(param_1);
    lVar2 = param_1;
    func_0x00010010fab4(param_1,puVar6);
    lVar1 = param_1;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(param_1);
    lVar3 = lVar1;
    func_0x00010c2424c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lVar4 == 0) {
      ppuVar10 = (undefined **)0x1;
    }
    else {
      do {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar3);
          }
          lVar11 = *(long *)(lVar9 * 8);
          lVar5 = lVar11;
          func_0x00010c247520();
          if ((int)lVar5 != 6) {
LAB_107eeecf8:
            ppuVar10 = (undefined **)0x0;
            goto LAB_107eeed00;
          }
          lVar5 = lVar11;
          func_0x00010bf8b0c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar6 = PTR_PTR_1126af4d0;
          if (lVar5 != 0) {
            func_0x00010bf8b0c0(lVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa72e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar11);
            if ((puVar6 != (undefined *)0x0) &&
               (puVar7 = puVar6, func_0x00010bfdd120(), (int)puVar7 == 0)) {
              _objc_release(puVar6);
              goto LAB_107eeecf8;
            }
            _objc_release(puVar6);
          }
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
      ppuVar10 = (undefined **)0x1;
    }
LAB_107eeed00:
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  if (0xb < param_1 - 1U) {
    return &PTR____CFConstantStringClassReference_110db54d8;
  }
  return (undefined **)(&PTR_PTR_110a12258)[param_1 - 1U];
}



/* Entry: 107eeed60; end: 107eeedb7;  */

undefined ** FUN_107eeed60(long param_1)

{
  if (param_1 - 1U < 0xc) {
    return (undefined **)(&PTR_PTR_110a12258)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db54d8;
}



/* Entry: 107eeedb8; end: 107eeeddf;  */

void FUN_107eeedb8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107eeede0; end: 107eeefa7; -[SCCloudAddSnapEntrySnapshot initWithProfile:entryPlaceholder:snapPlaceholder:detailPlaceholder:miniThumbnailPlaceholder:duplicatedFromSnapId:dataVaultEncryption:userContext:] */

undefined1 *
FUN_107eeede0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

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
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fb9d0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107eeefa8; end: 107eeefcb; -[SCCloudAddSnapEntrySnapshot copyWithZone:] */

undefined8 FUN_107eeefa8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


