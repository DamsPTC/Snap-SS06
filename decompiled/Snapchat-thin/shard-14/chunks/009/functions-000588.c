/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6e76b8; end: 10b6e76ef; -[SCCustomStickerOwnerBuilder setUserId:] */

long FUN_10b6e76b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e76f0; end: 10b6e771f; -[SCCustomStickerOwnerBuilder .cxx_destruct] */

void FUN_10b6e76f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6e7720; end: 10b6e77d3; -[SCMemoriesSnapAsset initWithAssetId:assetType:downloadURL:] */

undefined1 *
FUN_10b6e7720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
  puStack_38 = PTR_PTR_112709d88;
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



/* Entry: 10b6e77d4; end: 10b6e77f7; -[SCMemoriesSnapAsset copyWithZone:] */

undefined8 FUN_10b6e77d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6e77f8; end: 10b6e78bb; -[SCMemoriesSnapAsset initWithCoder:] */

undefined1 * FUN_10b6e77f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709d88;
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
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 8) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6e78bc; end: 10b6e792f; -[SCMemoriesSnapAsset encodeWithCoder:] */

void FUN_10b6e78bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110de1838);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110de1878);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f713d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e7930; end: 10b6e7937; -[SCMemoriesSnapAsset preferFasterCoding] */

undefined8 FUN_10b6e7930(void)

{
  return 1;
}



/* Entry: 10b6e7938; end: 10b6e7993; -[SCMemoriesSnapAsset encodeWithFasterCoder:] */

void FUN_10b6e7938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e7994; end: 10b6e7a13; -[SCMemoriesSnapAsset decodeWithFasterDecoder:] */

void FUN_10b6e7994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 8) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b6e7a14; end: 10b6e7a9b; -[SCMemoriesSnapAsset setObject:forUInt64Key:] */

void FUN_10b6e7a14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0xba4de6e66e4acf) {
    lVar2 = 0x10;
  }
  else {
    if (param_4 != 0xa59a33e0ed3b56) goto LAB_10b6e7a88;
    lVar2 = 0x18;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10b6e7a88:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e7a9c; end: 10b6e7abb; -[SCMemoriesSnapAsset setSInt32:forUInt64Key:] */

void FUN_10b6e7a9c(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  if (param_4 == 0xfd8df076fe691) {
    *(undefined4 *)(param_1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b6e7abc; end: 10b6e7acf; +[SCMemoriesSnapAsset fasterCodingVersion] */

undefined8 FUN_10b6e7abc(void)

{
  return 0x49dafc7da8a5f8ee;
}



/* Entry: 10b6e7ad0; end: 10b6e7adb; +[SCMemoriesSnapAsset fasterCodingKeys] */

undefined8 FUN_10b6e7ad0(void)

{
  return 0x1133bbd18;
}



/* Entry: 10b6e7adc; end: 10b6e7b4b; -[SCMemoriesSnapAsset isEqual:] */

bool FUN_10b6e7adc(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bc85c34(param_1,param_3,0x1137f7a18,0x1137f7a20,3,2);
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_3 + 8) == *(int *)(param_1 + 8);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b6e7b4c; end: 10b6e7bfb; -[SCMemoriesSnapAsset hash] */

ulong FUN_10b6e7b4c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong auStack_40 [4];
  
  auStack_40[3] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bfde980(uVar1);
  auStack_40[1] = (ulong)*(int *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfde980();
  auStack_40[2] = lVar2;
  lVar3 = 8;
  do {
    uVar1 = *(ulong *)((long)auStack_40 + lVar3) | uVar1 << 0x20;
    uVar1 = ~uVar1 + uVar1 * 0x40000;
    uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
    uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
    uVar1 = uVar1 ^ uVar1 >> 0x16;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_40[3]) {
    return uVar1;
  }
  ___stack_chk_fail();
  return *(ulong *)(lVar2 + 0x10);
}



/* Entry: 10b6e7bfc; end: 10b6e7c03; -[SCMemoriesSnapAsset assetId] */

undefined8 FUN_10b6e7bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6e7c04; end: 10b6e7c0b; -[SCMemoriesSnapAsset assetType] */

undefined4 FUN_10b6e7c04(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b6e7c0c; end: 10b6e7c13; -[SCMemoriesSnapAsset downloadURL] */

undefined8 FUN_10b6e7c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6e7c14; end: 10b6e7c43; -[SCMemoriesSnapAsset .cxx_destruct] */

void FUN_10b6e7c14(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6e7c44; end: 10b6e7db7; -[SCCloudSyncOperationSnapshot initWithObjectID:createTimeUtc:payload:requestID:seqNum:tacomaOperationId_DEPRECATED:targetEntryId:] */

undefined1 *
FUN_10b6e7c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112709d90;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
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
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6e7db8; end: 10b6e7ddb; -[SCCloudSyncOperationSnapshot copyWithZone:] */

undefined8 FUN_10b6e7db8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6e7ddc; end: 10b6e7f3f; -[SCCloudSyncOperationSnapshot initWithCoder:] */

undefined1 * FUN_10b6e7ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709d90;
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
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6e7f40; end: 10b6e8003; -[SCCloudSyncOperationSnapshot encodeWithCoder:] */

void FUN_10b6e7f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f71258);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f6e2d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110df8598);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f6e2f8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f6e2b8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f6e318);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f6e338);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e8004; end: 10b6e800b; -[SCCloudSyncOperationSnapshot preferFasterCoding] */

undefined8 FUN_10b6e8004(void)

{
  return 1;
}



/* Entry: 10b6e800c; end: 10b6e8097; -[SCCloudSyncOperationSnapshot encodeWithFasterCoder:] */

void FUN_10b6e800c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf93100(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e8098; end: 10b6e8197; -[SCCloudSyncOperationSnapshot decodeWithFasterDecoder:] */

void FUN_10b6e8098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
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
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67140();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b6e8198; end: 10b6e82b7; -[SCCloudSyncOperationSnapshot setObject:forUInt64Key:] */

void FUN_10b6e8198(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0x9993dd551dd452) {
    if (param_4 == 0x48338303b418da) {
      lVar2 = 0x38;
    }
    else if (param_4 == 0x77f31d358817a2) {
      lVar2 = 0x20;
    }
    else {
      if (param_4 != 0x7a5d62ed8c606e) goto LAB_10b6e82a4;
      lVar2 = 8;
    }
  }
  else if (param_4 == 0x9993dd551dd452) {
    lVar2 = 0x10;
  }
  else if (param_4 == 0xb15db6bff57429) {
    lVar2 = 0x30;
  }
  else {
    if (param_4 != 0xdf129007ee0dbd) goto LAB_10b6e82a4;
    lVar2 = 0x18;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10b6e82a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e82b8; end: 10b6e82d7; -[SCCloudSyncOperationSnapshot setSInt64:forUInt64Key:] */

void FUN_10b6e82b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0xe99b76f87e1107) {
    *(undefined8 *)(param_1 + 0x28) = param_3;
  }
  return;
}



/* Entry: 10b6e82d8; end: 10b6e82eb; +[SCCloudSyncOperationSnapshot fasterCodingVersion] */

undefined8 FUN_10b6e82d8(void)

{
  return 0x4aba11a0d8b6374a;
}



/* Entry: 10b6e82ec; end: 10b6e82f7; +[SCCloudSyncOperationSnapshot fasterCodingKeys] */

undefined8 FUN_10b6e82ec(void)

{
  return 0x1133bbd38;
}



/* Entry: 10b6e82f8; end: 10b6e8367; -[SCCloudSyncOperationSnapshot isEqual:] */

bool FUN_10b6e82f8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bc85c34(param_1,param_3,0x1137f7a30,0x1137f7a38,7,6);
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_3 + 0x28) == *(long *)(param_1 + 0x28);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b6e8368; end: 10b6e8443; -[SCCloudSyncOperationSnapshot hash] */

undefined * FUN_10b6e8368(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong auStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  auStack_60[1] = uVar2;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  auStack_60[2] = uVar3;
  func_0x00010bfde980();
  auStack_60[4] = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  auStack_60[3] = uVar4;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x38);
  auStack_60[5] = uVar2;
  func_0x00010bfde980();
  auStack_60[6] = lVar5;
  lVar8 = 8;
  do {
    uVar9 = *(ulong *)((long)auStack_60 + lVar8) | (long)puVar1 << 0x20;
    uVar9 = ~uVar9 + uVar9 * 0x40000;
    uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
    uVar9 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
    puVar1 = (undefined *)(uVar9 ^ uVar9 >> 0x16);
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x38);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar2 = *(undefined8 *)(lVar5 + 8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71278);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar5 + 0x10);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f713f8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar5 + 0x18);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71418);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar5 + 0x20);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71438);
  _objc_release(uVar2);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(lVar5 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71458);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar2 = *(undefined8 *)(lVar5 + 0x30);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71478);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar5 + 0x38);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71498);
  _objc_release(uVar2);
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59558);
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 10b6e8444; end: 10b6e862b; -[SCCloudSyncOperationSnapshot description] */

