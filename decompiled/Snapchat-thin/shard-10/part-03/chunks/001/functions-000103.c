/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ef43ec; end: 107ef43f3; -[SCCloudUpdateEntrySnapshot title] */

undefined8 FUN_107ef43ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107ef43f4; end: 107ef43fb; -[SCCloudUpdateEntrySnapshot deletedSnapId] */

undefined8 FUN_107ef43f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107ef43fc; end: 107ef4403; -[SCCloudUpdateEntrySnapshot snapPlaceholder] */

undefined8 FUN_107ef43fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107ef4404; end: 107ef440b; -[SCCloudUpdateEntrySnapshot detailPlaceholder] */

undefined8 FUN_107ef4404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107ef440c; end: 107ef4413; -[SCCloudUpdateEntrySnapshot miniThumbnailPlaceholder] */

undefined8 FUN_107ef440c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107ef4414; end: 107ef441b; -[SCCloudUpdateEntrySnapshot dataVaultEncryption] */

undefined8 FUN_107ef4414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107ef441c; end: 107ef4423; -[SCCloudUpdateEntrySnapshot updatedSnapsOrder] */

undefined8 FUN_107ef441c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107ef4424; end: 107ef442b; -[SCCloudUpdateEntrySnapshot userContext] */

undefined8 FUN_107ef4424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107ef442c; end: 107ef4433; -[SCCloudUpdateEntrySnapshot requiresSyncStatusUpdate] */

undefined1 FUN_107ef442c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107ef4434; end: 107ef443b; -[SCCloudUpdateEntrySnapshot deleteSharedSnapForAll] */

undefined1 FUN_107ef4434(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107ef443c; end: 107ef44cb; -[SCCloudUpdateEntrySnapshot .cxx_destruct] */

void FUN_107ef443c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107ef44cc; end: 107ef4713; +[SCCloudUpdateEntrySnapshotBuilder withCloudUpdateEntrySnapshot:] */

void FUN_107ef44cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d8448;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf6cfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c242480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar1 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf6f600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0ce240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x38);
  *(undefined8 *)(puVar1 + 0x38) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf64980();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x40);
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c28d5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x48);
  *(undefined8 *)(puVar1 + 0x48) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2917c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x50);
  *(undefined8 *)(puVar1 + 0x50) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c137b40();
  puVar1[0x58] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010bf6c7c0();
  _objc_release(param_3);
  puVar1[0x59] = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ef4714; end: 107ef476b; -[SCCloudUpdateEntrySnapshotBuilder build] */

void FUN_107ef4714(void)

{
  _objc_alloc(PTR_PTR_1126d8340);
  func_0x00010c03ab40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ef476c; end: 107ef47a3; -[SCCloudUpdateEntrySnapshotBuilder setProfile:] */

long FUN_107ef476c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef47a4; end: 107ef47db; -[SCCloudUpdateEntrySnapshotBuilder setEntryId:] */

long FUN_107ef47a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef47dc; end: 107ef4813; -[SCCloudUpdateEntrySnapshotBuilder setTitle:] */

long FUN_107ef47dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef4814; end: 107ef484b; -[SCCloudUpdateEntrySnapshotBuilder setDeletedSnapId:] */

long FUN_107ef4814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef484c; end: 107ef4883; -[SCCloudUpdateEntrySnapshotBuilder setSnapPlaceholder:] */

long FUN_107ef484c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef4884; end: 107ef48bb; -[SCCloudUpdateEntrySnapshotBuilder setDetailPlaceholder:] */

long FUN_107ef4884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef48bc; end: 107ef48f3; -[SCCloudUpdateEntrySnapshotBuilder setMiniThumbnailPlaceholder:] */

long FUN_107ef48bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef48f4; end: 107ef492b; -[SCCloudUpdateEntrySnapshotBuilder setDataVaultEncryption:] */

long FUN_107ef48f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef492c; end: 107ef4963; -[SCCloudUpdateEntrySnapshotBuilder setUpdatedSnapsOrder:] */

long FUN_107ef492c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef4964; end: 107ef499b; -[SCCloudUpdateEntrySnapshotBuilder setUserContext:] */

long FUN_107ef4964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef499c; end: 107ef49a3; -[SCCloudUpdateEntrySnapshotBuilder setRequiresSyncStatusUpdate:] */

void FUN_107ef499c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 107ef49a4; end: 107ef49ab; -[SCCloudUpdateEntrySnapshotBuilder setDeleteSharedSnapForAll:] */

void FUN_107ef49a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x59) = param_3;
  return;
}



/* Entry: 107ef49ac; end: 107ef4a3b; -[SCCloudUpdateEntrySnapshotBuilder .cxx_destruct] */

void FUN_107ef49ac(long param_1)

{
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



/* Entry: 107ef4a3c; end: 107ef4b83; -[SCCloudUpdatePrivateEntriesSnapshot initWithProfile:entryId:addSnapEntities:isPrivate:dataVaultEncryption:userContext:] */

undefined1 *
FUN_107ef4a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fba08;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 8) = param_6;
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ef4b84; end: 107ef4ba7; -[SCCloudUpdatePrivateEntriesSnapshot copyWithZone:] */

undefined8 FUN_107ef4b84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ef4ba8; end: 107ef4ce3; -[SCCloudUpdatePrivateEntriesSnapshot initWithCoder:] */

undefined1 * FUN_107ef4ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fba08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ef4ce4; end: 107ef4d93; -[SCCloudUpdatePrivateEntriesSnapshot encodeWithCoder:] */

void FUN_107ef4ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110db7358);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e09cd8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ec3cb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110ec3cd8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ec3ab8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ec3ad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ef4d94; end: 107ef4d9b; -[SCCloudUpdatePrivateEntriesSnapshot preferFasterCoding] */

