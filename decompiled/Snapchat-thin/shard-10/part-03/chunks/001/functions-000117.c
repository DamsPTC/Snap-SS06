/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f5b334; end: 107f5b363; -[SCCloudSyncSnapTranscodingOutput .cxx_destruct] */

void FUN_107f5b334(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5b364; end: 107f5b40f; -[SCCloudSyncCommonProps initWithSnapIdToSnapFileAttributesMap:snapIdToRenderedLowresMediaDatasMap:] */

undefined1 *
FUN_107f5b364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbc00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5b410; end: 107f5b433; -[SCCloudSyncCommonProps copyWithZone:] */

undefined8 FUN_107f5b410(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5b434; end: 107f5b43b; -[SCCloudSyncCommonProps snapIdToSnapFileAttributesMap] */

undefined8 FUN_107f5b434(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f5b43c; end: 107f5b443; -[SCCloudSyncCommonProps snapIdToRenderedLowresMediaDatasMap] */

undefined8 FUN_107f5b43c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5b444; end: 107f5b473; -[SCCloudSyncCommonProps .cxx_destruct] */

void FUN_107f5b444(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5b474; end: 107f5b527; -[SCCloudSyncCUPSUploadResult initWithAssetId:assetType:contentURL:] */

undefined1 *
FUN_107f5b474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fbc08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5b528; end: 107f5b54b; -[SCCloudSyncCUPSUploadResult copyWithZone:] */

undefined8 FUN_107f5b528(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5b54c; end: 107f5b553; -[SCCloudSyncCUPSUploadResult assetId] */

undefined8 FUN_107f5b54c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5b554; end: 107f5b55b; -[SCCloudSyncCUPSUploadResult assetType] */

undefined4 FUN_107f5b554(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107f5b55c; end: 107f5b563; -[SCCloudSyncCUPSUploadResult contentURL] */

undefined8 FUN_107f5b55c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f5b564; end: 107f5b593; -[SCCloudSyncCUPSUploadResult .cxx_destruct] */

void FUN_107f5b564(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f5b594; end: 107f5b7f3; -[SCCloudSyncCreateOrExtendEntryStepData initWithAddSnapEntities:backgroundUploadedSnapIds:entryData:uploadSchedule:mediaTranscodingResult:commonProps:addSnapsResult:uploadInfoList:entryInfoDict:dedupeSnapsResult:updateEntryOperationData:analytics:] */

undefined8 *
FUN_107f5b594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126fbc10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    puVar1[4] = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107f5b7f4; end: 107f5b817; -[SCCloudSyncCreateOrExtendEntryStepData copyWithZone:] */

undefined8 FUN_107f5b7f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5b818; end: 107f5b81f; -[SCCloudSyncCreateOrExtendEntryStepData addSnapEntities] */

undefined8 FUN_107f5b818(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f5b820; end: 107f5b827; -[SCCloudSyncCreateOrExtendEntryStepData backgroundUploadedSnapIds] */

undefined8 FUN_107f5b820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5b828; end: 107f5b82f; -[SCCloudSyncCreateOrExtendEntryStepData entryData] */

undefined8 FUN_107f5b828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f5b830; end: 107f5b837; -[SCCloudSyncCreateOrExtendEntryStepData uploadSchedule] */

undefined8 FUN_107f5b830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f5b838; end: 107f5b83f; -[SCCloudSyncCreateOrExtendEntryStepData mediaTranscodingResult] */

undefined8 FUN_107f5b838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f5b840; end: 107f5b847; -[SCCloudSyncCreateOrExtendEntryStepData commonProps] */

undefined8 FUN_107f5b840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107f5b848; end: 107f5b84f; -[SCCloudSyncCreateOrExtendEntryStepData addSnapsResult] */

undefined8 FUN_107f5b848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107f5b850; end: 107f5b857; -[SCCloudSyncCreateOrExtendEntryStepData uploadInfoList] */

undefined8 FUN_107f5b850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107f5b858; end: 107f5b85f; -[SCCloudSyncCreateOrExtendEntryStepData entryInfoDict] */

undefined8 FUN_107f5b858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107f5b860; end: 107f5b867; -[SCCloudSyncCreateOrExtendEntryStepData dedupeSnapsResult] */

undefined8 FUN_107f5b860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107f5b868; end: 107f5b86f; -[SCCloudSyncCreateOrExtendEntryStepData updateEntryOperationData] */

undefined8 FUN_107f5b868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107f5b870; end: 107f5b877; -[SCCloudSyncCreateOrExtendEntryStepData analytics] */

undefined8 FUN_107f5b870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107f5b878; end: 107f5b913; -[SCCloudSyncCreateOrExtendEntryStepData .cxx_destruct] */

void FUN_107f5b878(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5b914; end: 107f5b92f; +[SCCloudSyncCreateOrExtendEntryStepDataBuilder cloudSyncCreateOrExtendEntryStepData] */

void FUN_107f5b914(void)

{
  _objc_alloc_init(PTR_PTR_1126d8358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f5b930; end: 107f5bc7f; +[SCCloudSyncCreateOrExtendEntryStepDataBuilder cloudSyncCreateOrExtendEntryStepDataFromExistingCloudSyncCreateOrExtendEntryStepData:] */

void FUN_107f5b930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  
  puVar1 = PTR_PTR_1126d8358;
  _objc_retain(param_3);
  func_0x00010bf3e400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010befb600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2a7ec0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf147c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2a90e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf97120();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2ad3e0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c28e600(param_3);
  puVar9 = puVar7;
  func_0x00010c2bc1c0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0c6c00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2b3ae0(puVar9,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf42aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2aaac0(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010befb7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2a7f00(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c28e000(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c2bc140(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010bf97280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c2ad460(puVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bf67b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010c2abe40(puVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c2859a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010c2bc080(puVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_3;
  func_0x00010bf024c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar24 = puVar22;
  func_0x00010c2a82c0(puVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release(uVar21);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar24);
  return;
}



/* Entry: 107f5bc80; end: 107f5bcd3; -[SCCloudSyncCreateOrExtendEntryStepDataBuilder build] */

void FUN_107f5bc80(void)

{
  _objc_alloc(PTR_PTR_1126d85b0);
  func_0x00010bff2360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f5bcd4; end: 107f5bd0b; -[SCCloudSyncCreateOrExtendEntryStepDataBuilder withAddSnapEntities:] */

long FUN_107f5bcd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5bd0c; end: 107f5bd43; -[SCCloudSyncCreateOrExtendEntryStepDataBuilder withBackgroundUploadedSnapIds:] */

long FUN_107f5bd0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5bd44; end: 107f5bd7b; -[SCCloudSyncCreateOrExtendEntryStepDataBuilder withEntryData:] */

long FUN_107f5bd44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5bd7c; end: 107f5bd83; -[SCCloudSyncCreateOrExtendEntryStepDataBuilder withUploadSchedule:] */

void FUN_107f5bd7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107f5bd84; end: 107f5bdbb; -[SCCloudSyncCreateOrExtendEntryStepDataBuilder withMediaTranscodingResult:] */

long FUN_107f5bd84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5bdbc; end: 107f5bdf3; -[SCCloudSyncCreateOrExtendEntryStepDataBuilder withCommonProps:] */

long FUN_107f5bdbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5bdf4; end: 107f5be2b; -[SCCloudSyncCreateOrExtendEntryStepDataBuilder withAddSnapsResult:] */

long FUN_107f5bdf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5be2c; end: 107f5be63; -[SCCloudSyncCreateOrExtendEntryStepDataBuilder withUploadInfoList:] */

long FUN_107f5be2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5be64; end: 107f5be9b; -[SCCloudSyncCreateOrExtendEntryStepDataBuilder withEntryInfoDict:] */

long FUN_107f5be64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5be9c; end: 107f5bed3; -[SCCloudSyncCreateOrExtendEntryStepDataBuilder withDedupeSnapsResult:] */

long FUN_107f5be9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5bed4; end: 107f5bf0b; -[SCCloudSyncCreateOrExtendEntryStepDataBuilder withUpdateEntryOperationData:] */

long FUN_107f5bed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5bf0c; end: 107f5bf43; -[SCCloudSyncCreateOrExtendEntryStepDataBuilder withAnalytics:] */

long FUN_107f5bf0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5bf44; end: 107f5bfdf; -[SCCloudSyncCreateOrExtendEntryStepDataBuilder .cxx_destruct] */

void FUN_107f5bf44(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5bfe0; end: 107f5c04b; +[SCCloudSyncUpdateEntriesResult networkFailureWithError:] */

void FUN_107f5bfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8550;
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



/* Entry: 107f5c04c; end: 107f5c0ff; +[SCCloudSyncUpdateEntriesResult serverFailureWithServiceStatusCodeEnum:entries:backoffTimeValueMs:debugInfo:] */

void FUN_107f5c04c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d8550;
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



/* Entry: 107f5c100; end: 107f5c16b; +[SCCloudSyncUpdateEntriesResult snapDocFailureWithError:] */

void FUN_107f5c100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8550;
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



/* Entry: 107f5c16c; end: 107f5c1cf; +[SCCloudSyncUpdateEntriesResult successWithEntryInfoDict:] */

void FUN_107f5c16c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8550;
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



/* Entry: 107f5c1d0; end: 107f5c1f3; -[SCCloudSyncUpdateEntriesResult copyWithZone:] */

undefined8 FUN_107f5c1d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5c1f4; end: 107f5c237; -[SCCloudSyncUpdateEntriesResult internalInit] */

void FUN_107f5c1f4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fbc18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f5c238; end: 107f5c333; -[SCCloudSyncUpdateEntriesResult matchSuccess:serverFailure:networkFailure:snapDocFailure:] */

void FUN_107f5c238(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
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
      goto LAB_107f5c304;
    }
    if (param_3 == 0) goto LAB_107f5c304;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  else if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_107f5c304;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if ((lVar2 != 3) || (param_6 == 0)) goto LAB_107f5c304;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_6;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_107f5c304:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f5c334; end: 107f5c387; -[SCCloudSyncUpdateEntriesResult .cxx_destruct] */

void FUN_107f5c334(long param_1)

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



/* Entry: 107f5c388; end: 107f5c43b; -[SCCloudSyncEntryData initWithEntryId:title:isPrivate:] */

undefined1 *
FUN_107f5c388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbc20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5c43c; end: 107f5c45f; -[SCCloudSyncEntryData copyWithZone:] */

undefined8 FUN_107f5c43c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5c460; end: 107f5c467; -[SCCloudSyncEntryData entryId] */

undefined8 FUN_107f5c460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5c468; end: 107f5c46f; -[SCCloudSyncEntryData title] */

undefined8 FUN_107f5c468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f5c470; end: 107f5c477; -[SCCloudSyncEntryData isPrivate] */

undefined1 FUN_107f5c470(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107f5c478; end: 107f5c4a7; -[SCCloudSyncEntryData .cxx_destruct] */

void FUN_107f5c478(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f5c4a8; end: 107f5c553; -[SCCloudSyncStepOrchestratorResult initWithStepResult:stepCompletionLatenciesMs:] */

undefined1 *
FUN_107f5c4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbc28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5c554; end: 107f5c577; -[SCCloudSyncStepOrchestratorResult copyWithZone:] */

undefined8 FUN_107f5c554(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5c578; end: 107f5c57f; -[SCCloudSyncStepOrchestratorResult stepResult] */

undefined8 FUN_107f5c578(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f5c580; end: 107f5c587; -[SCCloudSyncStepOrchestratorResult stepCompletionLatenciesMs] */

undefined8 FUN_107f5c580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5c588; end: 107f5c5b7; -[SCCloudSyncStepOrchestratorResult .cxx_destruct] */

void FUN_107f5c588(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5c5b8; end: 107f5c68f; -[SCCloudSyncUploadRequestInfo initWithUploadUrl:directDownloadUrl:uploadHeaders:] */

undefined1 *
FUN_107f5c5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fbc30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5c690; end: 107f5c6b3; -[SCCloudSyncUploadRequestInfo copyWithZone:] */

undefined8 FUN_107f5c690(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5c6b4; end: 107f5c6bb; -[SCCloudSyncUploadRequestInfo uploadUrl] */

undefined8 FUN_107f5c6b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f5c6bc; end: 107f5c6c3; -[SCCloudSyncUploadRequestInfo directDownloadUrl] */

undefined8 FUN_107f5c6bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5c6c4; end: 107f5c6cb; -[SCCloudSyncUploadRequestInfo uploadHeaders] */

undefined8 FUN_107f5c6c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f5c6cc; end: 107f5c707; -[SCCloudSyncUploadRequestInfo .cxx_destruct] */

void FUN_107f5c6cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5c708; end: 107f5c81b; -[SCCloudSyncGenericAssetUploadRequestInfo initWithAssetId:assetType:uploadHeaders:uploadUrl:downloadUrl:] */

undefined1 *
FUN_107f5c708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fbc38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5c81c; end: 107f5c83f; -[SCCloudSyncGenericAssetUploadRequestInfo copyWithZone:] */

undefined8 FUN_107f5c81c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5c840; end: 107f5c847; -[SCCloudSyncGenericAssetUploadRequestInfo assetId] */

undefined8 FUN_107f5c840(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f5c848; end: 107f5c84f; -[SCCloudSyncGenericAssetUploadRequestInfo assetType] */

undefined8 FUN_107f5c848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5c850; end: 107f5c857; -[SCCloudSyncGenericAssetUploadRequestInfo uploadHeaders] */

undefined8 FUN_107f5c850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f5c858; end: 107f5c85f; -[SCCloudSyncGenericAssetUploadRequestInfo uploadUrl] */

undefined8 FUN_107f5c858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f5c860; end: 107f5c867; -[SCCloudSyncGenericAssetUploadRequestInfo downloadUrl] */

undefined8 FUN_107f5c860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f5c868; end: 107f5c8af; -[SCCloudSyncGenericAssetUploadRequestInfo .cxx_destruct] */

void FUN_107f5c868(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5c8b0; end: 107f5c9c3; -[SCCloudSyncSnapUploadRequestInfo initWithMediaUploadRequestInfo:overlayUploadRequestInfo:thumbnailUploadRequestInfo:genericAssets:isMediaUploadedLegacySojuServerField:] */

undefined1 *
FUN_107f5c8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fbc40;
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



/* Entry: 107f5c9c4; end: 107f5c9e7; -[SCCloudSyncSnapUploadRequestInfo copyWithZone:] */

undefined8 FUN_107f5c9c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5c9e8; end: 107f5c9ef; -[SCCloudSyncSnapUploadRequestInfo mediaUploadRequestInfo] */

undefined8 FUN_107f5c9e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5c9f0; end: 107f5c9f7; -[SCCloudSyncSnapUploadRequestInfo overlayUploadRequestInfo] */

undefined8 FUN_107f5c9f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f5c9f8; end: 107f5c9ff; -[SCCloudSyncSnapUploadRequestInfo thumbnailUploadRequestInfo] */

undefined8 FUN_107f5c9f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f5ca00; end: 107f5ca07; -[SCCloudSyncSnapUploadRequestInfo genericAssets] */

undefined8 FUN_107f5ca00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f5ca08; end: 107f5ca0f; -[SCCloudSyncSnapUploadRequestInfo isMediaUploadedLegacySojuServerField] */

undefined1 FUN_107f5ca08(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107f5ca10; end: 107f5ca57; -[SCCloudSyncSnapUploadRequestInfo .cxx_destruct] */

void FUN_107f5ca10(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f5ca58; end: 107f5cb03; -[SCCloudSyncLocalFileAttributes initWithMd5Hash:fileSizeInBytes:] */

undefined1 *
FUN_107f5ca58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbc48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5cb04; end: 107f5cb27; -[SCCloudSyncLocalFileAttributes copyWithZone:] */

undefined8 FUN_107f5cb04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5cb28; end: 107f5cb2f; -[SCCloudSyncLocalFileAttributes md5Hash] */

undefined8 FUN_107f5cb28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f5cb30; end: 107f5cb37; -[SCCloudSyncLocalFileAttributes fileSizeInBytes] */

undefined8 FUN_107f5cb30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5cb38; end: 107f5cb67; -[SCCloudSyncLocalFileAttributes .cxx_destruct] */

void FUN_107f5cb38(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5cb68; end: 107f5cc73; -[SCCloudSyncSnapLocalFileAttributes initWithBaseMediaAttributes:thumbnailAttributes:overlayAttributes:assetIdToAttributesMap:] */

undefined1 *
FUN_107f5cb68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fbc50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5cc74; end: 107f5cc97; -[SCCloudSyncSnapLocalFileAttributes copyWithZone:] */

undefined8 FUN_107f5cc74(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5cc98; end: 107f5cc9f; -[SCCloudSyncSnapLocalFileAttributes baseMediaAttributes] */

undefined8 FUN_107f5cc98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f5cca0; end: 107f5cca7; -[SCCloudSyncSnapLocalFileAttributes thumbnailAttributes] */

undefined8 FUN_107f5cca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5cca8; end: 107f5ccaf; -[SCCloudSyncSnapLocalFileAttributes overlayAttributes] */

undefined8 FUN_107f5cca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f5ccb0; end: 107f5ccb7; -[SCCloudSyncSnapLocalFileAttributes assetIdToAttributesMap] */

undefined8 FUN_107f5ccb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f5ccb8; end: 107f5ccff; -[SCCloudSyncSnapLocalFileAttributes .cxx_destruct] */

void FUN_107f5ccb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5cd00; end: 107f5ce0b; -[SCCloudSyncSnapDocBasedEntryCleanupContext initWithAddedSnaps:deletedSnaps:addedEntryAssets:deletedEntryAssets:] */

undefined1 *
FUN_107f5cd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fbc58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5ce0c; end: 107f5ce2f; -[SCCloudSyncSnapDocBasedEntryCleanupContext copyWithZone:] */

undefined8 FUN_107f5ce0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5ce30; end: 107f5ce37; -[SCCloudSyncSnapDocBasedEntryCleanupContext addedSnaps] */

undefined8 FUN_107f5ce30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f5ce38; end: 107f5ce3f; -[SCCloudSyncSnapDocBasedEntryCleanupContext deletedSnaps] */

undefined8 FUN_107f5ce38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