void FUN_10b6e8444(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71278);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f713f8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71418);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71438);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71458);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71478);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71498);
  _objc_release(uVar2);
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59558);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b6e862c; end: 10b6e8633; -[SCCloudSyncOperationSnapshot objectID] */

undefined8 FUN_10b6e862c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6e8634; end: 10b6e863b; -[SCCloudSyncOperationSnapshot createTimeUtc] */

undefined8 FUN_10b6e8634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6e863c; end: 10b6e8643; -[SCCloudSyncOperationSnapshot payload] */

undefined8 FUN_10b6e863c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6e8644; end: 10b6e864b; -[SCCloudSyncOperationSnapshot requestID] */

undefined8 FUN_10b6e8644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6e864c; end: 10b6e8653; -[SCCloudSyncOperationSnapshot seqNum] */

undefined8 FUN_10b6e864c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6e8654; end: 10b6e865b; -[SCCloudSyncOperationSnapshot tacomaOperationId_DEPRECATED] */

undefined8 FUN_10b6e8654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6e865c; end: 10b6e8663; -[SCCloudSyncOperationSnapshot targetEntryId] */

undefined8 FUN_10b6e865c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b6e8664; end: 10b6e86c3; -[SCCloudSyncOperationSnapshot .cxx_destruct] */

void FUN_10b6e8664(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6e86c4; end: 10b6e883f; +[SCCloudSyncOperationSnapshotBuilder withCloudSyncOperationSnapshot:] */

void FUN_10b6e86c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126e05a8;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0f6420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c1356e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c15e520();
  *(undefined8 *)(puVar1 + 0x28) = uVar2;
  uVar2 = param_3;
  func_0x00010c2680a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c269ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x38);
  *(undefined8 *)(puVar1 + 0x38) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6e8840; end: 10b6e8887; -[SCCloudSyncOperationSnapshotBuilder build] */

void FUN_10b6e8840(void)