undefined8 FUN_107ef4d94(void)

{
  return 1;
}



/* Entry: 107ef4d9c; end: 107ef4e1b; -[SCCloudUpdatePrivateEntriesSnapshot encodeWithFasterCoder:] */

void FUN_107ef4d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ef4e1c; end: 107ef4efb; -[SCCloudUpdatePrivateEntriesSnapshot decodeWithFasterDecoder:] */

void FUN_107ef4e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 8) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ef4efc; end: 107ef4ffb; -[SCCloudUpdatePrivateEntriesSnapshot setObject:forUInt64Key:] */

void FUN_107ef4efc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0xbea73cae45f568) {
    if (param_4 == 0x167a394c4e46d5) {
      lVar2 = 0x28;
    }
    else {
      if (param_4 != 0x6fe87c9e604402) goto LAB_107ef4fe8;
      lVar2 = 0x18;
    }
  }
  else if (param_4 == 0xbea73cae45f568) {
    lVar2 = 0x10;
  }
  else if (param_4 == 0xc154420b433d46) {
    lVar2 = 0x20;
  }
  else {
    if (param_4 != 0xd5da843e5f33a2) goto LAB_107ef4fe8;
    lVar2 = 0x30;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_107ef4fe8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ef4ffc; end: 107ef501b; -[SCCloudUpdatePrivateEntriesSnapshot setBool:forUInt64Key:] */

void FUN_107ef4ffc(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  if (param_4 == 0xd141eebda611d3) {
    *(undefined1 *)(param_1 + 8) = param_3;
  }
  return;
}



/* Entry: 107ef501c; end: 107ef502f; +[SCCloudUpdatePrivateEntriesSnapshot fasterCodingVersion] */

undefined8 FUN_107ef501c(void)

{
  return 0x266eeda371c10fd5;
}



/* Entry: 107ef5030; end: 107ef503b; +[SCCloudUpdatePrivateEntriesSnapshot fasterCodingKeys] */

undefined8 FUN_107ef5030(void)

{
  return 0x11324bc20;
}



/* Entry: 107ef503c; end: 107ef50ab; -[SCCloudUpdatePrivateEntriesSnapshot isEqual:] */

bool FUN_107ef503c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bc85c34(param_1,param_3,0x113728428,0x113728430,6,5);
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_3 + 8) == *(char *)(param_1 + 8);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107ef50ac; end: 107ef517b; -[SCCloudUpdatePrivateEntriesSnapshot hash] */

ulong FUN_107ef50ac(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong auStack_58 [6];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bfde980(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  auStack_58[1] = uVar2;
  func_0x00010bfde980();
  auStack_58[3] = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  auStack_58[2] = uVar3;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x30);
  auStack_58[4] = uVar2;
  func_0x00010bfde980();
  auStack_58[5] = lVar4;
  lVar5 = 8;
  do {
    uVar1 = *(ulong *)((long)auStack_58 + lVar5) | uVar1 << 0x20;
    uVar1 = ~uVar1 + uVar1 * 0x40000;
    uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
    uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
    uVar1 = uVar1 ^ uVar1 >> 0x16;
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar1;
  }
  ___stack_chk_fail();
  return *(ulong *)(lVar4 + 0x10);
}



/* Entry: 107ef517c; end: 107ef5183; -[SCCloudUpdatePrivateEntriesSnapshot profile] */

undefined8 FUN_107ef517c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ef5184; end: 107ef518b; -[SCCloudUpdatePrivateEntriesSnapshot entryId] */

undefined8 FUN_107ef5184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ef518c; end: 107ef5193; -[SCCloudUpdatePrivateEntriesSnapshot addSnapEntities] */

undefined8 FUN_107ef518c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107ef5194; end: 107ef519b; -[SCCloudUpdatePrivateEntriesSnapshot isPrivate] */

