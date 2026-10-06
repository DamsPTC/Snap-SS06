/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f5ce40; end: 107f5ce47; -[SCCloudSyncSnapDocBasedEntryCleanupContext addedEntryAssets] */

undefined8 FUN_107f5ce40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f5ce48; end: 107f5ce4f; -[SCCloudSyncSnapDocBasedEntryCleanupContext deletedEntryAssets] */

undefined8 FUN_107f5ce48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f5ce50; end: 107f5ce97; -[SCCloudSyncSnapDocBasedEntryCleanupContext .cxx_destruct] */

void FUN_107f5ce50(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5ce98; end: 107f5ceb3; +[SCCloudSyncSnapDocBasedEntryCleanupContextBuilder cloudSyncSnapDocBasedEntryCleanupContext] */

void FUN_107f5ce98(void)

{
  _objc_alloc_init(PTR_PTR_1126d8330);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f5ceb4; end: 107f5d00f; +[SCCloudSyncSnapDocBasedEntryCleanupContextBuilder cloudSyncSnapDocBasedEntryCleanupContextFromExistingCloudSyncSnapDocBasedEntryCleanupContext:] */

void FUN_107f5ceb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126d8330;
  _objc_retain(param_3);
  func_0x00010bf3e580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010befcd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2a7f60(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf6cfe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac260(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010befcb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2a7f40(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf6cec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar9 = puVar7;
  func_0x00010c2ac220(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107f5d010; end: 107f5d043; -[SCCloudSyncSnapDocBasedEntryCleanupContextBuilder build] */

void FUN_107f5d010(void)

{
  _objc_alloc(PTR_PTR_1126d8750);
  func_0x00010bff2520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f5d044; end: 107f5d07b; -[SCCloudSyncSnapDocBasedEntryCleanupContextBuilder withAddedSnaps:] */

long FUN_107f5d044(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5d07c; end: 107f5d0b3; -[SCCloudSyncSnapDocBasedEntryCleanupContextBuilder withDeletedSnaps:] */

long FUN_107f5d07c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5d0b4; end: 107f5d0eb; -[SCCloudSyncSnapDocBasedEntryCleanupContextBuilder withAddedEntryAssets:] */

long FUN_107f5d0b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5d0ec; end: 107f5d123; -[SCCloudSyncSnapDocBasedEntryCleanupContextBuilder withDeletedEntryAssets:] */

long FUN_107f5d0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5d124; end: 107f5d16b; -[SCCloudSyncSnapDocBasedEntryCleanupContextBuilder .cxx_destruct] */

void FUN_107f5d124(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5d16c; end: 107f5d1e3; -[SCCloudSyncOperationResult initWithEntryInfoDict:] */

undefined1 * FUN_107f5d16c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fbc60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
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



/* Entry: 107f5d1e4; end: 107f5d207; -[SCCloudSyncOperationResult copyWithZone:] */

undefined8 FUN_107f5d1e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5d208; end: 107f5d20f; -[SCCloudSyncOperationResult entryInfoDict] */

undefined8 FUN_107f5d208(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f5d210; end: 107f5d21b; -[SCCloudSyncOperationResult .cxx_destruct] */

void FUN_107f5d210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5d21c; end: 107f5d287; +[SCCloudSyncDeleteEntriesResult networkFailureWithError:] */

void FUN_107f5d21c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d84d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f5d288; end: 107f5d33b; +[SCCloudSyncDeleteEntriesResult serverFailureWithServiceStatusCodeEnum:entries:backoffTimeValueMs:debugInfo:] */

void FUN_107f5d288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d84d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f5d33c; end: 107f5d39f; +[SCCloudSyncDeleteEntriesResult successWithEntryInfoDict:] */

void FUN_107f5d33c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d84d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f5d3a0; end: 107f5d3c3; -[SCCloudSyncDeleteEntriesResult copyWithZone:] */

undefined8 FUN_107f5d3a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5d3c4; end: 107f5d407; -[SCCloudSyncDeleteEntriesResult internalInit] */

void FUN_107f5d3c4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fbc68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f5d408; end: 107f5d4c3; -[SCCloudSyncDeleteEntriesResult matchSuccess:serverFailure:networkFailure:] */

void FUN_107f5d408(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_107f5d4a0;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (*(undefined8 *)(param_1 + 0x28),param_4,*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
      }
      goto LAB_107f5d4a0;
    }
    if ((lVar2 != 0) || (param_3 == 0)) goto LAB_107f5d4a0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_107f5d4a0:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f5d4c4; end: 107f5d50b; -[SCCloudSyncDeleteEntriesResult .cxx_destruct] */

void FUN_107f5d4c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f5d50c; end: 107f5d677; -[SCCloudSyncCreateSnapDocEntryStepData initWithAddSnapEntity:entryData:snapDoc:thumbnailData:thumbnailBoltContentUrl:entryInfoDict:] */

undefined1 *
FUN_107f5d50c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126fbc70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5d678; end: 107f5d69b; -[SCCloudSyncCreateSnapDocEntryStepData copyWithZone:] */

undefined8 FUN_107f5d678(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5d69c; end: 107f5d6a3; -[SCCloudSyncCreateSnapDocEntryStepData addSnapEntity] */

undefined8 FUN_107f5d69c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f5d6a4; end: 107f5d6ab; -[SCCloudSyncCreateSnapDocEntryStepData entryData] */

undefined8 FUN_107f5d6a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5d6ac; end: 107f5d6b3; -[SCCloudSyncCreateSnapDocEntryStepData snapDoc] */

undefined8 FUN_107f5d6ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f5d6b4; end: 107f5d6bb; -[SCCloudSyncCreateSnapDocEntryStepData thumbnailData] */

undefined8 FUN_107f5d6b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f5d6bc; end: 107f5d6c3; -[SCCloudSyncCreateSnapDocEntryStepData thumbnailBoltContentUrl] */

undefined8 FUN_107f5d6bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f5d6c4; end: 107f5d6cb; -[SCCloudSyncCreateSnapDocEntryStepData entryInfoDict] */

undefined8 FUN_107f5d6c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107f5d6cc; end: 107f5d72b; -[SCCloudSyncCreateSnapDocEntryStepData .cxx_destruct] */

void FUN_107f5d6cc(long param_1)

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



/* Entry: 107f5d72c; end: 107f5d747; +[SCCloudSyncCreateSnapDocEntryStepDataBuilder cloudSyncCreateSnapDocEntryStepData] */

void FUN_107f5d72c(void)

{
  _objc_alloc_init(PTR_PTR_1126d8580);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f5d748; end: 107f5d92b; +[SCCloudSyncCreateSnapDocEntryStepDataBuilder cloudSyncCreateSnapDocEntryStepDataFromExistingCloudSyncCreateSnapDocEntryStepData:] */

void FUN_107f5d748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  puVar1 = PTR_PTR_1126d8580;
  _objc_retain(param_3);
  func_0x00010bf3e440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010befb620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2a7ee0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf97120(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ad3e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c23fe00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b9320(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c26da00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2bafa0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c26d860(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2baf60(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bf97280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar13 = puVar11;
  func_0x00010c2ad460(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107f5d92c; end: 107f5d963; -[SCCloudSyncCreateSnapDocEntryStepDataBuilder build] */

void FUN_107f5d92c(void)

{
  _objc_alloc(PTR_PTR_1126d8758);
  func_0x00010bff2380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f5d964; end: 107f5d99b; -[SCCloudSyncCreateSnapDocEntryStepDataBuilder withAddSnapEntity:] */

long FUN_107f5d964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5d99c; end: 107f5d9d3; -[SCCloudSyncCreateSnapDocEntryStepDataBuilder withEntryData:] */

long FUN_107f5d99c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5d9d4; end: 107f5da0b; -[SCCloudSyncCreateSnapDocEntryStepDataBuilder withSnapDoc:] */

long FUN_107f5d9d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5da0c; end: 107f5da43; -[SCCloudSyncCreateSnapDocEntryStepDataBuilder withThumbnailData:] */

long FUN_107f5da0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5da44; end: 107f5da7b; -[SCCloudSyncCreateSnapDocEntryStepDataBuilder withThumbnailBoltContentUrl:] */

long FUN_107f5da44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5da7c; end: 107f5dab3; -[SCCloudSyncCreateSnapDocEntryStepDataBuilder withEntryInfoDict:] */

long FUN_107f5da7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5dab4; end: 107f5db13; -[SCCloudSyncCreateSnapDocEntryStepDataBuilder .cxx_destruct] */

void FUN_107f5dab4(long param_1)

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



/* Entry: 107f5db14; end: 107f5db7f; +[SCCloudSyncUpdateEntryOperationResult localInconsistencyFailureWithErrorMessage:] */

void FUN_107f5db14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8558;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f5db80; end: 107f5dbeb; +[SCCloudSyncUpdateEntryOperationResult networkFailureWithError:] */

void FUN_107f5db80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8558;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f5dbec; end: 107f5dc9f; +[SCCloudSyncUpdateEntryOperationResult serverFailureWithServiceStatusCodeEnum:entries:backoffTimeValueMs:debugInfo:] */

void FUN_107f5dbec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d8558;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f5dca0; end: 107f5dd03; +[SCCloudSyncUpdateEntryOperationResult successWithEntryInfoDict:] */

void FUN_107f5dca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8558;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f5dd04; end: 107f5dd27; -[SCCloudSyncUpdateEntryOperationResult copyWithZone:] */

undefined8 FUN_107f5dd04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5dd28; end: 107f5dd6b; -[SCCloudSyncUpdateEntryOperationResult internalInit] */

void FUN_107f5dd28(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fbc78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f5dd6c; end: 107f5de67; -[SCCloudSyncUpdateEntryOperationResult matchSuccess:serverFailure:networkFailure:localInconsistencyFailure:] */

void FUN_107f5dd6c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 != 0) {
      if ((lVar2 == 1) && (param_4 != 0)) {
        (**(code **)(param_4 + 0x10))
                  (*(undefined8 *)(param_1 + 0x28),param_4,*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
      }
      goto LAB_107f5de38;
    }
    if (param_3 == 0) goto LAB_107f5de38;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  else if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_107f5de38;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if ((lVar2 != 3) || (param_6 == 0)) goto LAB_107f5de38;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_6;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_107f5de38:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f5de68; end: 107f5debb; -[SCCloudSyncUpdateEntryOperationResult .cxx_destruct] */

void FUN_107f5de68(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f5debc; end: 107f5dfcf; -[SCCloudSyncAddSnapsResultAnalytics initWithBaseMediaAnalytics:thumbnailAnalytics:overlayAnalytics:genericAssetAnalytics:isDuplicatedFromOriginalSnap:] */

undefined1 *
FUN_107f5debc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126fbc80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5dfd0; end: 107f5dff3; -[SCCloudSyncAddSnapsResultAnalytics copyWithZone:] */

undefined8 FUN_107f5dfd0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5dff4; end: 107f5dffb; -[SCCloudSyncAddSnapsResultAnalytics baseMediaAnalytics] */

undefined8 FUN_107f5dff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5dffc; end: 107f5e003; -[SCCloudSyncAddSnapsResultAnalytics thumbnailAnalytics] */

undefined8 FUN_107f5dffc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f5e004; end: 107f5e00b; -[SCCloudSyncAddSnapsResultAnalytics overlayAnalytics] */

undefined8 FUN_107f5e004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f5e00c; end: 107f5e013; -[SCCloudSyncAddSnapsResultAnalytics genericAssetAnalytics] */

undefined8 FUN_107f5e00c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f5e014; end: 107f5e01b; -[SCCloudSyncAddSnapsResultAnalytics isDuplicatedFromOriginalSnap] */

undefined1 FUN_107f5e014(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107f5e01c; end: 107f5e063; -[SCCloudSyncAddSnapsResultAnalytics .cxx_destruct] */

void FUN_107f5e01c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f5e064; end: 107f5e0b3; -[SCCloudSyncContentUploadAnalytics initWithHasContent:shouldUploadContent:] */

void FUN_107f5e064(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fbc88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 107f5e0b4; end: 107f5e0d7; -[SCCloudSyncContentUploadAnalytics copyWithZone:] */

undefined8 FUN_107f5e0b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5e0d8; end: 107f5e0df; -[SCCloudSyncContentUploadAnalytics hasContent] */

undefined1 FUN_107f5e0d8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107f5e0e0; end: 107f5e0e7; -[SCCloudSyncContentUploadAnalytics shouldUploadContent] */

undefined1 FUN_107f5e0e0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107f5e0e8; end: 107f5e143; -[SCCloudSyncStepAnalytics initWithType:entryType:isReplacingSnap:] */

void FUN_107f5e0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fbc90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  return;
}



/* Entry: 107f5e144; end: 107f5e167; -[SCCloudSyncStepAnalytics copyWithZone:] */

undefined8 FUN_107f5e144(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5e168; end: 107f5e16f; -[SCCloudSyncStepAnalytics type] */

undefined8 FUN_107f5e168(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5e170; end: 107f5e177; -[SCCloudSyncStepAnalytics entryType] */

undefined8 FUN_107f5e170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f5e178; end: 107f5e17f; -[SCCloudSyncStepAnalytics isReplacingSnap] */

undefined1 FUN_107f5e178(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107f5e180; end: 107f5e267; -[SCCloudSyncUpdateEntryOperationData initWithDeleteSharedSnapForAll:deletedSnapId:title:updatedSnapsOrder:] */

undefined1 *
FUN_107f5e180(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fbc98;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5e268; end: 107f5e28b; -[SCCloudSyncUpdateEntryOperationData copyWithZone:] */

undefined8 FUN_107f5e268(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5e28c; end: 107f5e293; -[SCCloudSyncUpdateEntryOperationData deleteSharedSnapForAll] */

undefined1 FUN_107f5e28c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107f5e294; end: 107f5e29b; -[SCCloudSyncUpdateEntryOperationData deletedSnapId] */

undefined8 FUN_107f5e294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5e29c; end: 107f5e2a3; -[SCCloudSyncUpdateEntryOperationData title] */

undefined8 FUN_107f5e29c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f5e2a4; end: 107f5e2ab; -[SCCloudSyncUpdateEntryOperationData updatedSnapsOrder] */

undefined8 FUN_107f5e2a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f5e2ac; end: 107f5e2e7; -[SCCloudSyncUpdateEntryOperationData .cxx_destruct] */

void FUN_107f5e2ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f5e2e8; end: 107f5e62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f5e2e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  
  puVar1 = PTR_PTR_1126d8760;
  _objc_alloc();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_112771db4;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar3;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = lVar6 + _DAT_112771dac;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar7;
  func_0x00010c0869e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar10 = 0;
  if (lVar9 != 0) {
    lVar10 = lVar9 + _DAT_112771da4;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar10;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar14 = 0;
  if (lVar13 != 0) {
    lVar14 = lVar13 + _DAT_112771da8;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar14;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar18 = 0;
  if (lVar17 != 0) {
    lVar18 = lVar17 + _DAT_112771db0;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar18;
  func_0x00010bf27740();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar21 = 0;
  if (lVar20 != 0) {
    lVar21 = lVar20 + _DAT_112771db8;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar21;
  func_0x00010c0c99c0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar24 = 0;
  if (lVar23 != 0) {
    lVar24 = lVar23 + _DAT_112771dbc;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar24;
  func_0x00010bf63de0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112771da0;
    _objc_loadWeakRetained();
  }
  lVar26 = lVar27;
  func_0x00010c2400a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016d80(puVar1,param_2,lVar5,lVar8,lVar12,lVar16,lVar19,lVar22,lVar25,lVar26);
  _objc_release(lVar26);
  _objc_release(lVar27);
  _objc_release(param_1);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
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
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f5e630; end: 107f5e6bb; -[SCMemoriesSyncThumbnailGeneratorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f5e630(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112771dbc);
  _objc_destroyWeak(param_1 + _DAT_112771db8);
  _objc_destroyWeak(param_1 + _DAT_112771db4);
  _objc_destroyWeak(param_1 + _DAT_112771db0);
  _objc_destroyWeak(param_1 + _DAT_112771dac);
  _objc_destroyWeak(param_1 + _DAT_112771da8);
  _objc_destroyWeak(param_1 + _DAT_112771da4);
  _objc_destroyWeak(param_1 + _DAT_112771da0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112771d9c);
  return;
}



/* Entry: 107f5e6bc; end: 107f5e863; -[SCMemoriesSyncThumbnailFileGeneratingImpl initWithGalleryEncryptedDatabase:masterKeyService:cloudFS:encryptedContentManager:memoriesCachingMediaHelper:memoriesSnapDocThumbnailGenerator:memoriesBridgeDataModelFetcher:memoriesSnapDocEncryptionManager:] */

undefined1 *
FUN_107f5e6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1126fbca0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
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



/* Entry: 107f5e864; end: 107f5ef5f; -[SCMemoriesSyncThumbnailFileGeneratingImpl renderedLowresMediaForSnap:detail:requestUnencryptedOutput:] */

void FUN_107f5e864(undefined8 param_1,double param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,uint param_7)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  double dVar15;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_107f5ef60;
  uStack_a0 = 0x107f5ef70;
  uStack_98 = 0;
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x3032000000;
  pcStack_d8 = FUN_107f5ef60;
  uStack_d0 = 0x107f5ef70;
  uStack_c8 = 0;
  puStack_108 = &uStack_110;
  uStack_110 = 0;
  uStack_100 = 0x2020000000;
  uStack_f8 = 0;
  uVar2 = *(ulong *)(param_3 + 0x18);
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06cde0();
  if ((uVar3 & 1) == 0) {
    puVar14 = (undefined *)0x0;
    goto LAB_107f5ee6c;
  }
  uVar4 = 0;
  _dispatch_semaphore_create();
  uVar13 = *(undefined8 *)(param_3 + 8);
  puVar14 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  uVar5 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  dVar15 = 1.60807493534087e-314;
  _objc_retain(uVar4);
  func_0x00010c135a60(uVar13);
  _objc_release(uVar5);
  _objc_release(puVar14);
  _dispatch_semaphore_wait(uVar4,0xffffffffffffffff);
  lVar6 = puStack_b8[5];
  func_0x00010c08fa60();
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = puStack_e8[5];
    func_0x00010c08fa60();
    if ((lVar7 != 0) && (*(char *)(puStack_108 + 3) == '\x01')) {
      lVar6 = *(long *)(param_3 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0bc420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      if (lVar7 != 0) {
        uVar5 = puStack_b8[5];
        lVar6 = lVar7;
        func_0x00010bf93ec0(lVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c0646e0(lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156c60();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = puStack_b8[5];
        puStack_b8[5] = uVar5;
        _objc_release(uVar13);
        _objc_release(lVar8);
        _objc_release(lVar6);
        uVar5 = puStack_e8[5];
        lVar6 = lVar7;
        func_0x00010bf93ec0(lVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c0646e0(lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156c60();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = puStack_e8[5];
        puStack_e8[5] = uVar5;
        _objc_release(uVar13);
        _objc_release(lVar8);
        _objc_release(lVar6);
      }
      _objc_release(lVar7);
    }
  }
  _objc_autoreleasePoolPush();
  uVar3 = param_5;
  func_0x00010b5fa088();
  iVar1 = (int)uVar3;
  func_0x00010b5fa4c8();
  if (iVar1 == 0) {
    uVar3 = param_5;
    func_0x00010b5fa088();
    puVar14 = (undefined *)0x0;
    if ((uVar3 < 0xd) && ((1L << (uVar3 & 0x3f) & 0x1566U) != 0)) {
      puVar14 = *(undefined **)(param_3 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_6;
      func_0x00010c0ef4a0(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar14;
      func_0x00010bfbf340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(puVar14);
      if (puVar9 == (undefined *)0x0) goto LAB_107f5ee08;
      puVar10 = puVar9;
      func_0x00010b686308();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      func_0x00010c23d0a0(puVar10);
      puVar11 = puVar10;
      func_0x00010c14e6c0(0x4070e00000000000,(double)(float)(int)((270.0 / dVar15) * param_2),
                          0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      if (puVar11 == (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
        goto LAB_107f5ee44;
      }
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_90 = puVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar14;
      func_0x00010b6867c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      lVar6 = puStack_b8[5];
      func_0x00010c08fa60();
      puVar14 = puVar12;
      if (lVar6 == 0) {
LAB_107f5ee20:
        _objc_retain(puVar12);
      }
      else {
        lVar6 = puStack_e8[5];
        func_0x00010c08fa60();
        if (((param_7 & 1) != 0) || (lVar6 == 0)) goto LAB_107f5ee20;
        func_0x00010c156ce0(puVar12);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar12);
      _objc_release(puVar11);
      goto LAB_107f5ee44;
    }
  }
  else {
    puVar9 = *(undefined **)(param_3 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_6;
    func_0x00010c0ef4a0(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar9;
    func_0x00010bfbf380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar9);
    func_0x00010c23d0a0(puVar14);
    func_0x00010c23d0a0(puVar14);
    puVar9 = puVar14;
    func_0x00010c14e6c0(0x4070e00000000000,(double)(float)(int)((270.0 / dVar15) * param_2),
                        0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    if (puVar9 == (undefined *)0x0) {
LAB_107f5ee08:
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar9;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar14;
      func_0x00010b6867c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      lVar6 = puStack_b8[5];
      func_0x00010c08fa60();
      puVar14 = puVar10;
      if (lVar6 != 0) {
        lVar6 = puStack_e8[5];
        func_0x00010c08fa60();
        if (((param_7 & 1) == 0) && (lVar6 != 0)) {
          func_0x00010c156ce0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107f5ee44;
        }
      }
      _objc_retain(puVar10);
LAB_107f5ee44:
      _objc_release(puVar10);
    }
    _objc_release(puVar9);
  }
  _objc_autoreleasePoolPop(lVar7);
  _objc_release(uVar4);
  _objc_release(uVar4);
LAB_107f5ee6c:
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_110,8);
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_110,8);
  __Block_object_dispose(&uStack_f0,8);
  lVar7 = 8;
  __Block_object_dispose(&uStack_c0);
  __Unwind_Resume();
  *(undefined8 *)(param_5 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  return;
}



/* Entry: 107f5ef60; end: 107f5ef77;  */

void FUN_107f5ef60(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f5ef78; end: 107f5f01b;  */

void FUN_107f5ef78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010bdc1800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010c0719c0();
  _objc_release(param_2);
  *(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107f5f01c; end: 107f5f24f; -[SCMemoriesSyncThumbnailFileGeneratingImpl renderedLowresMediaForMemoriesSnap:requestUnencryptedOutput:completion:] */

void FUN_107f5f01c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = param_3;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = *(undefined **)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bfa7120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010bfbd760();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c130520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = (undefined *)0x0;
    (**(code **)(param_5 + 0x10))(param_5,param_1,0);
    _objc_release(param_1);
  }
  else {
    puVar3 = param_3;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)0xfffffffffffffc14;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar4;
      (**(code **)(param_5 + 0x10))(param_5,0,puVar4);
    }
    else {
      puVar4 = param_3;
      func_0x00010bfbd760();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      puVar7 = puVar4;
      param_6 = param_5;
      func_0x00010c1304e0(param_1);
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(puVar7);
  _objc_retain(param_6);
  puVar4 = *(undefined **)(param_3 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bfc51a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,0,puVar4);
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    uVar1 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfc04e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bfb70;
    func_0x00010c29a8e0(PTR_PTR_1126bfb70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    _objc_retain(param_6);
    _objc_retain(puVar7);
    func_0x00010bfc05e0(uVar1);
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar7);
    _objc_release(param_6);
    puVar4 = puVar2;
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(puVar7);
  _objc_release(puVar3);
  return;
}



/* Entry: 107f5f250; end: 107f5f437; -[SCMemoriesSyncThumbnailFileGeneratingImpl renderedLowresMediaBasedOnSnapDoc:snap:requestUnencryptedOutput:completion:] */

void FUN_107f5f250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar2 = *(undefined **)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfc51a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,0,puVar2);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfc04e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bfb70;
    func_0x00010c29a8e0(PTR_PTR_1126bfb70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x00010bfc05e0(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_4);
    _objc_release(param_6);
    puVar2 = puVar3;
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f5f438; end: 107f5f4df;  */

void FUN_107f5f438(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be8e6e0(lVar1,param_2,param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined1 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,puVar2);
    _objc_release(puVar2);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),lVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f5f4e0; end: 107f5f97f; -[SCMemoriesSyncThumbnailFileGeneratingImpl generateMiniThumbnailFromLowresData:lowResMedia:] */

void FUN_107f5f4e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_107f5ef60;
  uStack_70 = 0x107f5ef70;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_107f5ef60;
  uStack_a0 = 0x107f5ef70;
  uStack_98 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x2020000000;
  uStack_c8 = 0;
  uVar1 = 0;
  _dispatch_semaphore_create();
  uVar9 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  uVar3 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  func_0x00010c135a60(uVar9);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  lVar4 = puStack_88[5];
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    lVar4 = puStack_b8[5];
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      if (*(char *)(puStack_d8 + 3) == '\x01') {
        lVar5 = *(long *)(param_1 + 0x10);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        func_0x00010c0bc420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        if (lVar4 == 0) goto LAB_107f5f888;
        uVar3 = puStack_88[5];
        lVar5 = lVar4;
        func_0x00010bf93ec0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010c0646e0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156c60();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = puStack_88[5];
        puStack_88[5] = uVar3;
        _objc_release(uVar9);
        _objc_release(lVar6);
        _objc_release(lVar5);
        uVar3 = puStack_b8[5];
        lVar5 = lVar4;
        func_0x00010bf93ec0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010c0646e0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156c60();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = puStack_b8[5];
        puStack_b8[5] = uVar3;
        _objc_release(uVar9);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
      }
      lVar4 = param_4;
      func_0x00010c156c60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x00010b6865cc(lVar4,1);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c0d3c80();
        _objc_release(lVar5);
        lVar5 = lVar6;
        func_0x00010bf529e0();
        if (lVar5 == 0) {
          uVar3 = 0;
        }
        else {
          lVar5 = lVar6;
          func_0x00010bfb1920(lVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar5;
          func_0x00010bf51e00();
          lVar8 = lVar7;
          func_0x00010b686308();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          _objc_release(lVar5);
          uVar3 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar3;
          func_0x00010bfbfb40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          lVar5 = puStack_88[5];
          func_0x00010c08fa60();
          uVar3 = uVar9;
          if (lVar5 == 0) {
LAB_107f5f904:
            _objc_retain(uVar9);
          }
          else {
            lVar5 = puStack_b8[5];
            func_0x00010c08fa60();
            if (lVar5 == 0) goto LAB_107f5f904;
            func_0x00010c156ce0(uVar9);
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(uVar9);
          _objc_release(lVar8);
        }
        _objc_release(lVar6);
        _objc_release(lVar4);
        goto LAB_107f5f88c;
      }
    }
  }
LAB_107f5f888:
  uVar3 = 0;
LAB_107f5f88c:
  _objc_release(uVar1);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_e0,8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107f5f980; end: 107f5fa23;  */

void FUN_107f5f980(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010bdc1800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010c0719c0();
  _objc_release(param_2);
  *(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107f5fa24; end: 107f5fb2f; -[SCMemoriesSyncThumbnailFileGeneratingImpl generateMiniThumbnailFromLowresMediaData:memoriesSnap:] */

void FUN_107f5fa24(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010bfbd760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010bfbfb80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_4;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    lVar1 = lVar2;
    func_0x000108020568(lVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010bfbfba0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107f5fb30; end: 107f5fbeb; -[SCMemoriesSyncThumbnailFileGeneratingImpl generateMiniThumbnailFromLowresMediaData:snapDoc:] */

void FUN_107f5fb30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x40);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bfc51a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar2);
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010be1b6a0(param_1,param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107f5fbec; end: 107f5fdcf; -[SCMemoriesSyncThumbnailFileGeneratingImpl _renderedLowResMediaDataFromThumbnailData:encryptionInfo:requestUnencryptedOutput:] */

void FUN_107f5fbec(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined1 *param_6,int param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 **ppuVar8;
  undefined1 *puVar9;
  undefined1 *puStack_70;
  long lStack_68;
  
  ppuVar8 = &puStack_70;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_5;
  puVar9 = param_6;
  _objc_retain(param_6);
  if (param_5 == (undefined1 *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x00010b686308();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c23d0a0(param_5);
    puVar1 = param_5;
    func_0x00010c14e6c0(0x4070e00000000000,(double)(float)(int)((270.0 / param_1) * param_2),
                        0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined1 *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar1;
      _UIImageJPEGRepresentation(0x3fe0000000000000);
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined1 *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar9 = (undefined1 *)0x1;
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar2;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar7;
        func_0x00010b6867c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar7 = puVar3;
        if (param_7 == 0) {
          puVar4 = param_6;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = param_6;
          func_0x00010c085300();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          puVar9 = puVar5;
          func_0x00010c156ce0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        else {
          _objc_retain(puVar3);
          puVar6 = (undefined1 *)ppuVar8;
        }
        _objc_release(puVar3);
      }
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
    _objc_release(param_5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    if (puVar6 == (undefined1 *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar6);
      puVar1 = puVar9;
      func_0x00010c086560(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010c085300(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c156c60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (puVar4 == (undefined1 *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar6 = puVar4;
        func_0x00010b6865cc(puVar4,1);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar6;
        func_0x00010c0d3c80();
        _objc_release(puVar6);
        puVar6 = puVar1;
        func_0x00010bf529e0();
        if (puVar6 == (undefined1 *)0x0) {
          puVar7 = (undefined *)0x0;
        }
        else {
          puVar6 = puVar1;
          func_0x00010bfb1920(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar6;
          func_0x00010bf51e00();
          puVar5 = puVar2;
          func_0x00010b686308();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_release(puVar6);
          puVar7 = *(undefined **)(param_6 + 0x28);
          func_0x00010c269d40(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar7;
          func_0x00010bfbfb40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          puVar6 = puVar9;
          func_0x00010c086560(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar9;
          func_0x00010c085300(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010c156ce0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_release(puVar6);
          _objc_release(puVar3);
          _objc_release(puVar5);
        }
        _objc_release(puVar1);
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107f5fdd0; end: 107f5ffb7; -[SCMemoriesSyncThumbnailFileGeneratingImpl _generateMiniThumbnailDataFromLowresMediaData:encryptionInfo:] */

void FUN_107f5fdd0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar7 = param_4;
    func_0x00010c086560(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    func_0x00010c085300(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c156c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(uVar7);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x00010b6865cc(lVar2,1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0d3c80();
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010bf529e0();
      if (lVar3 == 0) {
        uVar7 = 0;
      }
      else {
        lVar3 = lVar4;
        func_0x00010bfb1920(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010bf51e00();
        lVar6 = lVar5;
        func_0x00010b686308();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar3);
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar7;
        func_0x00010bfbfb40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        uVar8 = param_4;
        func_0x00010c086560(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = param_4;
        func_0x00010c085300(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar1;
        func_0x00010c156ce0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar1);
        _objc_release(lVar6);
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 107f5ffb8; end: 107f6002f; -[SCMemoriesSyncThumbnailFileGeneratingImpl .cxx_destruct] */

void FUN_107f5ffb8(long param_1)

{
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



/* Entry: 107f60030; end: 107f6003b; -[SCMemoriesSyncThumbnailGeneratorServices .cxx_destruct] */

void FUN_107f60030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f6003c; end: 107f60043; -[SCMemoriesBackupService memPlatBackupService] */

undefined8 FUN_107f6003c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f60044; end: 107f60073; -[SCMemoriesBackupService .cxx_destruct] */

void FUN_107f60044(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f60074; end: 107f600df; +[SCMemoriesBackupSnapBackupEvents didUploadMediaIdWithMediaId:] */

void FUN_107f60074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d82b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f600e0; end: 107f60153; +[SCMemoriesBackupSnapBackupEvents updateBackupProgressWithEntryId:progress:] */

void FUN_107f600e0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d82b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  _objc_release(uVar3);
  *(undefined4 *)(puVar2 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f60154; end: 107f60177; -[SCMemoriesBackupSnapBackupEvents copyWithZone:] */

undefined8 FUN_107f60154(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f60178; end: 107f6021b; -[SCMemoriesBackupSnapBackupEvents hash] */

void FUN_107f60178(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar4 = (ulong)*(uint *)(param_1 + 0x18) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_38 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126fbcb8;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f6021c; end: 107f6025f; -[SCMemoriesBackupSnapBackupEvents internalInit] */

void FUN_107f6021c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fbcb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f60260; end: 107f60347; -[SCMemoriesBackupSnapBackupEvents isEqual:] */

long FUN_107f60260(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107f60320:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f6032c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      fVar6 = ABS(*(float *)(param_1 + 0x18) - *(float *)(param_3 + 0x18));
      fVar5 = ABS(*(float *)(param_1 + 0x18) + *(float *)(param_3 + 0x18)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_107f6032c;
        }
        goto LAB_107f60320;
      }
    }
    lVar4 = 0;
  }
LAB_107f6032c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107f60348; end: 107f603d3; -[SCMemoriesBackupSnapBackupEvents matchUpdateBackupProgress:didUploadMediaId:] */

void FUN_107f60348(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (*(undefined4 *)(param_1 + 0x18),param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f603d4; end: 107f60403; -[SCMemoriesBackupSnapBackupEvents .cxx_destruct] */

void FUN_107f603d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