{
  _objc_alloc(PTR_PTR_1126bc7e0);
  func_0x00010c030860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6e8888; end: 10b6e88bf; -[SCCloudSyncOperationSnapshotBuilder setObjectID:] */

long FUN_10b6e8888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e88c0; end: 10b6e88f7; -[SCCloudSyncOperationSnapshotBuilder setCreateTimeUtc:] */

long FUN_10b6e88c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e88f8; end: 10b6e892f; -[SCCloudSyncOperationSnapshotBuilder setPayload:] */

long FUN_10b6e88f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e8930; end: 10b6e8967; -[SCCloudSyncOperationSnapshotBuilder setRequestID:] */

long FUN_10b6e8930(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e8968; end: 10b6e896f; -[SCCloudSyncOperationSnapshotBuilder setSeqNum:] */

void FUN_10b6e8968(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b6e8970; end: 10b6e89a7; -[SCCloudSyncOperationSnapshotBuilder setTacomaOperationId_DEPRECATED:] */

long FUN_10b6e8970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e89a8; end: 10b6e89df; -[SCCloudSyncOperationSnapshotBuilder setTargetEntryId:] */

long FUN_10b6e89a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e89e0; end: 10b6e8a3f; -[SCCloudSyncOperationSnapshotBuilder .cxx_destruct] */

void FUN_10b6e89e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6e8a40; end: 10b6e9257; -[SCGalleryEntry initWithObjectID:autosaveTimeUtc:bitmojiComicId:clientGenStoryItemOrders:clientGenStoryRetryCount:clientProcessingBitMaskType:clientProcessingType:collageUCOLensId:collectionAttributes:createTimeUtc:creatorUserId:dataVaultEncryption:duplicateTimeUtc:earliestSnapCreateTimeUtc:encryption:entryId:entrySource:expectedClientGenSnapsCount:externalId:fallbackFeaturedStoryCategory:featuredExpirationTimeUtc:featuredStoryActivationDateUtc:featuredStoryLoggingInfo:featuredStoryTemplateName:folderType:galleryType:isAutoClusterPrototype:isHidden:isPrivate:isTemporary:latestSnapCaptureTimeUtc:memDataId:pendingSyncs:priority:retryFromEntryId:saverUserId:seenInCarousel:seqNum:snapFeedViewedItemIds:snapsHash:snapsInfo:snapsOrder:snapsViewed:sources:subtitle:syncedAutosaveTimeUtc:syncedIsPrivate:syncedTitle:templateId:thumbnailEncrypted:thumbnailUrl:thumbnailUrlType:title:titleOverlayUrl:titleOverlayUrlType:viewType:] */

undefined8 *
FUN_10b6e8a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined4 param_20,
             undefined4 param_21,undefined8 param_22,undefined4 param_23,undefined4 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined4 param_30,undefined4 param_31,undefined8 param_32,
             undefined8 param_33,undefined4 param_34,undefined4 param_35,undefined8 param_36,
             undefined8 param_37,undefined1 param_38,undefined4 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined4 param_45,undefined4 param_46,undefined8 param_47,undefined8 param_48,
             undefined1 param_49,undefined4 param_50,undefined8 param_51,undefined8 param_52,
             undefined1 param_53,undefined4 param_54,undefined8 param_55,undefined4 param_56,
             undefined4 param_57,undefined8 param_58,undefined8 param_59,undefined4 param_60,
             undefined4 param_61)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain();
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_22);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_55);
  _objc_retain(param_58);
  _objc_retain(param_59);
  puStack_70 = PTR_PTR_112709d98;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)(puVar1 + 2) = param_8;
    *(undefined4 *)((long)puVar1 + 0x14) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)(puVar1 + 3) = param_20;
    *(undefined4 *)((long)puVar1 + 0x1c) = param_21;
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)(puVar1 + 4) = param_23;
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_26;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_28;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_29;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x24) = param_30;
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_31;
    *(undefined1 *)((long)puVar1 + 9) = param_31._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_31._2_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_31._3_1_;
    uVar2 = param_32;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_33;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1e];
    puVar1[0x1e] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)(puVar1 + 5) = param_34;
    *(undefined4 *)((long)puVar1 + 0x2c) = param_35;
    uVar2 = param_36;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1f];
    puVar1[0x1f] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_37;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x20];
    puVar1[0x20] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = param_38;
    puVar1[0x21] = param_40;
    uVar2 = param_41;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x22];
    puVar1[0x22] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_42;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x23];
    puVar1[0x23] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_43;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x24];
    puVar1[0x24] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_44;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x25];
    puVar1[0x25] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)(puVar1 + 6) = param_45;
    *(undefined4 *)((long)puVar1 + 0x34) = param_46;
    uVar2 = param_47;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x26];
    puVar1[0x26] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_48;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x27];
    puVar1[0x27] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xd) = param_49;
    uVar2 = param_51;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x28];
    puVar1[0x28] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_52;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x29];
    puVar1[0x29] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xe) = param_53;
    uVar2 = param_55;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x2a];
    puVar1[0x2a] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)(puVar1 + 7) = param_56;
    uVar2 = param_58;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x2b];
    puVar1[0x2b] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_59;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x2c];
    puVar1[0x2c] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x3c) = param_60;
    *(undefined4 *)(puVar1 + 8) = param_61;
  }
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_55);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_22);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b6e9258; end: 10b6e927b; -[SCGalleryEntry copyWithZone:] */

undefined8 FUN_10b6e9258(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6e927c; end: 10b6e99f7; -[SCGalleryEntry initWithCoder:] */

undefined1 * FUN_10b6e927c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709d98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x10) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x14) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined8 *)((long)puVar1 + 0xa8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined8 *)((long)puVar1 + 0xb0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x18) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x1c) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined8 *)((long)puVar1 + 0xb8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x20) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xc0);
    *(undefined8 *)((long)puVar1 + 0xc0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined8 *)((long)puVar1 + 200) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd0);
    *(undefined8 *)((long)puVar1 + 0xd0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd8);
    *(undefined8 *)((long)puVar1 + 0xd8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xe0);
    *(undefined8 *)((long)puVar1 + 0xe0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x24) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xe8);
    *(undefined8 *)((long)puVar1 + 0xe8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xf0);
    *(undefined8 *)((long)puVar1 + 0xf0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x28) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x2c) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xf8);
    *(undefined8 *)((long)puVar1 + 0xf8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x100);
    *(undefined8 *)((long)puVar1 + 0x100) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x108) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x110);
    *(undefined8 *)((long)puVar1 + 0x110) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x118);
    *(undefined8 *)((long)puVar1 + 0x118) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x120);
    *(undefined8 *)((long)puVar1 + 0x120) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x128);
    *(undefined8 *)((long)puVar1 + 0x128) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x30) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x34) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x130);
    *(undefined8 *)((long)puVar1 + 0x130) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x138);
    *(undefined8 *)((long)puVar1 + 0x138) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x140);
    *(undefined8 *)((long)puVar1 + 0x140) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x148);
    *(undefined8 *)((long)puVar1 + 0x148) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xe) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x150);
    *(undefined8 *)((long)puVar1 + 0x150) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x38) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x158);
    *(undefined8 *)((long)puVar1 + 0x158) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x160);
    *(undefined8 *)((long)puVar1 + 0x160) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x3c) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x40) = (int)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6e99f8; end: 10b6e9e8f; -[SCGalleryEntry encodeWithCoder:] */