undefined1 FUN_107ef5194(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107ef519c; end: 107ef51a3; -[SCCloudUpdatePrivateEntriesSnapshot dataVaultEncryption] */

undefined8 FUN_107ef519c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107ef51a4; end: 107ef51ab; -[SCCloudUpdatePrivateEntriesSnapshot userContext] */

undefined8 FUN_107ef51a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107ef51ac; end: 107ef51ff; -[SCCloudUpdatePrivateEntriesSnapshot .cxx_destruct] */

void FUN_107ef51ac(long param_1)

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



/* Entry: 107ef5200; end: 107ef534b; +[SCCloudUpdatePrivateEntriesSnapshotBuilder withCloudUpdatePrivateEntriesSnapshot:] */

void FUN_107ef5200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d8450;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010befb600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c07b240();
  puVar1[0x20] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010bf64980();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar1 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2917c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ef534c; end: 107ef5387; -[SCCloudUpdatePrivateEntriesSnapshotBuilder build] */

void FUN_107ef534c(void)

{
  _objc_alloc(PTR_PTR_1126d8360);
  func_0x00010c03aac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ef5388; end: 107ef53bf; -[SCCloudUpdatePrivateEntriesSnapshotBuilder setProfile:] */

long FUN_107ef5388(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef53c0; end: 107ef53f7; -[SCCloudUpdatePrivateEntriesSnapshotBuilder setEntryId:] */

long FUN_107ef53c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef53f8; end: 107ef542f; -[SCCloudUpdatePrivateEntriesSnapshotBuilder setAddSnapEntities:] */

long FUN_107ef53f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef5430; end: 107ef5437; -[SCCloudUpdatePrivateEntriesSnapshotBuilder setIsPrivate:] */

void FUN_107ef5430(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107ef5438; end: 107ef546f; -[SCCloudUpdatePrivateEntriesSnapshotBuilder setDataVaultEncryption:] */

long FUN_107ef5438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef5470; end: 107ef54a7; -[SCCloudUpdatePrivateEntriesSnapshotBuilder setUserContext:] */

long FUN_107ef5470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef54a8; end: 107ef54fb; -[SCCloudUpdatePrivateEntriesSnapshotBuilder .cxx_destruct] */

void FUN_107ef54a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ef54fc; end: 107ef5607; -[SCCloudUploadOptionalMediaSnapshot initWithProfile:snapPlaceholder:detailPlaceholder:userContext:] */

undefined1 *
FUN_107ef54fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fba10;
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



/* Entry: 107ef5608; end: 107ef562b; -[SCCloudUploadOptionalMediaSnapshot copyWithZone:] */

undefined8 FUN_107ef5608(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ef562c; end: 107ef572b; -[SCCloudUploadOptionalMediaSnapshot initWithCoder:] */

undefined1 * FUN_107ef562c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fba10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ef572c; end: 107ef57b3; -[SCCloudUploadOptionalMediaSnapshot encodeWithCoder:] */

void FUN_107ef572c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110db7358);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ec3a38);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ec3a58);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ec3ad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ef57b4; end: 107ef57bb; -[SCCloudUploadOptionalMediaSnapshot preferFasterCoding] */

undefined8 FUN_107ef57b4(void)

{
  return 1;
}



/* Entry: 107ef57bc; end: 107ef5823; -[SCCloudUploadOptionalMediaSnapshot encodeWithFasterCoder:] */

void FUN_107ef57bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ef5824; end: 107ef58d7; -[SCCloudUploadOptionalMediaSnapshot decodeWithFasterDecoder:] */

void FUN_107ef5824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ef58d8; end: 107ef59b7; -[SCCloudUploadOptionalMediaSnapshot setObject:forUInt64Key:] */

void FUN_107ef58d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0xd8cbb78ae60655) {
    if (param_4 == 0xbea73cae45f568) {
      lVar2 = 8;
    }
    else {
      if (param_4 != 0xd5da843e5f33a2) goto LAB_107ef59a4;
      lVar2 = 0x20;
    }
  }
  else if (param_4 == 0xd8cbb78ae60655) {
    lVar2 = 0x10;
  }
  else {
    if (param_4 != 0xff507bca054094) goto LAB_107ef59a4;
    lVar2 = 0x18;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_107ef59a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ef59b8; end: 107ef59cb; +[SCCloudUploadOptionalMediaSnapshot fasterCodingVersion] */

undefined8 FUN_107ef59b8(void)

{
  return 0x97b1c6221399a8e8;
}



/* Entry: 107ef59cc; end: 107ef59d7; +[SCCloudUploadOptionalMediaSnapshot fasterCodingKeys] */

undefined8 FUN_107ef59cc(void)

{
  return 0x11324bc58;
}



/* Entry: 107ef59d8; end: 107ef59f3; -[SCCloudUploadOptionalMediaSnapshot isEqual:] */

undefined8 * FUN_107ef59d8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar4 = (long *)0x113728460;
  if (param_1 == param_3) {
    return (undefined8 *)0x1;
  }
  lVar3 = 4;
  lVar5 = 4;
  _objc_opt_class();
  puVar2 = param_3;
  func_0x00010c077980();
  if ((int)puVar2 != 0) {
    if ((bRam0000000113728458 & 1) == 0) {
      puVar2 = param_1;
      _objc_opt_class();
      _class_copyIvarList();
      lVar7 = 0;
      puVar8 = puVar2;
      do {
        pcVar6 = (char *)*puVar8;
        pcVar1 = pcVar6;
        _ivar_getTypeEncoding();
        if (*pcVar1 == '@') {
          _ivar_getOffset();
          *(char **)(lVar7 * 8 + 0x113728460) = pcVar6;
          lVar7 = lVar7 + 1;
        }
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      _free(puVar2);
      DataMemoryBarrier(2,3);
      bRam0000000113728458 = 1;
    }
    do {
      puVar2 = *(undefined8 **)((long)param_1 + *plVar4);
      if ((puVar2 != *(undefined8 **)((long)param_3 + *plVar4)) &&
         (func_0x00010c071ae0(), (int)puVar2 == 0)) {
        return puVar2;
      }
      lVar3 = lVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
    puVar2 = (undefined8 *)0x1;
  }
  return puVar2;
}



/* Entry: 107ef59f4; end: 107ef5a07; -[SCCloudUploadOptionalMediaSnapshot hash] */

ulong FUN_107ef59f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  plVar5 = (long *)0x113728460;
  if ((bRam0000000113728458 & 1) == 0) {
    puVar1 = param_1;
    _objc_opt_class();
    _class_copyIvarList();
    lVar7 = 0;
    lVar9 = 4;
    puVar8 = puVar1;
    do {
      pcVar6 = (char *)*puVar8;
      pcVar2 = pcVar6;
      _ivar_getTypeEncoding();
      if (*pcVar2 == '@') {
        _ivar_getOffset();
        *(char **)(lVar7 * 8 + 0x113728460) = pcVar6;
        lVar7 = lVar7 + 1;
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    _free(puVar1);
    DataMemoryBarrier(2,3);
    bRam0000000113728458 = 1;
  }
  uVar3 = *(ulong *)((long)param_1 + lRam0000000113728460);
  func_0x00010bfde980(uVar3);
  lVar7 = 3;
  do {
    plVar5 = plVar5 + 1;
    uVar4 = *(ulong *)((long)param_1 + *plVar5);
    func_0x00010bfde980(uVar4);
    uVar4 = uVar4 | uVar3 << 0x20;
    uVar3 = ~uVar4 + uVar4 * 0x40000;
    uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
    uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return uVar3;
}



/* Entry: 107ef5a08; end: 107ef5a0f; -[SCCloudUploadOptionalMediaSnapshot profile] */

undefined8 FUN_107ef5a08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ef5a10; end: 107ef5a17; -[SCCloudUploadOptionalMediaSnapshot snapPlaceholder] */

undefined8 FUN_107ef5a10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ef5a18; end: 107ef5a1f; -[SCCloudUploadOptionalMediaSnapshot detailPlaceholder] */

undefined8 FUN_107ef5a18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ef5a20; end: 107ef5a27; -[SCCloudUploadOptionalMediaSnapshot userContext] */

undefined8 FUN_107ef5a20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107ef5a28; end: 107ef5a6f; -[SCCloudUploadOptionalMediaSnapshot .cxx_destruct] */

void FUN_107ef5a28(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ef5a70; end: 107ef5b7f; +[SCCloudUploadOptionalMediaSnapshotBuilder withCloudUploadOptionalMediaSnapshot:] */

void FUN_107ef5a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d8458;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c242480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf6f600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2917c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ef5b80; end: 107ef5bb3; -[SCCloudUploadOptionalMediaSnapshotBuilder build] */

void FUN_107ef5b80(void)

{
  _objc_alloc(PTR_PTR_1126d8378);
  func_0x00010c03aca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ef5bb4; end: 107ef5beb; -[SCCloudUploadOptionalMediaSnapshotBuilder setProfile:] */

long FUN_107ef5bb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef5bec; end: 107ef5c23; -[SCCloudUploadOptionalMediaSnapshotBuilder setSnapPlaceholder:] */

long FUN_107ef5bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef5c24; end: 107ef5c5b; -[SCCloudUploadOptionalMediaSnapshotBuilder setDetailPlaceholder:] */

long FUN_107ef5c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef5c5c; end: 107ef5c93; -[SCCloudUploadOptionalMediaSnapshotBuilder setUserContext:] */

long FUN_107ef5c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107ef5c94; end: 107ef5cdb; -[SCCloudUploadOptionalMediaSnapshotBuilder .cxx_destruct] */

void FUN_107ef5c94(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ef5cdc; end: 107ef60f3;  */

void FUN_107ef5cdc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d8460;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar16 = auStack_f0;
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar19 = *(undefined8 *)(lVar18 * 8);
      uVar17 = uVar19;
      func_0x00010bf0b760();
      if ((uint)uVar17 < 0x16) {
        func_0x00010b697928();
      }
      else {
        uVar17 = 0xfffffffffbadbeef;
      }
      puVar5 = PTR_PTR_1126d81e0;
      _objc_opt_new(PTR_PTR_1126d81e0);
      puVar6 = PTR_PTR_1126d8408;
      _objc_opt_new(PTR_PTR_1126d8408);
      uVar7 = uVar19;
      func_0x00010bf0b260(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0(puVar6);
      _objc_release(uVar7);
      uVar7 = uVar19;
      func_0x00010bf0b760(uVar19);
      func_0x00010b9b244c(puVar6,uVar7);
      func_0x00010c16a7a0(puVar5);
      uVar8 = uVar19;
      func_0x00010bf0b260(uVar19);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1;
      func_0x00010c13a860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      lVar10 = lVar9;
      func_0x00010c06cde0();
      if ((int)lVar10 != 0) {
        func_0x000108018d28(uVar17);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bfad280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar17);
        if (lVar10 != 0) {
          puVar11 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x00010bf69bc0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar10;
          func_0x00010c0f5800(lVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar11;
          func_0x00010bf0e880();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar12);
          _objc_release(puVar11);
          func_0x00010bfad040(puVar13);
          puVar14 = puVar5;
          func_0x00010c202c80(puVar5);
          _objc_autoreleasePoolPush();
          puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
          lVar12 = lVar10;
          func_0x00010c0f5800(lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf64a80(puVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar12);
          puVar15 = puVar11;
          func_0x00010bdc1b00(puVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          _objc_autoreleasePoolPop(puVar14);
          func_0x00010c1c3e40(puVar5);
          _objc_release(puVar15);
          _objc_release(puVar13);
        }
        _objc_release(lVar10);
      }
      uVar17 = uVar19;
      func_0x00010bf93900(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195ce0(puVar5);
      _objc_release(uVar17);
      func_0x00010bf938c0(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195cc0(puVar5);
      _objc_release(uVar19);
      func_0x00010befa120(puVar3);
      _objc_release(lVar9);
      _objc_release(puVar6);
      _objc_release(puVar5);
      lVar18 = lVar18 + 1;
    } while (lVar4 != lVar18);
    puVar16 = auStack_f0;
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  func_0x00010c16ab00(puVar2);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar16);
  _objc_retain(puVar16);
  _objc_retain(puVar16);
  func_0x00010c25f420(uVar7);
  _objc_release(puVar16);
  _objc_release(puVar16);
  _objc_release(puVar16);
  return;
}



/* Entry: 107ef60f4; end: 107ef61e7;  */

void FUN_107ef60f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_4);
  _objc_retain(param_4);
  func_0x00010c25f420(param_2);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 107ef61e8; end: 107ef62c3;  */

/* WARNING: Removing unreachable block (ram,0x000107ef624c) */

void FUN_107ef61e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d8468;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c008360();
  _objc_release(param_3);
  _objc_retain(0);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1,0);
  _objc_release(puVar1);
  _objc_release(0);
  return;
}



/* Entry: 107ef62c4; end: 107ef63db;  */

void FUN_107ef62c4(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99400(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    lVar3 = param_2;
    func_0x00010c252ee0();
    if (lVar3 - 500U < 100) {
      _objc_release();
      lVar3 = *(long *)(param_1 + 0x20);
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    }
    else {
      lVar2 = param_2;
      func_0x00010c252ee0();
      _objc_release(param_2);
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar2 != 0x1ad) {
        func_0x00010c252ee0(param_2);
      }
    }
    func_0x00010bf99340(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar3 + 0x10))(lVar3,0,puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ef63dc; end: 107ef63f3;  */

void FUN_107ef63dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107ef63f4; end: 107ef6463;  */

void FUN_107ef63f4(long param_1,undefined8 param_2)

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



/* Entry: 107ef6464; end: 107ef67f7;  */

void FUN_107ef6464(undefined8 param_1,ulong param_2,ulong param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *unaff_x26;
  ulong uVar13;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_107ef63dc;
  uStack_88 = 0x107ef63ec;
  uStack_80 = 0;
  func_0x00010bf529e0(param_2);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_2);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  do {
    uVar3 = param_2;
    func_0x00010bf529e0();
    puVar11 = PTR_PTR_1126af5d0;
    if (uVar3 <= uVar13) {
      puVar8 = PTR_PTR_1126d8478;
      _objc_alloc(PTR_PTR_1126d8478);
      puVar9 = puVar1;
      func_0x00010bf51e00(puVar1);
      puVar10 = puVar2;
      func_0x00010bf51e00(puVar2);
      func_0x00010c047f20(puVar8);
      func_0x00010c2619e0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar10);
      _objc_release(puVar9);
      unaff_x26 = puVar11;
      break;
    }
    uVar4 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar11);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    if (uVar3 != 0) {
      uVar4 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    uVar4 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    FUN_107efec90(param_1,uVar4,uVar3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_retain(puVar1);
    _objc_retain(param_2);
    func_0x00010c0c0800(uVar7);
    lVar12 = puStack_a0[5];
    if (lVar12 != 0) {
      unaff_x26 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_2);
    _objc_release(puVar1);
    _objc_release(uVar7);
    _objc_release(uVar3);
    uVar13 = uVar13 + 1;
  } while (lVar12 == 0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x26);
  return;
}



/* Entry: 107ef67f8; end: 107ef6897;  */

void FUN_107ef67f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ef6898; end: 107ef68cf;  */

void FUN_107ef6898(long param_1,undefined8 param_2)

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



/* Entry: 107ef68d0; end: 107ef6d67;  */

void FUN_107ef68d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_15);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_14);
  _objc_retain(param_11);
  _objc_retain(param_6);
  _objc_retain(param_1);
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_12);
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c0b8600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126d81a8;
  func_0x00010c2b1ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206220();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = 0xffffffffa970ec1f;
  func_0x00010b77e060(0xffffffffa970ec1f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c180(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_11;
  func_0x00010c1179e0(param_11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  func_0x00010c1341c0(0x3f800000,uVar4);
  _objc_release(uVar4);
  puVar5 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920(PTR_PTR_1126bbf20);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_15);
  _objc_retain(param_15);
  _objc_retain(param_12);
  _objc_retain(param_10);
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  func_0x00010c25f400(param_6);
  _objc_release(param_14);
  _objc_release(param_6);
  _objc_release(puVar6);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(param_15);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(puVar1);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ef6d68; end: 107ef6f9f;  */

void FUN_107ef6d68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c23f220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_2;
  func_0x00010c23f220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = param_2;
  func_0x00010c23f220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = param_2;
  func_0x00010c23f220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar8);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c23f220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bf6f520(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0ce1e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c26da00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  FUN_107eea030(uVar1,uVar8,uVar7,uVar3,uVar5,uVar6,0,*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107ef6fa0; end: 107ef7f7b;  */

void FUN_107ef6fa0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined *puStack_460;
  undefined *puStack_420;
  undefined *puStack_400;
  undefined8 uStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  code *pcStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = *(long *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = *(undefined **)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  _objc_retain(puVar4);
  _objc_retain(param_3);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  puVar5 = PTR_PTR_1126d81b0;
  _objc_alloc();
  func_0x00010c0206e0();
  if (((param_3 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) ||
     (puVar6 = puVar5, func_0x00010c15f8c0(), puVar6 == (undefined *)0xffffffffffffd8f1)) {
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_210 = &PTR____CFConstantStringClassReference_110ec35b8;
    ppuStack_220 = &PTR____CFConstantStringClassReference_110e0a318;
    ppuStack_218 = &PTR____CFConstantStringClassReference_110ec2ed8;
    _objc_retain(param_3);
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    puVar6 = param_3;
    if (((ulong)puVar7 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(param_3);
    puVar7 = param_3;
    if (puVar6 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_208 = puVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2eb8,
                        &PTR____CFConstantStringClassReference_110ec3cf8,puVar8,uVar3);
    _objc_release(puVar8);
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
  }
  puVar7 = puVar5;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (puVar7 != (undefined *)0x0) {
    puVar6 = puVar7;
  }
  _objc_retain();
  _objc_release(puVar7);
  puVar7 = puVar5;
  func_0x00010c15f8c0();
  if (puVar7 == (undefined *)0x7d0) {
    puStack_420 = puVar6;
    FUN_107eeb9d8();
    _objc_retainAutoreleasedReturnValue();
    FUN_107ead600(uVar1,puStack_420,uVar2);
    puVar8 = puStack_420;
    FUN_107eebb20(puStack_420,puVar4);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)puVar8 != 0) {
      puStack_3b8 = &uStack_3c0;
      uStack_3c0 = 0;
      uStack_3b0 = 0x3032000000;
      pcStack_3a8 = FUN_107ef63dc;
      uStack_3a0 = 0x107ef63ec;
      uStack_398 = 0;
      puStack_3e8 = &uStack_3f0;
      uStack_3f0 = 0;
      uStack_3e0 = 0x3032000000;
      pcStack_3d8 = FUN_107ef63dc;
      uStack_3d0 = 0x107ef63ec;
      uStack_3c8 = 0;
      _objc_retain(puVar6);
      puStack_288 = &uStack_290;
      uStack_290 = 0;
      uStack_280 = 0x3032000000;
      pcStack_278 = FUN_107ef63dc;
      uStack_270 = 0x107ef63ec;
      uStack_268 = 0;
      puStack_2b8 = &uStack_2c0;
      uStack_2c0 = 0;
      uStack_2b0 = 0x3032000000;
      pcStack_2a8 = FUN_107ef63dc;
      uStack_2a0 = 0x107ef63ec;
      uStack_298 = 0;
      _objc_retain(puVar6);
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      lStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      _objc_retain(puVar6);
      puStack_460 = puVar6;
      func_0x00010bf52a60();
      if (puStack_460 != (undefined *)0x0) {
        lVar21 = *plStack_1f0;
        do {
          puStack_400 = (undefined *)0x0;
          do {
            if (*plStack_1f0 != lVar21) {
              _objc_enumerationMutation(puVar6);
            }
            lVar22 = *(long *)(lStack_1f8 + (long)puStack_400 * 8);
            puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            _objc_retainAutoreleasedReturnValue();
            uStack_238 = 0;
            uStack_240 = 0;
            uStack_228 = 0;
            uStack_230 = 0;
            lStack_258 = 0;
            uStack_260 = 0;
            uStack_248 = 0;
            plStack_250 = (long *)0x0;
            lVar9 = lVar22;
            func_0x00010bf0bae0();
            _objc_retainAutoreleasedReturnValue();
            lVar24 = lVar9;
            func_0x00010bf52a60();
            if (lVar24 != 0) {
              lVar25 = *plStack_250;
              do {
                lVar29 = 0;
                do {
                  if (*plStack_250 != lVar25) {
                    _objc_enumerationMutation(lVar9);
                  }
                  puVar23 = PTR__OBJC_CLASS___NSData_1126ae778;
                  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = PTR_PTR_1126d81e0;
                  _objc_alloc(PTR_PTR_1126d81e0);
                  lStack_350 = 0;
                  func_0x00010c008360();
                  lVar14 = lStack_350;
                  _objc_retain(lStack_350);
                  if (lVar14 != 0) {
                    puVar11 = PTR_PTR_1126af5d0;
                    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar10);
                    _objc_release(lVar14);
                    _objc_release(puVar23);
                    _objc_release(lVar9);
                    _objc_release(puVar8);
                    puVar8 = puVar6;
                    goto LAB_107ef7610;
                  }
                  func_0x00010befa120(puVar8);
                  _objc_release(puVar10);
                  _objc_release(puVar23);
                  lVar29 = lVar29 + 1;
                } while (lVar24 != lVar29);
                lVar24 = lVar9;
                func_0x00010bf52a60();
              } while (lVar24 != 0);
            }
            _objc_release(lVar9);
            puVar23 = puVar8;
            func_0x00010bf51e00(puVar8);
            func_0x00010c241220(lVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar7);
            _objc_release(lVar22);
            _objc_release(puVar23);
            _objc_release(puVar8);
            puStack_400 = puStack_400 + 1;
          } while (puStack_400 != puStack_460);
          puStack_460 = puVar6;
          func_0x00010bf52a60();
        } while (puStack_460 != (undefined *)0x0);
      }
      _objc_release(puVar6);
      puVar11 = PTR_PTR_1126af5d0;
      puVar8 = puVar7;
      func_0x00010bf51e00(puVar7);
      func_0x00010c2619e0(puVar11);
      _objc_retainAutoreleasedReturnValue();
LAB_107ef7610:
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2e0 = 0xc2000000;
      uStack_2d8 = 0x107ef7fc4;
      puStack_2d0 = &UNK_1108a5f78;
      puStack_2c8 = &uStack_290;
      puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_308 = 0xc2000000;
      uStack_300 = 0x107ef7ffc;
      puStack_2f8 = &UNK_11084d888;
      puStack_2f0 = &uStack_2c0;
      func_0x00010c0c0800(puVar11);
      _objc_release(puVar11);
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      if (puStack_2b8[5] == 0) {
        func_0x00010bf529e0(puVar6);
        func_0x00010bf71fe0();
        _objc_retainAutoreleasedReturnValue();
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        lStack_258 = 0;
        uStack_260 = 0;
        uStack_248 = 0;
        plStack_250 = (long *)0x0;
        _objc_retain(puVar6);
        puVar8 = puVar6;
        func_0x00010bf52a60();
        if (puVar8 != (undefined *)0x0) {
          lVar21 = *plStack_250;
          do {
            puVar23 = (undefined *)0x0;
            do {
              if (*plStack_250 != lVar21) {
                _objc_enumerationMutation(puVar6);
              }
              uVar12 = *(undefined8 *)(lStack_258 + (long)puVar23 * 8);
              lVar24 = puStack_288[5];
              uVar13 = uVar12;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar13);
              puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              uVar13 = uVar12;
              func_0x00010bf0bae0(uVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf529e0();
              func_0x00010bf0a0e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar13);
              uStack_328 = 0;
              uStack_330 = 0;
              uStack_318 = 0;
              uStack_320 = 0;
              lStack_348 = 0;
              lStack_350 = 0;
              uStack_338 = 0;
              plStack_340 = (long *)0x0;
              _objc_retain(lVar24);
              lVar9 = lVar24;
              func_0x00010bf52a60();
              if (lVar9 != 0) {
                lVar22 = *plStack_340;
                do {
                  lVar25 = 0;
                  do {
                    if (*plStack_340 != lVar22) {
                      _objc_enumerationMutation(lVar24);
                    }
                    puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                    lVar26 = *(long *)(lStack_348 + lVar25 * 8);
                    lVar29 = lVar26;
                    func_0x00010c28dec0(lVar26);
                    _objc_retainAutoreleasedReturnValue();
                    lVar14 = lVar29;
                    func_0x00010c123f80();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf529e0();
                    func_0x00010bf71fe0(puVar11);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar14);
                    _objc_release(lVar29);
                    uStack_368 = 0;
                    uStack_370 = 0;
                    uStack_358 = 0;
                    uStack_360 = 0;
                    lStack_388 = 0;
                    uStack_390 = 0;
                    uStack_378 = 0;
                    plStack_380 = (long *)0x0;
                    lVar29 = lVar26;
                    func_0x00010c28dec0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar14 = lVar29;
                    func_0x00010c123f80();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar29);
                    lVar29 = lVar14;
                    func_0x00010bf52a60();
                    if (lVar29 != 0) {
                      lVar28 = *plStack_380;
                      do {
                        lVar30 = 0;
                        do {
                          if (*plStack_380 != lVar28) {
                            _objc_enumerationMutation(lVar14);
                          }
                          uVar27 = *(undefined8 *)(lStack_388 + lVar30 * 8);
                          uVar13 = uVar27;
                          func_0x00010c296d80(uVar27);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c086560(uVar27);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c1d0640(puVar11);
                          _objc_release(uVar27);
                          _objc_release(uVar13);
                          lVar30 = lVar30 + 1;
                        } while (lVar29 != lVar30);
                        lVar29 = lVar14;
                        func_0x00010bf52a60();
                      } while (lVar29 != 0);
                    }
                    _objc_release(lVar14);
                    lVar29 = lVar26;
                    func_0x00010bf0af00(lVar26);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c27dd80();
                    func_0x00010b697928();
                    _objc_release(lVar29);
                    puVar15 = PTR_PTR_1126d8480;
                    _objc_alloc(PTR_PTR_1126d8480);
                    lVar29 = lVar26;
                    func_0x00010bf0af00(lVar26);
                    _objc_retainAutoreleasedReturnValue();
                    lVar14 = lVar29;
                    func_0x00010bfe5ea0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar16 = puVar11;
                    func_0x00010bf51e00(puVar11);
                    lVar28 = lVar26;
                    func_0x00010bdc2b80(lVar26);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf89180(lVar26);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bff4440(puVar15);
                    func_0x00010befa120(puVar10);
                    _objc_release(puVar15);
                    _objc_release(lVar26);
                    _objc_release(lVar28);
                    _objc_release(puVar16);
                    _objc_release(lVar14);
                    _objc_release(lVar29);
                    _objc_release(puVar11);
                    lVar25 = lVar25 + 1;
                  } while (lVar25 != lVar9);
                  lVar9 = lVar24;
                  func_0x00010bf52a60();
                } while (lVar9 != 0);
              }
              _objc_release(lVar24);
              puVar11 = PTR_PTR_1126d8488;
              _objc_alloc(PTR_PTR_1126d8488);
              uVar13 = uVar12;
              func_0x00010c0c6f60(uVar12);
              _objc_retainAutoreleasedReturnValue();
              uVar27 = uVar12;
              func_0x00010c0c4a60(uVar12);
              _objc_retainAutoreleasedReturnValue();
              uVar17 = uVar12;
              func_0x00010c0c6ee0(uVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c059c60(puVar11);
              _objc_release(uVar17);
              _objc_release(uVar27);
              _objc_release(uVar13);
              puVar15 = PTR_PTR_1126d8488;
              _objc_alloc(PTR_PTR_1126d8488);
              uVar13 = uVar12;
              func_0x00010c0efe40(uVar12);
              _objc_retainAutoreleasedReturnValue();
              uVar27 = uVar12;
              func_0x00010c0ef7a0(uVar12);
              _objc_retainAutoreleasedReturnValue();
              uVar17 = uVar12;
              func_0x00010c0efe00(uVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c059c60(puVar15);
              _objc_release(uVar17);
              _objc_release(uVar27);
              _objc_release(uVar13);
              puVar16 = PTR_PTR_1126d8488;
              _objc_alloc(PTR_PTR_1126d8488);
              uVar13 = uVar12;
              func_0x00010c26e500(uVar12);
              _objc_retainAutoreleasedReturnValue();
              uVar27 = uVar12;
              func_0x00010c26da20(uVar12);
              _objc_retainAutoreleasedReturnValue();
              uVar17 = uVar12;
              func_0x00010c26e440(uVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c059c60(puVar16);
              _objc_release(uVar17);
              _objc_release(uVar27);
              _objc_release(uVar13);
              puVar18 = PTR_PTR_1126d82d8;
              _objc_alloc(PTR_PTR_1126d82d8);
              puVar19 = puVar10;
              func_0x00010bf51e00(puVar10);
              func_0x00010c0c6f40(uVar12);
              func_0x00010c02a140(puVar18);
              func_0x00010c241220(uVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar7);
              _objc_release(uVar12);
              _objc_release(puVar18);
              _objc_release(puVar19);
              _objc_release(puVar16);
              _objc_release(puVar15);
              _objc_release(puVar11);
              _objc_release(puVar10);
              _objc_release(lVar24);
              puVar23 = puVar23 + 1;
            } while (puVar23 != puVar8);
            puVar8 = puVar6;
            func_0x00010bf52a60();
          } while (puVar8 != (undefined *)0x0);
        }
        _objc_release(puVar6);
        puVar8 = PTR_PTR_1126af5d0;
        puVar23 = puVar7;
        func_0x00010bf51e00(puVar7);
        func_0x00010c2619e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar23);
        _objc_release(puVar7);
      }
      else {
        puVar8 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
      }
      __Block_object_dispose(&uStack_2c0,8);
      _objc_release(uStack_298);
      __Block_object_dispose(&uStack_290,8);
      _objc_release(uStack_268);
      _objc_release(puVar6);
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_f8 = (undefined *)0xc2000000;
      pcStack_f0 = FUN_107ef63f4;
      puStack_e8 = &UNK_1108a5f78;
      puStack_e0 = &uStack_3c0;
      ppuStack_180 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
      ppuStack_178 = (undefined **)0xc2000000;
      uStack_170 = 0x107ef642c;
      puStack_168 = &UNK_11084d888;
      puStack_160 = &uStack_3f0;
      func_0x00010c0c0800(puVar8);
      _objc_release(puVar8);
      puVar7 = PTR_PTR_1126d8470;
      if (puStack_3e8[5] == 0) {
        func_0x00010c261b80();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c0f4420();
        _objc_retainAutoreleasedReturnValue();
      }
      __Block_object_dispose(&uStack_3f0,8);
      _objc_release(uStack_3c8);
      __Block_object_dispose(&uStack_3c0,8);
      _objc_release(uStack_398);
      goto LAB_107ef7e38;
    }
    ppuStack_180 = &PTR____CFConstantStringClassReference_110ec3d58;
    func_0x00010bf529e0(puVar4);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_178 = &PTR____CFConstantStringClassReference_110ec3d78;
    puStack_100 = puVar7;
    func_0x00010bf529e0(puStack_420);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_f8 = puVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec3d18,
                        &PTR____CFConstantStringClassReference_110ec3d38,puVar23,uVar3);
    _objc_release(puVar23);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puStack_420);
  }
  puVar7 = PTR_PTR_1126d8470;
  puStack_420 = puVar5;
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf148e0(puVar5);
  func_0x00010c15f8c0(puVar5);
  func_0x00010c15f180((double)(long)puVar8);
  _objc_retainAutoreleasedReturnValue();
LAB_107ef7e38:
  _objc_release(puStack_420);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(param_3);
  (**(code **)(lVar20 + 0x10))(lVar20,puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_2c0,8);
    __Block_object_dispose(&uStack_290,8);
    __Block_object_dispose(&uStack_3f0,8);
    __Block_object_dispose(&uStack_3c0,8);
    __Unwind_Resume();
    lVar20 = *(long *)(puVar7 + 0x20);
    puVar4 = PTR_PTR_1126d8470;
    func_0x00010c0d7b00(PTR_PTR_1126d8470);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar20 + 0x10))(lVar20,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107ef7f7c; end: 107ef8033;  */

void FUN_107ef7f7c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126d8470;
  func_0x00010c0d7b00(PTR_PTR_1126d8470);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ef8034; end: 107ef8183;  */

void FUN_107ef8034(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010befb600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf529e0();
  puVar2 = PTR_PTR_1126ae6b8;
  if (lVar1 == 1) {
    _objc_retain(param_1);
    _objc_retain(param_2);
    _objc_retain(param_3);
    func_0x00010bf54280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
  }
  else {
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ef8184; end: 107ef832b;  */

void FUN_107ef8184(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126d8490;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c00b840();
  puVar2 = PTR_PTR_1126d8498;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c7dc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a360();
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126d84a0;
  _objc_alloc();
  func_0x00010c00b860(*(undefined8 *)(param_1 + 0x38));
  uVar9 = 3;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  lVar8 = 0;
  puVar7 = PTR_PTR_1126b0418;
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(uVar9);
    puVar2 = PTR_PTR_1126b5980;
    func_0x00010bf1f1e0(PTR_PTR_1126b5980);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aade0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bc1a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8800(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3a20(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2abca0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if ((lVar8 == 1) || (lVar8 == 2)) {
      func_0x00010c2b8ce0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar7 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar9);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107ef832c; end: 107ef8443;  */

void FUN_107ef832c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b5980;
  func_0x00010bf1f1e0(PTR_PTR_1126b5980);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aade0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc1a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8800(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3a20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2abca0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if ((param_3 == 1) || (param_3 == 2)) {
    func_0x00010c2b8ce0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ef8444; end: 107ef8453;  */

void FUN_107ef8444(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfeb750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b5988,PTR_s_inMemoryContentWithUploadData__1125d8798,param_1);
  return;
}



/* Entry: 107ef8454; end: 107ef8563;  */

void FUN_107ef8454(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6b8;
  if ((param_9 & 1) == 0) {
    _objc_retain(param_3);
    func_0x00010bf54280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  else {
    func_0x000107eaccdc(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ef8564; end: 107ef86f3;  */

void FUN_107ef8564(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af5d0;
  _objc_retain(param_2);
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ef86f4; end: 107ef8723;  */

void FUN_107ef86f4(long param_1,undefined8 param_2)

{
  func_0x00010c08fa60();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107ef8724; end: 107ef8917;  */

void FUN_107ef8724(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bface80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0f5800(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar3;
  func_0x00010bf0e880();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(uVar1);
  _objc_release(lVar3);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010bfad040();
    *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar3;
  }
  _objc_release(lVar2);
  _objc_release(0);
  return;
}


