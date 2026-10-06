/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10800a270; end: 10800a2b3; -[SCMemoriesDataMutatorSnapAssetMedia internalInit] */

void FUN_10800a270(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fc1a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10800a2b4; end: 10800a337; -[SCMemoriesDataMutatorSnapAssetMedia matchAssetDataPackage:assetCloudFile:] */

void FUN_10800a2b4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10800a31c;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10800a31c;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10800a31c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10800a338; end: 10800a367; -[SCMemoriesDataMutatorSnapAssetMedia .cxx_destruct] */

void FUN_10800a338(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10800a368; end: 10800a4b3; -[SCMemoriesPreviewEncryptedMediaFile initWithKey:iv:mediaFileContent:isPrivate:hasOptimizedForNetworkUse:additionalKey:additionalIv:] */

undefined1 *
FUN_10800a368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
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
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fc1b0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10800a4b4; end: 10800a4bb; -[SCMemoriesPreviewEncryptedMediaFile key] */

undefined8 FUN_10800a4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10800a4bc; end: 10800a4c3; -[SCMemoriesPreviewEncryptedMediaFile iv] */

undefined8 FUN_10800a4bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10800a4c4; end: 10800a4cb; -[SCMemoriesPreviewEncryptedMediaFile mediaFileContent] */

undefined8 FUN_10800a4c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10800a4cc; end: 10800a4d3; -[SCMemoriesPreviewEncryptedMediaFile isPrivate] */

undefined1 FUN_10800a4cc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10800a4d4; end: 10800a4db; -[SCMemoriesPreviewEncryptedMediaFile hasOptimizedForNetworkUse] */

undefined1 FUN_10800a4d4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10800a4dc; end: 10800a4e3; -[SCMemoriesPreviewEncryptedMediaFile additionalKey] */

undefined8 FUN_10800a4dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10800a4e4; end: 10800a4eb; -[SCMemoriesPreviewEncryptedMediaFile additionalIv] */

undefined8 FUN_10800a4e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10800a4ec; end: 10800a53f; -[SCMemoriesPreviewEncryptedMediaFile .cxx_destruct] */

void FUN_10800a4ec(long param_1)

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



/* Entry: 10800a540; end: 10800a7d7; -[SCMemoriesStorySnap initWithMediaType:source:originalMediaURL:renderedOverlayURL:assetURLs:duration:createTimeUtc:orientation:sojuOverlay:framing:location:infiniteDuration:storySnapId:attributionString:captureTimeUtc:servletMediaFormat:] */

undefined8 *
FUN_10800a540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_78 = PTR_PTR_1126fc1b8;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    puVar1[2] = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    puVar1[6] = param_1;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    puVar1[8] = param_10;
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
    *(undefined1 *)(puVar1 + 1) = param_14;
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 10800a7d8; end: 10800a7fb; -[SCMemoriesStorySnap copyWithZone:] */

undefined8 FUN_10800a7d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10800a7fc; end: 10800a803; -[SCMemoriesStorySnap mediaType] */

undefined4 FUN_10800a7fc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10800a804; end: 10800a80b; -[SCMemoriesStorySnap source] */

undefined8 FUN_10800a804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10800a80c; end: 10800a813; -[SCMemoriesStorySnap originalMediaURL] */

undefined8 FUN_10800a80c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10800a814; end: 10800a81b; -[SCMemoriesStorySnap renderedOverlayURL] */

undefined8 FUN_10800a814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10800a81c; end: 10800a823; -[SCMemoriesStorySnap assetURLs] */

undefined8 FUN_10800a81c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10800a824; end: 10800a82b; -[SCMemoriesStorySnap duration] */

undefined8 FUN_10800a824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10800a82c; end: 10800a833; -[SCMemoriesStorySnap createTimeUtc] */

undefined8 FUN_10800a82c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10800a834; end: 10800a83b; -[SCMemoriesStorySnap orientation] */

undefined8 FUN_10800a834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10800a83c; end: 10800a843; -[SCMemoriesStorySnap sojuOverlay] */

undefined8 FUN_10800a83c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10800a844; end: 10800a84b; -[SCMemoriesStorySnap framing] */

undefined8 FUN_10800a844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10800a84c; end: 10800a853; -[SCMemoriesStorySnap location] */

undefined8 FUN_10800a84c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10800a854; end: 10800a85b; -[SCMemoriesStorySnap infiniteDuration] */

undefined1 FUN_10800a854(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10800a85c; end: 10800a863; -[SCMemoriesStorySnap storySnapId] */

undefined8 FUN_10800a85c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10800a864; end: 10800a86b; -[SCMemoriesStorySnap attributionString] */

undefined8 FUN_10800a864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10800a86c; end: 10800a873; -[SCMemoriesStorySnap captureTimeUtc] */

undefined8 FUN_10800a86c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10800a874; end: 10800a87b; -[SCMemoriesStorySnap servletMediaFormat] */

undefined8 FUN_10800a874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10800a87c; end: 10800a917; -[SCMemoriesStorySnap .cxx_destruct] */

void FUN_10800a87c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10800a918; end: 10800a933; +[SCMemoriesStorySnapBuilder memoriesStorySnap] */

void FUN_10800a918(void)

{
  _objc_alloc_init(PTR_PTR_1126d5348);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10800a934; end: 10800ad2b; +[SCMemoriesStorySnapBuilder memoriesStorySnapFromExistingMemoriesStorySnap:] */

void FUN_10800a934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  
  puVar1 = PTR_PTR_1126d5348;
  _objc_retain(param_3);
  func_0x00010c0c9de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c6c20(param_3);
  puVar3 = puVar1;
  func_0x00010c2b3b00(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c247520(param_3);
  puVar4 = puVar3;
  func_0x00010c2b9b80(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ed6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2b5140(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c130560();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b6da0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf0b860();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2a8820(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160(param_3);
  puVar10 = puVar9;
  func_0x00010c2acb40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2ab360(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c0ed100(param_3);
  puVar14 = puVar12;
  func_0x00010c2b5080(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c246660();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c2b9ae0(puVar14,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bfb73c0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2ae660(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010c2b3020(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010bfed740(param_3);
  puVar21 = puVar19;
  func_0x00010c2afc60(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c25b200(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010c2ba680(puVar21,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_3;
  func_0x00010bf0eb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010c2a8b60(puVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010bf313a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar24;
  func_0x00010c2aa240(puVar24,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_3;
  func_0x00010c15fa20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar28 = puVar26;
  func_0x00010c2b84e0(puVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar27);
  _objc_release(puVar26);
  _objc_release(uVar25);
  _objc_release(puVar24);
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release(uVar20);
  _objc_release(puVar21);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar13);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar28);
  return;
}



/* Entry: 10800ad2c; end: 10800ad9b; -[SCMemoriesStorySnapBuilder build] */

void FUN_10800ad2c(long param_1)

{
  _objc_alloc(PTR_PTR_1126d8db0);
  func_0x00010c02a080(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10800ad9c; end: 10800ada3; -[SCMemoriesStorySnapBuilder withMediaType:] */

void FUN_10800ad9c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10800ada4; end: 10800adab; -[SCMemoriesStorySnapBuilder withSource:] */

void FUN_10800ada4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10800adac; end: 10800ade3; -[SCMemoriesStorySnapBuilder withOriginalMediaURL:] */

long FUN_10800adac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800ade4; end: 10800ae1b; -[SCMemoriesStorySnapBuilder withRenderedOverlayURL:] */

long FUN_10800ade4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800ae1c; end: 10800ae53; -[SCMemoriesStorySnapBuilder withAssetURLs:] */

long FUN_10800ae1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800ae54; end: 10800ae5b; -[SCMemoriesStorySnapBuilder withDuration:] */

void FUN_10800ae54(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 10800ae5c; end: 10800ae93; -[SCMemoriesStorySnapBuilder withCreateTimeUtc:] */

long FUN_10800ae5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800ae94; end: 10800ae9b; -[SCMemoriesStorySnapBuilder withOrientation:] */

void FUN_10800ae94(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10800ae9c; end: 10800aed3; -[SCMemoriesStorySnapBuilder withSojuOverlay:] */

long FUN_10800ae9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800aed4; end: 10800af0b; -[SCMemoriesStorySnapBuilder withFraming:] */

long FUN_10800aed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800af0c; end: 10800af43; -[SCMemoriesStorySnapBuilder withLocation:] */

long FUN_10800af0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800af44; end: 10800af4b; -[SCMemoriesStorySnapBuilder withInfiniteDuration:] */

void FUN_10800af44(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10800af4c; end: 10800af83; -[SCMemoriesStorySnapBuilder withStorySnapId:] */

long FUN_10800af4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800af84; end: 10800afbb; -[SCMemoriesStorySnapBuilder withAttributionString:] */

long FUN_10800af84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800afbc; end: 10800aff3; -[SCMemoriesStorySnapBuilder withCaptureTimeUtc:] */

long FUN_10800afbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800aff4; end: 10800b02b; -[SCMemoriesStorySnapBuilder withServletMediaFormat:] */

long FUN_10800aff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800b02c; end: 10800b0c7; -[SCMemoriesStorySnapBuilder .cxx_destruct] */

void FUN_10800b02c(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10800b0c8; end: 10800b1af; -[SCDataVaultEncryption initWithLocation:key:IV:isEncrypted:] */

undefined1 *
FUN_10800b0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

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
  puStack_48 = PTR_PTR_1126fc1c0;
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
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10800b1b0; end: 10800b1d3; -[SCDataVaultEncryption copyWithZone:] */

undefined8 FUN_10800b1b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10800b1d4; end: 10800b2bf; -[SCDataVaultEncryption initWithCoder:] */

undefined1 * FUN_10800b1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc1c0;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10800b2c0; end: 10800b347; -[SCDataVaultEncryption encodeWithCoder:] */

void FUN_10800b2c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dad538);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110dc1758);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e8a338);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110ecf0d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10800b348; end: 10800b34f; -[SCDataVaultEncryption preferFasterCoding] */

undefined8 FUN_10800b348(void)

{
  return 1;
}



/* Entry: 10800b350; end: 10800b3b7; -[SCDataVaultEncryption encodeWithFasterCoder:] */

void FUN_10800b350(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10800b3b8; end: 10800b457; -[SCDataVaultEncryption decodeWithFasterDecoder:] */

void FUN_10800b3b8(long param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010bf66cc0();
  *(char *)(param_1 + 8) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10800b458; end: 10800b4ff; -[SCDataVaultEncryption setObject:forUInt64Key:] */

void FUN_10800b458(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0x5e4707d1571c1e) {
    lVar2 = 0x20;
  }
  else if (param_4 == 0x81cb80a9d35087) {
    lVar2 = 0x10;
  }
  else {
    if (param_4 != 0x5e8c51061047e5) goto LAB_10800b4ec;
    lVar2 = 0x18;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10800b4ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10800b500; end: 10800b51f; -[SCDataVaultEncryption setBool:forUInt64Key:] */

void FUN_10800b500(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  if (param_4 == 0xaa8d696cdeb1bf) {
    *(undefined1 *)(param_1 + 8) = param_3;
  }
  return;
}



/* Entry: 10800b520; end: 10800b533; +[SCDataVaultEncryption fasterCodingVersion] */

undefined8 FUN_10800b520(void)

{
  return 0x169c12a4a31484e3;
}



/* Entry: 10800b534; end: 10800b53f; +[SCDataVaultEncryption fasterCodingKeys] */

undefined8 FUN_10800b534(void)

{
  return 0x11324fdc8;
}



/* Entry: 10800b540; end: 10800b5af; -[SCDataVaultEncryption isEqual:] */

bool FUN_10800b540(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bc85c34(param_1,param_3,0x113728af8,0x113728b00,4,3);
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_3 + 8) == *(char *)(param_1 + 8);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10800b5b0; end: 10800b667; -[SCDataVaultEncryption hash] */

ulong FUN_10800b5b0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong auStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bfde980(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  lVar3 = *(long *)(param_1 + 0x20);
  auStack_48[1] = uVar2;
  func_0x00010bfde980();
  auStack_48[2] = lVar3;
  auStack_48[3] = (ulong)*(byte *)(param_1 + 8);
  lVar4 = 8;
  do {
    uVar1 = *(ulong *)((long)auStack_48 + lVar4) | uVar1 << 0x20;
    uVar1 = ~uVar1 + uVar1 * 0x40000;
    uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
    uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
    uVar1 = uVar1 ^ uVar1 >> 0x16;
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar1;
  }
  ___stack_chk_fail();
  return *(ulong *)(lVar3 + 0x10);
}



/* Entry: 10800b668; end: 10800b66f; -[SCDataVaultEncryption location] */

undefined8 FUN_10800b668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10800b670; end: 10800b677; -[SCDataVaultEncryption key] */

undefined8 FUN_10800b670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10800b678; end: 10800b67f; -[SCDataVaultEncryption IV] */

undefined8 FUN_10800b678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10800b680; end: 10800b687; -[SCDataVaultEncryption isEncrypted] */

undefined1 FUN_10800b680(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10800b688; end: 10800b6c3; -[SCDataVaultEncryption .cxx_destruct] */

void FUN_10800b688(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10800b6c4; end: 10800b85b; -[SCCloudCreateOrExtendEntrySnapshotV2 initWithProfile:entryPlaceholder:snapPlaceholder:detailPlaceholder:miniThumbnailPlaceholder:dataVaultEncryption:userContext:] */

undefined1 *
FUN_10800b6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fc1c8;
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
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10800b85c; end: 10800b87f; -[SCCloudCreateOrExtendEntrySnapshotV2 copyWithZone:] */

undefined8 FUN_10800b85c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10800b880; end: 10800b9f7; -[SCCloudCreateOrExtendEntrySnapshotV2 initWithCoder:] */

undefined1 * FUN_10800b880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc1c8;
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



/* Entry: 10800b9f8; end: 10800babb; -[SCCloudCreateOrExtendEntrySnapshotV2 encodeWithCoder:] */

void FUN_10800b9f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110db7358);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ec3a18);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ec3a38);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ec3a58);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ec3a78);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ec3ab8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ec3ad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10800babc; end: 10800bac3; -[SCCloudCreateOrExtendEntrySnapshotV2 preferFasterCoding] */

undefined8 FUN_10800babc(void)

{
  return 1;
}



/* Entry: 10800bac4; end: 10800bb4f; -[SCCloudCreateOrExtendEntrySnapshotV2 encodeWithFasterCoder:] */

void FUN_10800bac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10800bb50; end: 10800bc63; -[SCCloudCreateOrExtendEntrySnapshotV2 decodeWithFasterDecoder:] */

void FUN_10800bb50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
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
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
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
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10800bc64; end: 10800bdbb; -[SCCloudCreateOrExtendEntrySnapshotV2 setObject:forUInt64Key:] */

void FUN_10800bc64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0xbebd496837cd35) {
    if (param_4 == 0x42ac6515a7b83c) {
      lVar2 = 0x28;
    }
    else if (param_4 == 0x4d969e58d7e35f) {
      lVar2 = 0x30;
    }
    else {
      if (param_4 != 0xbea73cae45f568) goto LAB_10800bda8;
      lVar2 = 8;
    }
  }
  else if (param_4 < 0xd8cbb78ae60655) {
    if (param_4 == 0xbebd496837cd35) {
      lVar2 = 0x10;
    }
    else {
      if (param_4 != 0xd5da843e5f33a2) goto LAB_10800bda8;
      lVar2 = 0x38;
    }
  }
  else if (param_4 == 0xd8cbb78ae60655) {
    lVar2 = 0x18;
  }
  else {
    if (param_4 != 0xff507bca054094) goto LAB_10800bda8;
    lVar2 = 0x20;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10800bda8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10800bdbc; end: 10800bdcf; +[SCCloudCreateOrExtendEntrySnapshotV2 fasterCodingVersion] */

undefined8 FUN_10800bdbc(void)

{
  return 0xb03f3cf5882878cb;
}



/* Entry: 10800bdd0; end: 10800bddb; +[SCCloudCreateOrExtendEntrySnapshotV2 fasterCodingKeys] */

undefined8 FUN_10800bdd0(void)

{
  return 0x11324fe50;
}



/* Entry: 10800bddc; end: 10800bdf7; -[SCCloudCreateOrExtendEntrySnapshotV2 isEqual:] */

undefined8 * FUN_10800bddc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar4 = (long *)0x113728b20;
  if (param_1 == param_3) {
    return (undefined8 *)0x1;
  }
  lVar3 = 7;
  lVar5 = 7;
  _objc_opt_class();
  puVar2 = param_3;
  func_0x00010c077980();
  if ((int)puVar2 != 0) {
    if ((bRam0000000113728b18 & 1) == 0) {
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
          *(char **)(lVar7 * 8 + 0x113728b20) = pcVar6;
          lVar7 = lVar7 + 1;
        }
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      _free(puVar2);
      DataMemoryBarrier(2,3);
      bRam0000000113728b18 = 1;
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



/* Entry: 10800bdf8; end: 10800be0b; -[SCCloudCreateOrExtendEntrySnapshotV2 hash] */

ulong FUN_10800bdf8(undefined8 *param_1)

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
  
  plVar5 = (long *)0x113728b20;
  if ((bRam0000000113728b18 & 1) == 0) {
    puVar1 = param_1;
    _objc_opt_class();
    _class_copyIvarList();
    lVar7 = 0;
    lVar9 = 7;
    puVar8 = puVar1;
    do {
      pcVar6 = (char *)*puVar8;
      pcVar2 = pcVar6;
      _ivar_getTypeEncoding();
      if (*pcVar2 == '@') {
        _ivar_getOffset();
        *(char **)(lVar7 * 8 + 0x113728b20) = pcVar6;
        lVar7 = lVar7 + 1;
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    _free(puVar1);
    DataMemoryBarrier(2,3);
    bRam0000000113728b18 = 1;
  }
  uVar3 = *(ulong *)((long)param_1 + lRam0000000113728b20);
  func_0x00010bfde980(uVar3);
  lVar7 = 6;
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



/* Entry: 10800be0c; end: 10800be13; -[SCCloudCreateOrExtendEntrySnapshotV2 profile] */

undefined8 FUN_10800be0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10800be14; end: 10800be1b; -[SCCloudCreateOrExtendEntrySnapshotV2 entryPlaceholder] */

undefined8 FUN_10800be14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10800be1c; end: 10800be23; -[SCCloudCreateOrExtendEntrySnapshotV2 snapPlaceholder] */

undefined8 FUN_10800be1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10800be24; end: 10800be2b; -[SCCloudCreateOrExtendEntrySnapshotV2 detailPlaceholder] */

undefined8 FUN_10800be24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10800be2c; end: 10800be33; -[SCCloudCreateOrExtendEntrySnapshotV2 miniThumbnailPlaceholder] */

undefined8 FUN_10800be2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10800be34; end: 10800be3b; -[SCCloudCreateOrExtendEntrySnapshotV2 dataVaultEncryption] */

undefined8 FUN_10800be34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10800be3c; end: 10800be43; -[SCCloudCreateOrExtendEntrySnapshotV2 userContext] */

undefined8 FUN_10800be3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10800be44; end: 10800beaf; -[SCCloudCreateOrExtendEntrySnapshotV2 .cxx_destruct] */

void FUN_10800be44(long param_1)

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



/* Entry: 10800beb0; end: 10800c04f; +[SCCloudCreateOrExtendEntrySnapshotV2Builder withCloudCreateOrExtendEntrySnapshotV2:] */

void FUN_10800beb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d8db8;
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
  func_0x00010bf973c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c242480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf6f600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0ce240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar1 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf64980();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2917c0();
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



/* Entry: 10800c050; end: 10800c097; -[SCCloudCreateOrExtendEntrySnapshotV2Builder build] */

void FUN_10800c050(void)

{
  _objc_alloc(PTR_PTR_1126d82b8);
  func_0x00010c03abe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10800c098; end: 10800c0cf; -[SCCloudCreateOrExtendEntrySnapshotV2Builder setProfile:] */

long FUN_10800c098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800c0d0; end: 10800c107; -[SCCloudCreateOrExtendEntrySnapshotV2Builder setEntryPlaceholder:] */

long FUN_10800c0d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800c108; end: 10800c13f; -[SCCloudCreateOrExtendEntrySnapshotV2Builder setSnapPlaceholder:] */

long FUN_10800c108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800c140; end: 10800c177; -[SCCloudCreateOrExtendEntrySnapshotV2Builder setDetailPlaceholder:] */

long FUN_10800c140(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800c178; end: 10800c1af; -[SCCloudCreateOrExtendEntrySnapshotV2Builder setMiniThumbnailPlaceholder:] */

long FUN_10800c178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800c1b0; end: 10800c1e7; -[SCCloudCreateOrExtendEntrySnapshotV2Builder setDataVaultEncryption:] */

long FUN_10800c1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800c1e8; end: 10800c21f; -[SCCloudCreateOrExtendEntrySnapshotV2Builder setUserContext:] */

long FUN_10800c1e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800c220; end: 10800c28b; -[SCCloudCreateOrExtendEntrySnapshotV2Builder .cxx_destruct] */

void FUN_10800c220(long param_1)

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



/* Entry: 10800c28c; end: 10800c347;  */

void FUN_10800c28c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010bfeea60();
  _objc_release(param_1);
  func_0x00010c1ec620(puVar1,param_2,0);
  func_0x00010bf66f40(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec36b8);
  puVar2 = puVar1;
  func_0x00010bf67000(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec36d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d8dc0;
  _objc_alloc(PTR_PTR_1126d8dc0);
  func_0x00010c04a280();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