void FUN_10b6e99f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f71258);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110ec3b98);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f6e8d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f6e8f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f6e918);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f6e398);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x14),
                      &PTR____CFConstantStringClassReference_110f6e3d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f6e938);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f6e958);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110f6e2d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110f6e978);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110ec3ab8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110f6e998);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0xa0),
                      &PTR____CFConstantStringClassReference_110f6e9b8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0xa8),
                      &PTR____CFConstantStringClassReference_110effff8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0xb0),
                      &PTR____CFConstantStringClassReference_110e09cd8);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f6e418);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x1c),
                      &PTR____CFConstantStringClassReference_110f6e458);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0xb8),
                      &PTR____CFConstantStringClassReference_110f6e9d8);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f6e498);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0xc0),
                      &PTR____CFConstantStringClassReference_110f6e9f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 200),
                      &PTR____CFConstantStringClassReference_110f6ea18);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0xd0),
                      &PTR____CFConstantStringClassReference_110f6ea38);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0xd8),
                      &PTR____CFConstantStringClassReference_110f6ea58);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0xe0),
                      &PTR____CFConstantStringClassReference_110f6ea78);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x24),
                      &PTR____CFConstantStringClassReference_110f6e4d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f6e518);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f6e558);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110ec3cd8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110e09cf8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0xe8),
                      &PTR____CFConstantStringClassReference_110f6ea98);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0xf0),
                      &PTR____CFConstantStringClassReference_110f6eab8);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f6e5d8);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x2c),
                      &PTR____CFConstantStringClassReference_110e0a798);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0xf8),
                      &PTR____CFConstantStringClassReference_110f6ead8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x100),
                      &PTR____CFConstantStringClassReference_110f6eaf8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f6e638);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x108),
                      &PTR____CFConstantStringClassReference_110f6e2b8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x110),
                      &PTR____CFConstantStringClassReference_110f6eb18);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x118),
                      &PTR____CFConstantStringClassReference_110f6eb38);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x120),
                      &PTR____CFConstantStringClassReference_110f6eb58);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x128),
                      &PTR____CFConstantStringClassReference_110ec3b78);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f6e678);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x34),
                      &PTR____CFConstantStringClassReference_110f6e6b8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x130),
                      &PTR____CFConstantStringClassReference_110dad858);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x138),
                      &PTR____CFConstantStringClassReference_110f6eb78);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110f6e6f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x140),
                      &PTR____CFConstantStringClassReference_110f6eb98);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x148),
                      &PTR____CFConstantStringClassReference_110df7f58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xe),
                      &PTR____CFConstantStringClassReference_110f6e738);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x150),
                      &PTR____CFConstantStringClassReference_110e63038);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f6e778);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x158),
                      &PTR____CFConstantStringClassReference_110dad0b8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x160),
                      &PTR____CFConstantStringClassReference_110f6ebb8);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x3c),
                      &PTR____CFConstantStringClassReference_110f6e7b8);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f6e7f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e9e90; end: 10b6e9e97; -[SCGalleryEntry preferFasterCoding] */

undefined8 FUN_10b6e9e90(void)

{
  return 1;
}



/* Entry: 10b6e9e98; end: 10b6ea16f; -[SCGalleryEntry encodeWithFasterCoder:] */

void FUN_10b6e9e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x60));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x68));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x10));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x14));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x70));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x78));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x80));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x88));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x90));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x98));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0xa0));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0xa8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0xb0));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x18));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x1c));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0xb8));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x20));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0xc0));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 200));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0xd0));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0xd8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0xe0));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x24));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 8));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 9));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 10));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 0xb));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0xe8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0xf0));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x28));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x2c));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0xf8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x100));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 0xc));
  func_0x00010bf93100(param_3,param_2,*(undefined8 *)(param_1 + 0x108));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x110));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x118));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x120));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x128));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x30));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x34));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x130));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x138));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 0xd));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x140));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x148));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 0xe));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x150));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x38));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x158));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x160));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x3c));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6ea170; end: 10b6ea707; -[SCGalleryEntry decodeWithFasterDecoder:] */

void FUN_10b6ea170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 0x10) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 0x14) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 0x18) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 0x20) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 0x24) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 8) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 9) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 10) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 0xb) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 0x28) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 0x2c) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 0xc) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf67140();
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 0x30) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 0x34) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 0xd) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 0xe) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 0x38) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 0x3c) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf67120();
  _objc_release(param_3);
  *(int *)(param_1 + 0x40) = (int)uVar1;
  return;
}



/* Entry: 10b6ea708; end: 10b6ead17; -[SCGalleryEntry setObject:forUInt64Key:] */

