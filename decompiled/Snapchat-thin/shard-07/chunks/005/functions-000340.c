/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105635730; end: 10563575f;  */

void FUN_105635730(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 105635760; end: 1056357cf;  */

void FUN_105635760(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c28e0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1056357d0; end: 10563582f;  */

void FUN_1056357d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc708;
  _objc_alloc(PTR_PTR_1126bc708);
  func_0x000100101220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059b00(puVar1,param_2,param_1);
  FUN_105635830();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105635830; end: 10563583b;  */

void FUN_105635830(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10563583c; end: 105635ab7; -[SCNCupsContentUploadCallbackMetrics initWithAssetTypeInt:contentURL:error:failedStep:fileSizeBytes:fkAttemptId:fkSendMessageAttemptId:httpResponseHeaders:httpStatusCode:latencyMs:mediaId:mediaOrchestrationAttemptId:mediaSourceTypeInt:mediaType:uploadLocationCallbackMetrics:uploadRequestType:] */

undefined8 *
FUN_10563583c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
             undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined4 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_68 = PTR_PTR_1126e9740;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000105635ba4(uVar3);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    puVar1[5] = param_6;
    puVar1[6] = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000105635ba4(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x000105635ba4(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000105635ba4(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_11;
    puVar1[10] = param_13;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x000105635ba4(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    func_0x000105635ba4(uVar3);
    *(undefined4 *)(puVar1 + 2) = param_16;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    func_0x000105635ba4(uVar3);
    _objc_retain(param_19);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_19;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x14) = param_20;
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105635ab8; end: 105635abf; -[SCNCupsContentUploadCallbackMetrics assetTypeInt] */

undefined4 FUN_105635ab8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 105635ac0; end: 105635ac7; -[SCNCupsContentUploadCallbackMetrics contentURL] */

undefined8 FUN_105635ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105635ac8; end: 105635acf; -[SCNCupsContentUploadCallbackMetrics error] */

undefined8 FUN_105635ac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105635ad0; end: 105635ad7; -[SCNCupsContentUploadCallbackMetrics failedStep] */

undefined8 FUN_105635ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105635ad8; end: 105635adf; -[SCNCupsContentUploadCallbackMetrics fileSizeBytes] */

undefined8 FUN_105635ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105635ae0; end: 105635ae7; -[SCNCupsContentUploadCallbackMetrics fkAttemptId] */

undefined8 FUN_105635ae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105635ae8; end: 105635aef; -[SCNCupsContentUploadCallbackMetrics fkSendMessageAttemptId] */

undefined8 FUN_105635ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105635af0; end: 105635af7; -[SCNCupsContentUploadCallbackMetrics httpResponseHeaders] */

undefined8 FUN_105635af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105635af8; end: 105635aff; -[SCNCupsContentUploadCallbackMetrics httpStatusCode] */

undefined4 FUN_105635af8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 105635b00; end: 105635b07; -[SCNCupsContentUploadCallbackMetrics latencyMs] */

undefined8 FUN_105635b00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105635b08; end: 105635b0f; -[SCNCupsContentUploadCallbackMetrics mediaId] */

undefined8 FUN_105635b08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105635b10; end: 105635b17; -[SCNCupsContentUploadCallbackMetrics mediaOrchestrationAttemptId] */

undefined8 FUN_105635b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105635b18; end: 105635b1f; -[SCNCupsContentUploadCallbackMetrics mediaSourceTypeInt] */

undefined4 FUN_105635b18(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 105635b20; end: 105635b27; -[SCNCupsContentUploadCallbackMetrics mediaType] */

undefined8 FUN_105635b20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105635b28; end: 105635b2f; -[SCNCupsContentUploadCallbackMetrics uploadLocationCallbackMetrics] */

undefined8 FUN_105635b28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105635b30; end: 105635b37; -[SCNCupsContentUploadCallbackMetrics uploadRequestType] */

undefined4 FUN_105635b30(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 105635b38; end: 105635b9b; -[SCNCupsContentUploadCallbackMetrics .cxx_destruct] */

void FUN_105635b38(long param_1)

{
  FUN_105635b9c(param_1 + 0x70);
  FUN_105635b9c(param_1 + 0x68);
  FUN_105635b9c(param_1 + 0x60);
  FUN_105635b9c(param_1 + 0x58);
  FUN_105635b9c(param_1 + 0x48);
  FUN_105635b9c(param_1 + 0x40);
  FUN_105635b9c(param_1 + 0x38);
  FUN_105635b9c(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105635b9c; end: 105635bab;  */

void FUN_105635b9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 105635bac; end: 105635cbf; -[SCNCupsContentUploadDataProvider initWithDataProviderType:inMemoryBytes:localFilePath:streamProvider:] */

undefined1 *
FUN_105635bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e9748;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105635cc0; end: 105635cc7; -[SCNCupsContentUploadDataProvider dataProviderType] */

undefined8 FUN_105635cc0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105635cc8; end: 105635ccf; -[SCNCupsContentUploadDataProvider inMemoryBytes] */

undefined8 FUN_105635cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105635cd0; end: 105635cd7; -[SCNCupsContentUploadDataProvider localFilePath] */

undefined8 FUN_105635cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105635cd8; end: 105635cdf; -[SCNCupsContentUploadDataProvider streamProvider] */

undefined8 FUN_105635cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105635ce0; end: 105635d1b; -[SCNCupsContentUploadDataProvider .cxx_destruct] */

void FUN_105635ce0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105635d1c; end: 105635ebf; -[SCNCupsContentUploadRequest initWithAssetTypeInt:contentDataProvider:fkAttemptId:fkSendMessageAttemptId:mediaId:mediaSourceInt:mediaType:shouldUploadInBackground:uploadRequestTypeInt:] */

undefined1 *
FUN_105635d1c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e9750;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000105635f54(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000105635f54(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000105635f54(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x000105635f54(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_10;
    *(undefined4 *)((long)puVar1 + 0x14) = param_11;
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105635ec0; end: 105635ec7; -[SCNCupsContentUploadRequest assetTypeInt] */

undefined4 FUN_105635ec0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 105635ec8; end: 105635ecf; -[SCNCupsContentUploadRequest contentDataProvider] */

undefined8 FUN_105635ec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105635ed0; end: 105635ed7; -[SCNCupsContentUploadRequest fkAttemptId] */

undefined8 FUN_105635ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105635ed8; end: 105635edf; -[SCNCupsContentUploadRequest fkSendMessageAttemptId] */

undefined8 FUN_105635ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105635ee0; end: 105635ee7; -[SCNCupsContentUploadRequest mediaId] */

undefined8 FUN_105635ee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105635ee8; end: 105635eef; -[SCNCupsContentUploadRequest mediaSourceInt] */

undefined4 FUN_105635ee8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 105635ef0; end: 105635ef7; -[SCNCupsContentUploadRequest mediaType] */

undefined8 FUN_105635ef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105635ef8; end: 105635eff; -[SCNCupsContentUploadRequest shouldUploadInBackground] */

undefined1 FUN_105635ef8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105635f00; end: 105635f07; -[SCNCupsContentUploadRequest uploadRequestTypeInt] */

undefined4 FUN_105635f00(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 105635f08; end: 105635f4b; -[SCNCupsContentUploadRequest .cxx_destruct] */

void FUN_105635f08(long param_1)

{
  FUN_105635f4c(param_1 + 0x38);
  FUN_105635f4c(param_1 + 0x30);
  FUN_105635f4c(param_1 + 0x28);
  FUN_105635f4c(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105635f4c; end: 105635f5b;  */

void FUN_105635f4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 105635f5c; end: 105636013; -[SCNCupsContentUploadStatusRequest initWithMediaId:mediaSourceInt:assetTypeInt:] */

undefined1 *
FUN_105635f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e9758;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105636014; end: 10563601b; -[SCNCupsContentUploadStatusRequest mediaId] */

undefined8 FUN_105636014(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10563601c; end: 105636023; -[SCNCupsContentUploadStatusRequest mediaSourceInt] */

undefined4 FUN_10563601c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 105636024; end: 10563602b; -[SCNCupsContentUploadStatusRequest assetTypeInt] */

undefined4 FUN_105636024(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10563602c; end: 105636037; -[SCNCupsContentUploadStatusRequest .cxx_destruct] */

void FUN_10563602c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105636038; end: 10563618f; -[SCNCupsUploadLocationCallbackMetrics initWithError:latencyMs:uploadLocationCacheKey:uploadLocationTypeInt:url:contentId:] */

undefined1 *
FUN_105636038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e9760;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_1056361fc(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    FUN_1056361fc(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    FUN_1056361fc(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105636190; end: 105636197; -[SCNCupsUploadLocationCallbackMetrics error] */

undefined8 FUN_105636190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105636198; end: 10563619f; -[SCNCupsUploadLocationCallbackMetrics latencyMs] */

undefined8 FUN_105636198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1056361a0; end: 1056361a7; -[SCNCupsUploadLocationCallbackMetrics uploadLocationCacheKey] */

undefined8 FUN_1056361a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1056361a8; end: 1056361af; -[SCNCupsUploadLocationCallbackMetrics uploadLocationTypeInt] */

undefined4 FUN_1056361a8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1056361b0; end: 1056361b7; -[SCNCupsUploadLocationCallbackMetrics url] */

undefined8 FUN_1056361b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1056361b8; end: 1056361bf; -[SCNCupsUploadLocationCallbackMetrics contentId] */

undefined8 FUN_1056361b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1056361c0; end: 1056361fb; -[SCNCupsUploadLocationCallbackMetrics .cxx_destruct] */

void FUN_1056361c0(long param_1)

{
  func_0x000105636204(param_1 + 0x30);
  func_0x000105636204(param_1 + 0x28);
  func_0x000105636204(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1056361fc; end: 10563620b;  */

void FUN_1056361fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10563620c; end: 1056362af; -[SCNCupsUploadLocationWrapper initWithUploadLocationProto:] */

undefined1 * FUN_10563620c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e9768;
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



/* Entry: 1056362b0; end: 1056362b7; -[SCNCupsUploadLocationWrapper uploadLocationProto] */

undefined8 FUN_1056362b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1056362b8; end: 1056362c3; -[SCNCupsUploadLocationWrapper .cxx_destruct] */

void FUN_1056362b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056362c4; end: 105636303;  */

void FUN_1056362c4(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_105636304(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001056376a4(&uStack_30);
  return;
}



/* Entry: 105636304; end: 1056366b7;  */

void FUN_105636304(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int extraout_w10;
  long *plVar8;
  long *plVar9;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 uStack_81;
  ulong auStack_80 [2];
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  func_0x0001005d1848(auStack_80);
  func_0x00010002b838(&puStack_a0,&DAT_10f2de742);
  func_0x00010002b838(&puStack_c0,"");
  uVar4 = auStack_80[0];
  func_0x0001005d1b10(auStack_80[0],4,&puStack_a0,&puStack_c0,&uStack_81);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_a0);
  if ((uVar4 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    plVar8 = puVar5 + 1;
    *plVar8 = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_DAT_1108a1568;
    puVar7 = puVar5 + 3;
    FUN_105637ce8(puVar7,param_2,param_3,param_4);
    puVar6 = (undefined8 *)0x88;
    puStack_d0 = puVar7;
    puStack_c8 = puVar5;
    __Znwm();
    plVar9 = puVar6 + 1;
    *plVar9 = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_1108a15b8;
    puVar1 = puVar6 + 3;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_a0 = puVar7;
    puStack_98 = puVar5;
    FUN_10563c528(puVar1,&puStack_a0,auStack_80,param_5);
    FUN_105637774(&puStack_a0);
    puVar7 = (undefined8 *)puVar6[5];
    puStack_e0 = puVar1;
    puStack_d8 = puVar6;
    if ((puVar7 == (undefined8 *)0x0) || (puVar7[1] == -1)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar8 = puVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puStack_a0 = (undefined8 *)puVar6[4];
      puVar6[4] = puVar1;
      puVar6[5] = puVar6;
      puStack_c0 = puVar1;
      puStack_b8 = puVar6;
      puStack_98 = puVar7;
      FUN_1056377a4(&puStack_a0);
      func_0x0001056377c8(&puStack_c0);
    }
    func_0x0001005d1638(&uStack_f0);
    puVar7 = (undefined8 *)0xc0;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_FUN_1108a1608;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar7[4] = 0;
    puVar7[3] = &PTR_FUN_1108a14b8;
    puVar7[5] = 0;
    puVar7[6] = 0x32aaaba7;
    puVar7[8] = 0;
    puVar7[7] = 0;
    puVar7[10] = 0;
    puVar7[9] = 0;
    puVar7[0xc] = 0;
    puVar7[0xb] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = puVar1;
    puVar7[0xf] = puVar6;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar7[0x11] = lStack_e8;
    puVar7[0x10] = uStack_f0;
    puStack_70 = puVar1;
    puStack_68 = puVar6;
    if (lStack_e8 != 0) {
      do {
        func_0x000105637c4c();
      } while (extraout_w10 != 0);
    }
    FUN_1056373ec(puVar7 + 0x12,param_5);
    (*(code *)**(undefined8 **)puVar7[0xe])(&puStack_c0);
    puVar5 = puStack_b8;
    puVar1 = puStack_c0;
    puStack_c0 = (undefined8 *)0x0;
    puStack_b8 = (undefined8 *)0x0;
    puStack_98 = (undefined8 *)puVar7[5];
    puStack_a0 = (undefined8 *)puVar7[4];
    puVar7[5] = puVar5;
    puVar7[4] = puVar1;
    FUN_105637818(&puStack_a0);
    FUN_105637818(&puStack_c0);
    func_0x00010563783c(&puStack_70);
    *param_1 = (long)(puVar7 + 3);
    param_1[1] = (long)puVar7;
    func_0x0001005d8154(&uStack_f0);
    func_0x0001056377c8(&puStack_e0);
    FUN_105637728(&puStack_d0);
  }
  func_0x0001005d1964(auStack_80);
  return;
}



/* Entry: 1056366b8; end: 105636ff3;  */

void FUN_1056366b8(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,uint param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  long *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined1 auStack_3b0 [72];
  ulong uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  char cStack_350;
  undefined **ppuStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined **ppuStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined **ppuStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  long lStack_2f0;
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [56];
  undefined1 auStack_280 [16];
  ulong uStack_270;
  ulong uStack_268;
  char cStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined1 auStack_220 [24];
  byte bStack_208;
  undefined1 auStack_200 [24];
  byte bStack_1e8;
  long *plStack_1e0;
  ulong uStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_105636ff4(&lStack_240);
  *(undefined4 *)(lStack_240 + 0x58) = param_2;
  *(undefined4 *)(lStack_240 + 0x5c) = param_3;
  *(undefined8 *)(lStack_240 + 0x18) = param_4;
  ppuStack_a0 = &PTR_DAT_110cf89e0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = param_2;
  uStack_8c = param_3;
  func_0x000105637028(&plStack_1b0);
  func_0x000105637030(&plStack_1b0);
  FUN_105637040();
  uStack_a8 = (undefined4)param_4;
  uStack_ac = param_5;
  func_0x000105637c88();
  uStack_1d8 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  plStack_1e0 = extraout_x8;
  func_0x00010002b838(&ppuStack_330,&UNK_10f2e0182);
  func_0x000105637cd4(auStack_200);
  func_0x000105637c5c();
  func_0x00010002b838(&ppuStack_330,&UNK_10f2e018e);
  func_0x000105637cd4(auStack_220);
  func_0x000105637c5c();
  if ((bStack_1e8 & 1) == 0) {
    if (((param_6 & 1) != 0) || ((bStack_208 & 1) != 0)) goto joined_r0x0001056367e4;
  }
  else {
    uVar9 = uStack_1d8;
    if ((uStack_1d8 & 1) != 0) {
      uVar9 = *(ulong *)(uStack_1d8 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(auStack_1d0,auStack_200,uVar9);
    bStack_208 = bStack_208 & 1;
joined_r0x0001056367e4:
    if (bStack_208 != 0) {
      uVar9 = uStack_1d8;
      if ((uStack_1d8 & 1) != 0) {
        uVar9 = *(ulong *)(uStack_1d8 & 0xfffffffffffffffe);
      }
      func_0x0001001a53d4(auStack_1c8,auStack_220,uVar9);
    }
    if (param_6 != 0) {
      uStack_1c0 = CONCAT71(uStack_1c0._1_7_,1);
      uStack_1c0 = CONCAT44(1,(undefined4)uStack_1c0);
    }
    FUN_1056370a4(&plStack_1b0);
    FUN_1056370b4();
  }
  iVar4 = (int)param_1 + 0x78;
  FUN_105642be0();
  if ((bRam00000001136bd3d8 & 1) == 0) {
    iVar5 = 0x136bd3d8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      ppuStack_80 = &PTR_DAT_110cea2f8;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      FUN_105643578(&ppuStack_330);
      uStack_70 = CONCAT44(uStack_70._4_4_,1);
      uVar7 = 0;
      FUN_1056375fc();
      uStack_68 = uVar7;
      FUN_105637598();
      plVar15 = (long *)0x18;
      __Znwm();
      pppuVar8 = &ppuStack_80;
      func_0x00010b47de1c(pppuVar8);
      func_0x000100291d50(plVar15,pppuVar8);
      func_0x00010b4d1758(&ppuStack_80,*plVar15,(int)plVar15[1] - (int)*plVar15);
      func_0x00010b47d774(&ppuStack_330);
      func_0x00010b47dd10(&ppuStack_80);
      plRam00000001136bd3d0 = plVar15;
      ___cxa_guard_release(0x1136bd3d8);
    }
  }
  uVar7 = 0x1e;
  if (iVar4 == 0) {
    uVar7 = 0x19;
  }
  puVar1 = &UNK_10f2e019b;
  if (iVar4 == 0) {
    puVar1 = &UNK_10f2e01ba;
  }
  func_0x00010b4b3734(&lStack_238,puVar1,uVar7,*plRam00000001136bd3d0,
                      plRam00000001136bd3d0[1] - *plRam00000001136bd3d0,&plStack_1b0);
  if (lStack_238 != lStack_230) {
    ppuStack_330 = &PTR_DAT_110cea2f8;
    uStack_328 = 0;
    uStack_320 = 0;
    ppuStack_318 = (undefined **)0x0;
    pppuVar8 = &ppuStack_330;
    func_0x00010006369c(pppuVar8,lStack_238,(int)lStack_230 - (int)lStack_238);
    if ((int)pppuVar8 != 0) {
      ppuVar2 = &PTR_PTR_113371568;
      if (ppuStack_318 != (undefined **)0x0) {
        ppuVar2 = ppuStack_318;
      }
      func_0x00010563701c(auStack_280,ppuVar2);
      cStack_248 = '\x01';
      func_0x000105637ce0();
      goto LAB_1056368e8;
    }
    func_0x000105637ce0();
  }
  auStack_280[0] = 0;
  cStack_248 = '\0';
LAB_1056368e8:
  func_0x000100100fec(&lStack_238);
  func_0x0001001148fc(auStack_220);
  func_0x0001001148fc(auStack_200);
  func_0x00010b511ce0(&plStack_1e0);
  func_0x00010b50e8bc(&plStack_1b0);
  func_0x00010b510608(&ppuStack_a0);
  if (cStack_248 == '\x01') {
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = 0;
    __ZNSt3__15mutex4lockEv(param_1 + 0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppuStack_330,uStack_270 & 0xfffffffffffffffc);
    plVar15 = *(long **)(param_1 + 8);
    plVar13 = (long *)plVar15[1];
    if ((plVar13 != (long *)0x0) && (plVar6 = plVar15 + 3, *plVar6 != 0)) {
      func_0x000100102e7c(plVar6,&ppuStack_330);
      uVar9 = (long)plVar13 - 1;
      if (((ulong)plVar13 & uVar9) == 0) {
        plVar14 = (long *)((ulong)plVar6 & uVar9);
      }
      else {
        plVar14 = plVar6;
        if (plVar13 <= plVar6) {
          uVar3 = 0;
          if (plVar13 != (long *)0x0) {
            uVar3 = (ulong)plVar6 / (ulong)plVar13;
          }
          plVar14 = (long *)((long)plVar6 - uVar3 * (long)plVar13);
        }
      }
      plVar16 = *(long **)(*plVar15 + (long)plVar14 * 8);
      plVar15 = (long *)0x0;
      if (plVar16 != (long *)0x0) {
LAB_105636a78:
        while (plVar15 = (long *)*plVar16, plVar15 != (long *)0x0) {
          plVar10 = (long *)plVar15[1];
          plVar16 = plVar15;
          if (plVar10 != plVar6) goto LAB_105636aa0;
          plVar10 = plVar15 + 2;
          func_0x0001000e107c(plVar10,&ppuStack_330);
          if (((ulong)plVar10 & 1) != 0) {
            if (plVar15[6] != 0) {
              do {
                func_0x000105637c4c();
              } while (extraout_w10_00 != 0);
            }
            func_0x000105637c64();
            goto LAB_105636cf0;
          }
        }
      }
    }
LAB_105636ac8:
    plVar13 = *(long **)(param_1 + 0x58);
    func_0x00010563701c(auStack_2b8,auStack_280);
    (**(code **)(*plVar13 + 8))(&ppuStack_80,plVar13,auStack_2b8);
    ppuVar2 = ppuStack_80;
    ppuStack_80 = (undefined **)0x0;
    uStack_78 = 0;
    func_0x000105637c64(ppuVar2);
    func_0x0001056378e4(&ppuStack_80);
    func_0x00010b47d774(auStack_2b8);
    plVar14 = *(long **)(param_1 + 8);
    plVar13 = plVar14 + 3;
    func_0x000100102e7c(plVar13,&ppuStack_330);
    plVar16 = (long *)plVar14[1];
    plVar6 = plVar13;
    if (plVar16 != (long *)0x0) {
      uVar9 = (long)plVar16 - 1;
      if (((ulong)plVar16 & uVar9) == 0) {
        plVar15 = (long *)(uVar9 & (ulong)plVar13);
      }
      else {
        plVar15 = plVar13;
        if (plVar16 <= plVar13) {
          uVar3 = 0;
          if (plVar16 != (long *)0x0) {
            uVar3 = (ulong)plVar13 / (ulong)plVar16;
          }
          plVar15 = (long *)((long)plVar13 - uVar3 * (long)plVar16);
        }
      }
      plVar10 = *(long **)(*plVar14 + (long)plVar15 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          while( true ) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_105636bb0;
            plVar11 = (long *)plVar10[1];
            if (plVar11 != plVar13) break;
            plVar6 = plVar10 + 2;
            func_0x0001000e107c(plVar6,&ppuStack_330);
            if (((ulong)plVar6 & 1) != 0) goto LAB_105636cf0;
          }
          if (((ulong)plVar16 & uVar9) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar9);
          }
          else if (plVar16 <= plVar11) {
            uVar3 = 0;
            if (plVar16 != (long *)0x0) {
              uVar3 = (ulong)plVar11 / (ulong)plVar16;
            }
            plVar11 = (long *)((long)plVar11 - uVar3 * (long)plVar16);
          }
        } while (plVar11 == plVar15);
      }
    }
LAB_105636bb0:
    func_0x000105637ccc();
    plVar10 = plVar14 + 2;
    uStack_1a0 = 0;
    *plVar6 = 0;
    plVar6[1] = (long)plVar13;
    plStack_1b0 = plVar6;
    plStack_1a8 = plVar10;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (plVar6 + 2,&ppuStack_330);
    plVar6[6] = uStack_1d8;
    plVar6[5] = (long)plStack_1e0;
    if (uStack_1d8 != 0) {
      do {
        func_0x000105637c4c();
      } while (extraout_w10 != 0);
    }
    uStack_1a0 = CONCAT71(uStack_1a0._1_7_,1);
    if ((plVar16 == (long *)0x0) ||
       (*(float *)(plVar14 + 4) * (float)plVar16 < (float)(plVar14[3] + 1))) {
      func_0x000105637ca0((long)plVar16 << 1);
      FUN_105637908(plVar14);
      plVar16 = (long *)plVar14[1];
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        plVar15 = (long *)((long)plVar16 - 1U & (ulong)plVar13);
      }
      else {
        plVar15 = plVar13;
        if (plVar16 <= plVar13) {
          uVar9 = 0;
          if (plVar16 != (long *)0x0) {
            uVar9 = (ulong)plVar13 / (ulong)plVar16;
          }
          plVar15 = (long *)((long)plVar13 - uVar9 * (long)plVar16);
        }
      }
    }
    lVar12 = *plVar14;
    plVar13 = *(long **)(lVar12 + (long)plVar15 * 8);
    if (plVar13 == (long *)0x0) {
      *plStack_1b0 = *plVar10;
      *plVar10 = (long)plStack_1b0;
      *(long **)(lVar12 + (long)plVar15 * 8) = plVar10;
      if (*plStack_1b0 != 0) {
        plVar15 = *(long **)(*plStack_1b0 + 8);
        if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
          plVar15 = (long *)((ulong)plVar15 & (long)plVar16 - 1U);
        }
        else if (plVar16 <= plVar15) {
          uVar9 = 0;
          if (plVar16 != (long *)0x0) {
            uVar9 = (ulong)plVar15 / (ulong)plVar16;
          }
          plVar15 = (long *)((long)plVar15 - uVar9 * (long)plVar16);
        }
        *(long **)(lVar12 + (long)plVar15 * 8) = plStack_1b0;
      }
    }
    else {
      *plStack_1b0 = *plVar13;
      *plVar13 = (long)plStack_1b0;
    }
    plStack_1b0 = (long *)0x0;
    plVar14[3] = plVar14[3] + 1;
    FUN_105637b08(&plStack_1b0);
LAB_105636cf0:
    func_0x000105637c5c();
    __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
    lVar12 = lStack_240;
    func_0x00010bcd5ad0(auStack_2d0,uStack_270 & 0xfffffffffffffffc);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_2e8,uStack_268 & 0xfffffffffffffffc);
    func_0x00010563c038(lVar12,auStack_2d0,auStack_2e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d0);
    lStack_2f0 = lStack_240;
    lStack_240 = 0;
    (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0,param_7,&lStack_2f0);
    func_0x000105637860(&lStack_2f0);
    func_0x0001056378e4(&plStack_1e0);
  }
  else {
    func_0x00010002b838(&ppuStack_348,&UNK_10f2e0172);
    func_0x00010028b26c(&uStack_368,&PTR_DAT_1108a14d8);
    uStack_320 = uStack_338;
    uStack_328 = uStack_340;
    ppuStack_330 = ppuStack_348;
    uStack_340 = 0;
    uStack_338 = 0;
    ppuStack_348 = (undefined **)0x0;
    ppuStack_318 = (undefined **)0x32;
    uStack_310 = uStack_310 & 0xffffffffffffff00;
    uStack_2f8 = cStack_350 == '\x01';
    if ((bool)uStack_2f8) {
      uStack_308 = uStack_360;
      uStack_310 = uStack_368;
      uStack_300 = uStack_358;
      uStack_360 = 0;
      uStack_358 = 0;
      uStack_368 = 0;
    }
    func_0x0001001148fc(&uStack_368);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_348);
    lVar12 = lStack_240;
    plVar15 = (long *)*param_7;
    func_0x000105637458(auStack_3b0,&ppuStack_330);
    FUN_10563c144(&plStack_1b0,lVar12,0,auStack_3b0);
    (**(code **)(*plVar15 + 0x18))(plVar15,&ppuStack_330,&plStack_1b0);
    FUN_1056319c4(&plStack_1b0);
    FUN_1052a038c(auStack_3b0);
    FUN_1052a03ac(&ppuStack_330);
  }
  func_0x000105637474(auStack_280);
  func_0x000105637860(&lStack_240);
  return;
LAB_105636aa0:
  if (((ulong)plVar13 & uVar9) == 0) {
    plVar10 = (long *)((ulong)plVar10 & uVar9);
  }
  else if (plVar13 <= plVar10) {
    uVar3 = 0;
    if (plVar13 != (long *)0x0) {
      uVar3 = (ulong)plVar10 / (ulong)plVar13;
    }
    plVar10 = (long *)((long)plVar10 - uVar3 * (long)plVar13);
  }
  if (plVar10 != plVar14) goto LAB_105636ac8;
  goto LAB_105636a78;
}



/* Entry: 105636ff4; end: 10563701b;  */

void FUN_105636ff4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm();
  FUN_10563bff0();
  *param_1 = uVar1;
  return;
}



/* Entry: 10563701c; end: 10563703f;  */

undefined8 * FUN_10563701c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110cea258;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_2 + 0x10;
  func_0x000107c2809c(lVar1,0);
  param_1[2] = lVar1;
  lVar1 = param_2 + 0x18;
  func_0x000107c2809c(lVar1,0);
  param_1[3] = lVar1;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 105637040; end: 1056370a3;  */

long FUN_105637040(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b510818(param_1);
    }
    else {
      func_0x00010b5107e0(param_1);
    }
  }
  return param_1;
}



/* Entry: 1056370a4; end: 1056370b3;  */

void FUN_1056370a4(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40000;
  if (*(long *)(param_1 + 0xe0) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000105637550();
    *(ulong *)(param_1 + 0xe0) = uVar1;
  }
  return;
}



/* Entry: 1056370b4; end: 105637117;  */

long FUN_1056370b4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b5120a8(param_1);
    }
    else {
      func_0x00010b512070(param_1);
    }
  }
  return param_1;
}



/* Entry: 105637118; end: 1056373d3;  */

void FUN_105637118(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  int extraout_w10;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  long *plVar9;
  long lVar10;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  float fStack_80;
  long *plStack_78;
  long **pplStack_70;
  undefined8 uStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 8);
  plStack_98 = (long *)0x0;
  lStack_a0 = 0;
  lStack_88 = 0;
  plStack_90 = (long *)0x0;
  fStack_80 = *(float *)(lVar5 + 0x20);
  FUN_105637908(&lStack_a0,*(undefined8 *)(lVar5 + 8));
  plVar7 = (long *)(lVar5 + 0x10);
LAB_105637174:
  do {
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
      for (plVar7 = plStack_90; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        (**(code **)(*(long *)plVar7[5] + 0x18))();
      }
      func_0x000105637cc4();
      return;
    }
    plVar4 = &lStack_88;
    func_0x000100102e7c(plVar4,plVar7 + 2);
    plVar8 = plStack_98;
    plVar2 = plVar4;
    if (plStack_98 != (long *)0x0) {
      uVar6 = (long)plStack_98 - 1;
      if (((ulong)plStack_98 & uVar6) == 0) {
        unaff_x27 = (long *)(uVar6 & (ulong)plVar4);
      }
      else {
        unaff_x27 = plVar4;
        if (plStack_98 <= plVar4) {
          uVar1 = 0;
          if (plStack_98 != (long *)0x0) {
            uVar1 = (ulong)plVar4 / (ulong)plStack_98;
          }
          unaff_x27 = (long *)((long)plVar4 - uVar1 * (long)plStack_98);
        }
      }
      plVar9 = *(long **)(lStack_a0 + (long)unaff_x27 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_105637218;
            plVar3 = (long *)plVar9[1];
            if (plVar3 != plVar4) break;
            plVar2 = plVar9 + 2;
            func_0x0001000e107c(plVar2,plVar7 + 2);
            if (((ulong)plVar2 & 1) != 0) goto LAB_105637174;
          }
          if (((ulong)plVar8 & uVar6) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar6);
          }
          else if (plVar8 <= plVar3) {
            uVar1 = 0;
            if (plVar8 != (long *)0x0) {
              uVar1 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar8);
          }
        } while (plVar3 == unaff_x27);
      }
    }
LAB_105637218:
    func_0x000105637ccc();
    uStack_68 = 0;
    plStack_78 = plVar2;
    pplStack_70 = &plStack_90;
    *plVar2 = 0;
    plVar2[1] = (long)plVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar2 + 2,plVar7 + 2);
    lVar5 = plVar7[6];
    lVar10 = plVar7[5];
    plVar2[6] = plVar7[6];
    plVar2[5] = lVar10;
    if (lVar5 != 0) {
      do {
        func_0x000105637c4c();
      } while (extraout_w10 != 0);
    }
    uStack_68 = CONCAT71(uStack_68._1_7_,1);
    if ((plVar8 == (long *)0x0) || (fStack_80 * (float)plVar8 < (float)(lStack_88 + 1))) {
      func_0x000105637ca0((long)plVar8 << 1);
      FUN_105637908(&lStack_a0);
      plVar8 = plStack_98;
      if (((ulong)plStack_98 & (long)plStack_98 - 1U) == 0) {
        unaff_x27 = (long *)((long)plStack_98 - 1U & (ulong)plVar4);
      }
      else {
        unaff_x27 = plVar4;
        if (plStack_98 <= plVar4) {
          uVar6 = 0;
          if (plStack_98 != (long *)0x0) {
            uVar6 = (ulong)plVar4 / (ulong)plStack_98;
          }
          unaff_x27 = (long *)((long)plVar4 - uVar6 * (long)plStack_98);
        }
      }
    }
    plVar4 = *(long **)(lStack_a0 + (long)unaff_x27 * 8);
    if (plVar4 == (long *)0x0) {
      *plStack_78 = (long)plStack_90;
      plStack_90 = plStack_78;
      *(long ***)(lStack_a0 + (long)unaff_x27 * 8) = &plStack_90;
      if (*plStack_78 != 0) {
        plVar4 = *(long **)(*plStack_78 + 8);
        if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
          plVar4 = (long *)((ulong)plVar4 & (long)plVar8 - 1U);
        }
        else if (plVar8 <= plVar4) {
          uVar6 = 0;
          if (plVar8 != (long *)0x0) {
            uVar6 = (ulong)plVar4 / (ulong)plVar8;
          }
          plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar8);
        }
        *(long **)(lStack_a0 + (long)plVar4 * 8) = plStack_78;
      }
    }
    else {
      *plStack_78 = *plVar4;
      *plVar4 = (long)plStack_78;
    }
    plStack_78 = (long *)0x0;
    lStack_88 = lStack_88 + 1;
    FUN_105637b08(&plStack_78);
  } while( true );
}



/* Entry: 1056373d4; end: 1056373d7;  */

undefined8 * FUN_1056373d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a14b8;
  FUN_105633af4(param_1 + 0xf);
  func_0x0001005d8154(param_1 + 0xd);
  func_0x00010563783c(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  func_0x000105637818(param_1 + 1);
  return param_1;
}



/* Entry: 1056373d8; end: 1056373eb;  */

void FUN_1056373d8(void)

{
  func_0x000105637650();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056373ec; end: 105637427;  */

undefined1 * FUN_1056373ec(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_105637428();
  return param_1;
}



/* Entry: 105637428; end: 10563743b;  */

void FUN_105637428(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_105634354();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 10563743c; end: 105637493;  */

void FUN_10563743c(long param_1)

{
  FUN_105634354();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 105637494; end: 105637597;  */

void FUN_105637494(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x0001056374cc();
    *(ulong *)(param_1 + 0x98) = uVar1;
  }
  return;
}



/* Entry: 105637598; end: 1056375fb;  */

long FUN_105637598(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b47db2c(param_1);
    }
    else {
      func_0x00010b47daf8(param_1);
    }
  }
  return param_1;
}



/* Entry: 1056375fc; end: 1056376c7;  */

void FUN_1056375fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000105637ccc();
  }
  else {
    func_0x00010b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_DAT_110cea258;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 1056376c8; end: 1056376cb;  */

void FUN_1056376c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a1518;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1056376cc; end: 1056376df;  */

void FUN_1056376cc(void)

{
  func_0x0001056376ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056376e0; end: 1056376ff;  */

long FUN_1056376e0(long param_1)

{
  func_0x00010b491030();
  func_0x0001005d80dc(param_1 + 0x18,0);
  return param_1 + 0x18;
}



/* Entry: 105637700; end: 105637713;  */

void FUN_105637700(void)

{
  func_0x00010563771c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105637714; end: 105637727;  */

void FUN_105637714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105637cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105637728; end: 10563774b;  */

void FUN_105637728(long param_1)

{
  func_0x0001005d1958();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10563774c; end: 10563774f;  */

void FUN_10563774c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a15b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105637750; end: 105637763;  */

void FUN_105637750(void)

{
  FUN_105637798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105637764; end: 105637773;  */

void FUN_105637764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010563776c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 105637774; end: 105637797;  */

void FUN_105637774(long param_1)

{
  func_0x0001005d1958();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105637798; end: 1056377a3;  */

void FUN_105637798(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a15b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1056377a4; end: 1056377eb;  */

void FUN_1056377a4(long param_1)

{
  func_0x0001005d1958();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1056377ec; end: 1056377ef;  */

void FUN_1056377ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a1608;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1056377f0; end: 105637803;  */

void FUN_1056377f0(void)

{
  func_0x00010563780c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105637804; end: 105637817;  */

void FUN_105637804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105637cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105637818; end: 105637883;  */

void FUN_105637818(long param_1)

{
  func_0x0001005d1958();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105637884; end: 10563789b;  */

void FUN_105637884(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1056378b8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10563789c; end: 1056378b7;  */

void FUN_10563789c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1056378b8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056378b8; end: 105637907;  */

long FUN_1056378b8(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  return param_1;
}



/* Entry: 105637908; end: 1056379d7;  */

void FUN_105637908(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_105637950;
    }
    return;
  }
LAB_105637950:
  if (param_2 == 0) {
    FUN_105637ad4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_105637aec(plVar2);
    FUN_105637ad4(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1056379d8; end: 105637ad3;  */

void FUN_1056379d8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_105637ad4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_105637aec(plVar3);
    FUN_105637ad4(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 105637ad4; end: 105637aeb;  */

void FUN_105637ad4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105637aec; end: 105637b07;  */

long FUN_105637aec(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_105637b2c();
  return param_1;
}



/* Entry: 105637b08; end: 105637b2b;  */

undefined8 FUN_105637b08(undefined8 param_1)

{
  FUN_105637b2c(param_1,0);
  return param_1;
}



/* Entry: 105637b2c; end: 105637b43;  */

void FUN_105637b2c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000105637b88(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}