void FUN_10b6ea708(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0x893f310a49b41e) {
    if (param_4 < 0x25b6fe2737e173) {
      if (param_4 < 0xd8000eb9d66d6) {
        if (param_4 < 0x9cce6b3b35a57) {
          if (param_4 == 0x2fb717b9cad1b) {
            lVar2 = 0xd8;
          }
          else {
            if (param_4 != 0x84d602fc0d6a8) goto LAB_10b6ead04;
            lVar2 = 0x128;
          }
        }
        else if (param_4 == 0x9cce6b3b35a57) {
          lVar2 = 0xb8;
        }
        else {
          if (param_4 != 0xa055da7e7f94c) goto LAB_10b6ead04;
          lVar2 = 0xc0;
        }
      }
      else if (param_4 < 0x1b3fc74ca3bd3d) {
        if (param_4 == 0xd8000eb9d66d6) {
          lVar2 = 0x88;
        }
        else {
          if (param_4 != 0x167a394c4e46d5) goto LAB_10b6ead04;
          lVar2 = 0x90;
        }
      }
      else if (param_4 == 0x1b3fc74ca3bd3d) {
        lVar2 = 0x100;
      }
      else {
        if (param_4 != 0x23fd140e74a26f) goto LAB_10b6ead04;
        lVar2 = 0xa8;
      }
    }
    else if (param_4 < 0x6553da12ff1b7d) {
      if (param_4 < 0x355c122a3d2ce8) {
        if (param_4 == 0x25b6fe2737e173) {
          lVar2 = 0x148;
        }
        else {
          if (param_4 != 0x2bcf8d80f4a50b) goto LAB_10b6ead04;
          lVar2 = 0x68;
        }
      }
      else if (param_4 == 0x355c122a3d2ce8) {
        lVar2 = 0xd0;
      }
      else {
        if (param_4 != 0x384150f14ccc51) goto LAB_10b6ead04;
        lVar2 = 0x158;
      }
    }
    else if (param_4 < 0x714b7097f5e312) {
      if (param_4 == 0x6553da12ff1b7d) {
        lVar2 = 0x98;
      }
      else {
        if (param_4 != 0x6fe87c9e604402) goto LAB_10b6ead04;
        lVar2 = 0xb0;
      }
    }
    else if (param_4 == 0x714b7097f5e312) {
      lVar2 = 0x120;
    }
    else if (param_4 == 0x7a5d62ed8c606e) {
      lVar2 = 0x48;
    }
    else {
      if (param_4 != 0x8890f39339fa4f) goto LAB_10b6ead04;
      lVar2 = 0x70;
    }
  }
  else if (param_4 < 0xc93a0a0df35cb7) {
    if (param_4 < 0x9993dd551dd452) {
      if (param_4 < 0x95d443173d3e69) {
        if (param_4 == 0x893f310a49b41e) {
          lVar2 = 0xe0;
        }
        else {
          if (param_4 != 0x903d2bc43d1142) goto LAB_10b6ead04;
          lVar2 = 200;
        }
      }
      else if (param_4 == 0x95d443173d3e69) {
        lVar2 = 0x50;
      }
      else {
        if (param_4 != 0x97e19441b494e4) goto LAB_10b6ead04;
        lVar2 = 0x160;
      }
    }
    else if (param_4 < 0xb37ef6847b5622) {
      if (param_4 == 0x9993dd551dd452) {
        lVar2 = 0x80;
      }
      else {
        if (param_4 != 0x9e4566b13270ea) goto LAB_10b6ead04;
        lVar2 = 0xa0;
      }
    }
    else if (param_4 == 0xb37ef6847b5622) {
      lVar2 = 0x60;
    }
    else if (param_4 == 0xbf134c604a9bff) {
      lVar2 = 0x118;
    }
    else {
      if (param_4 != 0xc8e381a8620d59) goto LAB_10b6ead04;
      lVar2 = 0x110;
    }
  }
  else if (param_4 < 0xea0520dc98f5fd) {
    if (param_4 < 0xd68b1d2783f2cd) {
      if (param_4 == 0xc93a0a0df35cb7) {
        lVar2 = 0x58;
      }
      else {
        if (param_4 != 0xcd5d5a4bd9ab8b) goto LAB_10b6ead04;
        lVar2 = 0x78;
      }
    }
    else if (param_4 == 0xd68b1d2783f2cd) {
      lVar2 = 0x140;
    }
    else {
      if (param_4 != 0xde0248acf09f0c) goto LAB_10b6ead04;
      lVar2 = 0xe8;
    }
  }
  else if (param_4 < 0xebe80011e7abc1) {
    if (param_4 == 0xea0520dc98f5fd) {
      lVar2 = 0x138;
    }
    else {
      if (param_4 != 0xea29dc6e158105) goto LAB_10b6ead04;
      lVar2 = 0x130;
    }
  }
  else if (param_4 == 0xebe80011e7abc1) {
    lVar2 = 0x150;
  }
  else if (param_4 == 0xf7488b6d574040) {
    lVar2 = 0xf8;
  }
  else {
    if (param_4 != 0xfd11701b005072) goto LAB_10b6ead04;
    lVar2 = 0xf0;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10b6ead04:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6ead18; end: 10b6eae2b; -[SCGalleryEntry setBool:forUInt64Key:] */

void FUN_10b6ead18(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 < 0xb380b38948ce65) {
    if (param_4 == 0x5d2312a22efe8c) {
      lVar1 = 0xc;
    }
    else if (param_4 == 0x6304c56c6b6f63) {
      lVar1 = 0xe;
    }
    else {
      if (param_4 != 0x767b0ca4e0a908) {
        return;
      }
      lVar1 = 0xd;
    }
  }
  else if (param_4 < 0xef966dd2036611) {
    if (param_4 == 0xb380b38948ce65) {
      lVar1 = 0xb;
    }
    else {
      if (param_4 != 0xd141eebda611d3) {
        return;
      }
      lVar1 = 10;
    }
  }
  else if (param_4 == 0xfb7d4c69da2609) {
    lVar1 = 8;
  }
  else {
    if (param_4 != 0xef966dd2036611) {
      return;
    }
    lVar1 = 9;
  }
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10b6eae2c; end: 10b6eb02f; -[SCGalleryEntry setSInt32:forUInt64Key:] */

void FUN_10b6eae2c(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 < 0x53af4d6d2aee86) {
    if (param_4 < 0x38d125bd2847e2) {
      if (param_4 == 0x2aeca4853bacb7) {
        lVar1 = 0x1c;
      }
      else if (param_4 == 0x2bbe485b1b6236) {
        lVar1 = 0x34;
      }
      else {
        if (param_4 != 0x3501382f447b5e) {
          return;
        }
        lVar1 = 0x38;
      }
    }
    else if (param_4 == 0x38d125bd2847e2) {
      lVar1 = 0x30;
    }
    else if (param_4 == 0x4b9d65705f91d3) {
      lVar1 = 0x24;
    }
    else {
      if (param_4 != 0x5083adc915883c) {
        return;
      }
      lVar1 = 0x10;
    }
  }
  else if (param_4 < 0x9e061b94e71e92) {
    if (param_4 == 0x53af4d6d2aee86) {
      lVar1 = 0x3c;
    }
    else if (param_4 == 0x7d306b3041d0d0) {
      lVar1 = 0x20;
    }
    else {
      if (param_4 != 0x7e4ca6ed990a64) {
        return;
      }
      lVar1 = 0x14;
    }
  }
  else if (param_4 < 0xcfc593a25210df) {
    if (param_4 == 0x9e061b94e71e92) {
      lVar1 = 0x2c;
    }
    else {
      if (param_4 != 0xb1748eeeaacf78) {
        return;
      }
      lVar1 = 0x18;
    }
  }
  else if (param_4 == 0xcfc593a25210df) {
    lVar1 = 0x40;
  }
  else {
    if (param_4 != 0xe3a70b01379d41) {
      return;
    }
    lVar1 = 0x28;
  }
  *(undefined4 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10b6eb030; end: 10b6eb04f; -[SCGalleryEntry setSInt64:forUInt64Key:] */

void FUN_10b6eb030(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0xe99b76f87e1107) {
    *(undefined8 *)(param_1 + 0x108) = param_3;
  }
  return;
}



/* Entry: 10b6eb050; end: 10b6eb063; +[SCGalleryEntry fasterCodingVersion] */

undefined8 FUN_10b6eb050(void)

{
  return 0xa016e1df97aeb2c7;
}



/* Entry: 10b6eb064; end: 10b6eb06f; +[SCGalleryEntry fasterCodingKeys] */

undefined8 FUN_10b6eb064(void)

{
  return 0x1133bbd78;
}



/* Entry: 10b6eb070; end: 10b6eb237; -[SCGalleryEntry isEqual:] */

bool FUN_10b6eb070(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bc85c34(param_1,param_3,0x1137f7a68,0x1137f7a70,0x38,0x23);
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_3);
    if (((((((*(int *)(param_3 + 0x10) == *(int *)(param_1 + 0x10)) &&
            (*(int *)(param_3 + 0x14) == *(int *)(param_1 + 0x14))) &&
           (*(int *)(param_3 + 0x18) == *(int *)(param_1 + 0x18))) &&
          ((*(int *)(param_3 + 0x1c) == *(int *)(param_1 + 0x1c) &&
           (*(int *)(param_3 + 0x20) == *(int *)(param_1 + 0x20))))) &&
         (((*(int *)(param_3 + 0x24) == *(int *)(param_1 + 0x24) &&
           ((*(char *)(param_3 + 8) == *(char *)(param_1 + 8) &&
            (*(char *)(param_3 + 9) == *(char *)(param_1 + 9))))) &&
          (*(char *)(param_3 + 10) == *(char *)(param_1 + 10))))) &&
        ((((*(char *)(param_3 + 0xb) == *(char *)(param_1 + 0xb) &&
           (*(int *)(param_3 + 0x28) == *(int *)(param_1 + 0x28))) &&
          (*(int *)(param_3 + 0x2c) == *(int *)(param_1 + 0x2c))) &&
         (((*(char *)(param_3 + 0xc) == *(char *)(param_1 + 0xc) &&
           (*(long *)(param_3 + 0x108) == *(long *)(param_1 + 0x108))) &&
          ((*(int *)(param_3 + 0x30) == *(int *)(param_1 + 0x30) &&
           ((*(int *)(param_3 + 0x34) == *(int *)(param_1 + 0x34) &&
            (*(char *)(param_3 + 0xd) == *(char *)(param_1 + 0xd))))))))))) &&
       ((*(char *)(param_3 + 0xe) == *(char *)(param_1 + 0xe) &&
        ((*(int *)(param_3 + 0x38) == *(int *)(param_1 + 0x38) &&
         (*(int *)(param_3 + 0x3c) == *(int *)(param_1 + 0x3c))))))) {
      bVar1 = *(int *)(param_3 + 0x40) == *(int *)(param_1 + 0x40);
    }
    else {
      bVar1 = false;
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b6eb238; end: 10b6eb503; -[SCGalleryEntry hash] */

undefined * FUN_10b6eb238(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ushort uVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong auStack_1f8 [56];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined **)(param_1 + 0x48);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  auStack_1f8[1] = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  auStack_1f8[2] = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  auStack_1f8[3] = uVar3;
  func_0x00010bfde980();
  auStack_1f8[5] = (ulong)(int)*(undefined8 *)(param_1 + 0x10);
  auStack_1f8[6] = (ulong)(int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  auStack_1f8[4] = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  auStack_1f8[7] = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  auStack_1f8[8] = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  auStack_1f8[9] = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  auStack_1f8[10] = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  auStack_1f8[0xb] = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  auStack_1f8[0xc] = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  auStack_1f8[0xd] = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  auStack_1f8[0xe] = uVar4;
  func_0x00010bfde980();
  auStack_1f8[0x10] = (ulong)(int)*(undefined8 *)(param_1 + 0x18);
  auStack_1f8[0x11] = (ulong)(int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  auStack_1f8[0xf] = uVar3;
  func_0x00010bfde980();
  auStack_1f8[0x13] = (ulong)*(int *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  auStack_1f8[0x12] = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 200);
  auStack_1f8[0x14] = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  auStack_1f8[0x15] = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  auStack_1f8[0x16] = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  auStack_1f8[0x17] = uVar4;
  func_0x00010bfde980();
  auStack_1f8[0x19] = (ulong)*(int *)(param_1 + 0x24);
  uVar12 = *(undefined4 *)(param_1 + 8);
  uVar13 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar12 >> 0x18),
                                           (uint6)(byte)((uint)uVar12 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar12) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar12 >> 8),(short)uVar13);
  uVar10 = CONCAT44((int)(uVar13 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar10 >> 0x30),CONCAT24((short)(uVar13 >> 0x20),(int)uVar10)) &
           0xff01ff01ffffffff;
  uVar11 = (ushort)(uVar10 >> 0x30);
  auStack_1f8[0x1a] = (ulong)uVar1 & 0xff;
  auStack_1f8[0x1b] = uVar10 >> 0x10 & 0xff;
  auStack_1f8[0x1c] = (ulong)CONCAT24(uVar11,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  auStack_1f8[0x1d] = (ulong)uVar11;
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  auStack_1f8[0x18] = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  auStack_1f8[0x1e] = uVar4;
  func_0x00010bfde980();
  auStack_1f8[0x20] = (ulong)(int)*(undefined8 *)(param_1 + 0x28);
  auStack_1f8[0x21] = (ulong)(int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0xf8);
  auStack_1f8[0x1f] = uVar3;
  func_0x00010bfde980();
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  auStack_1f8[0x22] = uVar4;
  func_0x00010bfde980();
  auStack_1f8[0x24] = (ulong)*(byte *)(param_1 + 0xc);
  auStack_1f8[0x25] = *(undefined8 *)(param_1 + 0x108);
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  auStack_1f8[0x23] = uVar5;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x118);
  auStack_1f8[0x26] = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x120);
  auStack_1f8[0x27] = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x128);
  auStack_1f8[0x28] = uVar3;
  func_0x00010bfde980();
  auStack_1f8[0x2a] = (ulong)(int)*(undefined8 *)(param_1 + 0x30);
  auStack_1f8[0x2b] = (ulong)(int)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x130);
  auStack_1f8[0x29] = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x138);
  auStack_1f8[0x2c] = uVar3;
  func_0x00010bfde980();
  auStack_1f8[0x2e] = (ulong)*(byte *)(param_1 + 0xd);
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  auStack_1f8[0x2d] = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x148);
  auStack_1f8[0x2f] = uVar3;
  func_0x00010bfde980();
  auStack_1f8[0x31] = (ulong)*(byte *)(param_1 + 0xe);
  uVar3 = *(undefined8 *)(param_1 + 0x150);
  auStack_1f8[0x30] = uVar4;
  func_0x00010bfde980();
  auStack_1f8[0x33] = (ulong)*(int *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x158);
  auStack_1f8[0x32] = uVar3;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x160);
  auStack_1f8[0x34] = uVar4;
  func_0x00010bfde980();
  auStack_1f8[0x35] = lVar6;
  auStack_1f8[0x37] = (long)(int)((ulong)*(undefined8 *)(param_1 + 0x3c) >> 0x20);
  auStack_1f8[0x36] = (long)(int)*(undefined8 *)(param_1 + 0x3c);
  lVar9 = 8;
  do {
    uVar10 = *(ulong *)((long)auStack_1f8 + lVar9) | (long)puVar2 << 0x20;
    uVar10 = ~uVar10 + uVar10 * 0x40000;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    puVar2 = (undefined *)(uVar10 ^ uVar10 >> 0x16);
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x1c0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar3 = *(undefined8 *)(lVar6 + 0x48);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71278);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x50);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f714b8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x58);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f714d8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x60);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f714f8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x68);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71518);
  _objc_release(uVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar6 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71538);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar6 + 0x14));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71558);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar3 = *(undefined8 *)(lVar6 + 0x70);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71578);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x78);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71598);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x80);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f713f8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x88);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f715b8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x90);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f715d8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x98);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f715f8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0xa0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71618);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0xa8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71638);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0xb0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71658);
  _objc_release(uVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar6 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71678);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar6 + 0x1c));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71698);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar3 = *(undefined8 *)(lVar6 + 0xb8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f716b8);
  _objc_release(uVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar6 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f716d8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar3 = *(undefined8 *)(lVar6 + 0xc0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f716f8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 200);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71718);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0xd0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71738);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0xd8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71758);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0xe0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71778);
  _objc_release(uVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar6 + 0x24));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71798);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar6 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f717b8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar6 + 9));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f717d8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar6 + 10));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f717f8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar6 + 0xb));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71818);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar3 = *(undefined8 *)(lVar6 + 0xe8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71838);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0xf0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71858);
  _objc_release(uVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar6 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71878);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar6 + 0x2c));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71898);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar3 = *(undefined8 *)(lVar6 + 0xf8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f718b8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x100);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f718d8);
  _objc_release(uVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar6 + 0xc));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f718f8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(lVar6 + 0x108));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71458);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar3 = *(undefined8 *)(lVar6 + 0x110);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71918);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x118);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71938);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x120);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71958);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x128);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71978);
  _objc_release(uVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar6 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71998);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar6 + 0x34));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f719b8);
  _objc_release(puVar7);
  _objc_release(puVar8);
  uVar3 = *(undefined8 *)(lVar6 + 0x130);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f719d8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x138);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f719f8);
  _objc_release(uVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar6 + 0xd));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71a18);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar3 = *(undefined8 *)(lVar6 + 0x140);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71a38);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x148);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71a58);
  _objc_release(uVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar6 + 0xe));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71a78);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar3 = *(undefined8 *)(lVar6 + 0x150);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71a98);
  _objc_release(uVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar6 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71ab8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar3 = *(undefined8 *)(lVar6 + 0x158);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71ad8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x160);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71af8);
  _objc_release(uVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar6 + 0x3c));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71b18);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar6 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f71b38);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010bf070e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e59558);
  puVar7 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return puVar7;
}



/* Entry: 10b6eb504; end: 10b6ec253; -[SCGalleryEntry description] */

void FUN_10b6eb504(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71278);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f714b8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f714d8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f714f8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71518);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71538);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x14));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71558);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71578);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71598);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f713f8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f715b8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f715d8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f715f8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71618);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71638);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71658);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71678);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x1c));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71698);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f716b8);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f716d8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f716f8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 200);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71718);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71738);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71758);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71778);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x24));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71798);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f717b8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 9));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f717d8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 10));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f717f8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0xb));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71818);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71838);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71858);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71878);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x2c));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71898);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f718b8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f718d8);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0xc));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f718f8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x108))
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71458);
  _objc_release(puVar3);
  _objc_release(puVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71918);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71938);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71958);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71978);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71998);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x34));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f719b8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f719d8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f719f8);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0xd));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71a18);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71a38);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71a58);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0xe));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71a78);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71a98);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71ab8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71ad8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x160);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71af8);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x3c));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71b18);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71b38);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59558);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b6ec254; end: 10b6ec25b; -[SCGalleryEntry objectID] */

undefined8 FUN_10b6ec254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b6ec25c; end: 10b6ec263; -[SCGalleryEntry autosaveTimeUtc] */

undefined8 FUN_10b6ec25c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b6ec264; end: 10b6ec26b; -[SCGalleryEntry bitmojiComicId] */

undefined8 FUN_10b6ec264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b6ec26c; end: 10b6ec273; -[SCGalleryEntry clientGenStoryItemOrders] */

undefined8 FUN_10b6ec26c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b6ec274; end: 10b6ec27b; -[SCGalleryEntry clientGenStoryRetryCount] */

undefined8 FUN_10b6ec274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b6ec27c; end: 10b6ec283; -[SCGalleryEntry clientProcessingBitMaskType] */

undefined4 FUN_10b6ec27c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b6ec284; end: 10b6ec28b; -[SCGalleryEntry clientProcessingType] */

undefined4 FUN_10b6ec284(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10b6ec28c; end: 10b6ec293; -[SCGalleryEntry collageUCOLensId] */

undefined8 FUN_10b6ec28c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b6ec294; end: 10b6ec29b; -[SCGalleryEntry collectionAttributes] */

undefined8 FUN_10b6ec294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b6ec29c; end: 10b6ec2a3; -[SCGalleryEntry createTimeUtc] */

undefined8 FUN_10b6ec29c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b6ec2a4; end: 10b6ec2ab; -[SCGalleryEntry creatorUserId] */

undefined8 FUN_10b6ec2a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b6ec2ac; end: 10b6ec2b3; -[SCGalleryEntry dataVaultEncryption] */

undefined8 FUN_10b6ec2ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b6ec2b4; end: 10b6ec2bb; -[SCGalleryEntry duplicateTimeUtc] */

undefined8 FUN_10b6ec2b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b6ec2bc; end: 10b6ec2c3; -[SCGalleryEntry earliestSnapCreateTimeUtc] */

undefined8 FUN_10b6ec2bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b6ec2c4; end: 10b6ec2cb; -[SCGalleryEntry encryption] */

undefined8 FUN_10b6ec2c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b6ec2cc; end: 10b6ec2d3; -[SCGalleryEntry entryId] */

undefined8 FUN_10b6ec2cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10b6ec2d4; end: 10b6ec2db; -[SCGalleryEntry entrySource] */

undefined4 FUN_10b6ec2d4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10b6ec2dc; end: 10b6ec2e3; -[SCGalleryEntry expectedClientGenSnapsCount] */

undefined4 FUN_10b6ec2dc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 10b6ec2e4; end: 10b6ec2eb; -[SCGalleryEntry externalId] */

undefined8 FUN_10b6ec2e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10b6ec2ec; end: 10b6ec2f3; -[SCGalleryEntry fallbackFeaturedStoryCategory] */

undefined4 FUN_10b6ec2ec(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10b6ec2f4; end: 10b6ec2fb; -[SCGalleryEntry featuredExpirationTimeUtc] */

undefined8 FUN_10b6ec2f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10b6ec2fc; end: 10b6ec303; -[SCGalleryEntry featuredStoryActivationDateUtc] */

undefined8 FUN_10b6ec2fc(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10b6ec304; end: 10b6ec30b; -[SCGalleryEntry featuredStoryLoggingInfo] */

undefined8 FUN_10b6ec304(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10b6ec30c; end: 10b6ec313; -[SCGalleryEntry featuredStoryTemplateName] */

undefined8 FUN_10b6ec30c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10b6ec314; end: 10b6ec31b; -[SCGalleryEntry folderType] */

undefined8 FUN_10b6ec314(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10b6ec31c; end: 10b6ec323; -[SCGalleryEntry galleryType] */

undefined4 FUN_10b6ec31c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



/* Entry: 10b6ec324; end: 10b6ec32b; -[SCGalleryEntry isAutoClusterPrototype] */

undefined1 FUN_10b6ec324(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6ec32c; end: 10b6ec333; -[SCGalleryEntry isHidden] */

undefined1 FUN_10b6ec32c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b6ec334; end: 10b6ec33b; -[SCGalleryEntry isPrivate] */

undefined1 FUN_10b6ec334(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b6ec33c; end: 10b6ec343; -[SCGalleryEntry isTemporary] */

undefined1 FUN_10b6ec33c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b6ec344; end: 10b6ec34b; -[SCGalleryEntry latestSnapCaptureTimeUtc] */

undefined8 FUN_10b6ec344(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10b6ec34c; end: 10b6ec353; -[SCGalleryEntry memDataId] */

undefined8 FUN_10b6ec34c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10b6ec354; end: 10b6ec35b; -[SCGalleryEntry pendingSyncs] */

undefined4 FUN_10b6ec354(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


