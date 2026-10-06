/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6a4228; end: 10b6a426b; -[_SCCDCloudSyncOperationSnapshot setSeqNumValue:] */

void FUN_10b6a4228(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a426c; end: 10b6a42a7; -[_SCCDCloudSyncOperationSnapshot primitiveSeqNumValue] */

undefined8 FUN_10b6a426c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1137e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b4ca0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a42a8; end: 10b6a42eb; -[_SCCDCloudSyncOperationSnapshot setPrimitiveSeqNumValue:] */

void FUN_10b6a42a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3140(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a42ec; end: 10b6a42f7; +[SCCDCloudSyncOperationSnapshotAttributes createTimeUtc] */

undefined ** FUN_10b6a42ec(void)

{
  return &PTR____CFConstantStringClassReference_110f6e2d8;
}



/* Entry: 10b6a42f8; end: 10b6a4303; +[SCCDCloudSyncOperationSnapshotAttributes payload] */

undefined ** FUN_10b6a42f8(void)

{
  return &PTR____CFConstantStringClassReference_110df8598;
}



/* Entry: 10b6a4304; end: 10b6a430f; +[SCCDCloudSyncOperationSnapshotAttributes requestID] */

undefined ** FUN_10b6a4304(void)

{
  return &PTR____CFConstantStringClassReference_110f6e2f8;
}



/* Entry: 10b6a4310; end: 10b6a431b; +[SCCDCloudSyncOperationSnapshotAttributes seqNum] */

undefined ** FUN_10b6a4310(void)

{
  return &PTR____CFConstantStringClassReference_110f6e2b8;
}



/* Entry: 10b6a431c; end: 10b6a4327; +[SCCDCloudSyncOperationSnapshotAttributes tacomaOperationId_DEPRECATED] */

undefined ** FUN_10b6a431c(void)

{
  return &PTR____CFConstantStringClassReference_110f6e318;
}



/* Entry: 10b6a4328; end: 10b6a4333; +[SCCDCloudSyncOperationSnapshotAttributes targetEntryId] */

undefined ** FUN_10b6a4328(void)

{
  return &PTR____CFConstantStringClassReference_110f6e338;
}



/* Entry: 10b6a4334; end: 10b6a433f; +[SCCDCloudSyncOperationSnapshotRelationships owner] */

undefined ** FUN_10b6a4334(void)

{
  return &PTR____CFConstantStringClassReference_110ea4598;
}



/* Entry: 10b6a4340; end: 10b6a4357; +[_SCCDGalleryEntry insertInManagedObjectContext:] */

void FUN_10b6a4340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_insertNewObjectForEntityForName__1125f74c0,
             &PTR____CFConstantStringClassReference_110f6e358,param_3);
  return;
}



/* Entry: 10b6a4358; end: 10b6a4363; +[_SCCDGalleryEntry entityName] */

undefined ** FUN_10b6a4358(void)

{
  return &PTR____CFConstantStringClassReference_110f6e358;
}



/* Entry: 10b6a4364; end: 10b6a437b; +[_SCCDGalleryEntry entityInManagedObjectContext:] */

void FUN_10b6a4364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_entityForName_inManagedObjectCon_1125c3520,
             &PTR____CFConstantStringClassReference_110f6e358,param_3);
  return;
}



/* Entry: 10b6a437c; end: 10b6a43b7; -[_SCCDGalleryEntry objectID] */

void FUN_10b6a437c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709c70;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_objectID_112615a70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6a43b8; end: 10b6a47c3; +[_SCCDGalleryEntry keyPathsForValuesAffectingValueForKey:] */

void FUN_10b6a43b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112709c78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_keyPathsForValuesAffectingValueF_112543760,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((((((((int)uVar2 == 0) && (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)) &&
         (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)) &&
        (((uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0 &&
          (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)) &&
         ((uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0 &&
          ((uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0 &&
           (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)))))))) &&
       ((uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0 &&
        (((uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0 &&
          (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)) &&
         (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)))))) &&
      (((uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0 &&
        (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)) &&
       (((uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0 &&
         ((uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0 &&
          (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)))) &&
        (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)))))) &&
     (((uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0 &&
       (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)) &&
      (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)))) {
    _objc_retain(puVar1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c174c00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_retain(puVar4);
    _objc_release(puVar3);
    puVar1 = (undefined8 *)puVar4;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6a47c4; end: 10b6a47ff; -[_SCCDGalleryEntry clientProcessingBitMaskTypeValue] */

undefined8 FUN_10b6a47c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf3d240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4800; end: 10b6a4843; -[_SCCDGalleryEntry setClientProcessingBitMaskTypeValue:] */

void FUN_10b6a4800(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cee0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a4844; end: 10b6a487f; -[_SCCDGalleryEntry primitiveClientProcessingBitMaskTypeValue] */

undefined8 FUN_10b6a4844(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1132a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4880; end: 10b6a48c3; -[_SCCDGalleryEntry setPrimitiveClientProcessingBitMaskTypeValue:] */

void FUN_10b6a4880(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2c00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a48c4; end: 10b6a48ff; -[_SCCDGalleryEntry clientProcessingTypeValue] */

undefined8 FUN_10b6a48c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf3d2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4900; end: 10b6a4943; -[_SCCDGalleryEntry setClientProcessingTypeValue:] */

void FUN_10b6a4900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cf60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a4944; end: 10b6a497f; -[_SCCDGalleryEntry primitiveClientProcessingTypeValue] */

undefined8 FUN_10b6a4944(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1132c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4980; end: 10b6a49c3; -[_SCCDGalleryEntry setPrimitiveClientProcessingTypeValue:] */

void FUN_10b6a4980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2c20(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a49c4; end: 10b6a49ff; -[_SCCDGalleryEntry entrySourceValue] */

undefined8 FUN_10b6a49c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf977c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4a00; end: 10b6a4a43; -[_SCCDGalleryEntry setEntrySourceValue:] */

void FUN_10b6a4a00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196b00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a4a44; end: 10b6a4a7f; -[_SCCDGalleryEntry primitiveEntrySourceValue] */

undefined8 FUN_10b6a4a44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4a80; end: 10b6a4ac3; -[_SCCDGalleryEntry setPrimitiveEntrySourceValue:] */

void FUN_10b6a4a80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2d80(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a4ac4; end: 10b6a4aff; -[_SCCDGalleryEntry expectedClientGenSnapsCountValue] */

undefined8 FUN_10b6a4ac4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf9c1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4b00; end: 10b6a4b43; -[_SCCDGalleryEntry setExpectedClientGenSnapsCountValue:] */

void FUN_10b6a4b00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1988c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a4b44; end: 10b6a4b7f; -[_SCCDGalleryEntry primitiveExpectedClientGenSnapsCountValue] */

undefined8 FUN_10b6a4b44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113440();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4b80; end: 10b6a4bc3; -[_SCCDGalleryEntry setPrimitiveExpectedClientGenSnapsCountValue:] */

void FUN_10b6a4b80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2da0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a4bc4; end: 10b6a4bff; -[_SCCDGalleryEntry fallbackFeaturedStoryCategoryValue] */

undefined8 FUN_10b6a4bc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa0420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4c00; end: 10b6a4c43; -[_SCCDGalleryEntry setFallbackFeaturedStoryCategoryValue:] */

void FUN_10b6a4c00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a100(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a4c44; end: 10b6a4c7f; -[_SCCDGalleryEntry primitiveFallbackFeaturedStoryCategoryValue] */

undefined8 FUN_10b6a4c44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113460();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4c80; end: 10b6a4cc3; -[_SCCDGalleryEntry setPrimitiveFallbackFeaturedStoryCategoryValue:] */

void FUN_10b6a4c80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2dc0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a4cc4; end: 10b6a4cff; -[_SCCDGalleryEntry galleryTypeValue] */

undefined8 FUN_10b6a4cc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfbdda0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4d00; end: 10b6a4d43; -[_SCCDGalleryEntry setGalleryTypeValue:] */

void FUN_10b6a4d00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1e00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a4d44; end: 10b6a4d7f; -[_SCCDGalleryEntry primitiveGalleryTypeValue] */

undefined8 FUN_10b6a4d44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113480();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4d80; end: 10b6a4dc3; -[_SCCDGalleryEntry setPrimitiveGalleryTypeValue:] */

void FUN_10b6a4d80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2de0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a4dc4; end: 10b6a4dff; -[_SCCDGalleryEntry isAutoClusterPrototypeValue] */

undefined8 FUN_10b6a4dc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c06cbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4e00; end: 10b6a4e43; -[_SCCDGalleryEntry setIsAutoClusterPrototypeValue:] */

void FUN_10b6a4e00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af520(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a4e44; end: 10b6a4e7f; -[_SCCDGalleryEntry primitiveIsAutoClusterPrototypeValue] */

undefined8 FUN_10b6a4e44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1135c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4e80; end: 10b6a4ec3; -[_SCCDGalleryEntry setPrimitiveIsAutoClusterPrototypeValue:] */

void FUN_10b6a4e80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2f20(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a4ec4; end: 10b6a4eff; -[_SCCDGalleryEntry isHiddenValue] */

undefined8 FUN_10b6a4ec4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c074c20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4f00; end: 10b6a4f43; -[_SCCDGalleryEntry setIsHiddenValue:] */

void FUN_10b6a4f00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1a80(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a4f44; end: 10b6a4f7f; -[_SCCDGalleryEntry primitiveIsHiddenValue] */

undefined8 FUN_10b6a4f44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1135e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a4f80; end: 10b6a4fc3; -[_SCCDGalleryEntry setPrimitiveIsHiddenValue:] */

void FUN_10b6a4f80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2f40(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a4fc4; end: 10b6a4fff; -[_SCCDGalleryEntry isPrivateValue] */

undefined8 FUN_10b6a4fc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c07b240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5000; end: 10b6a5043; -[_SCCDGalleryEntry setIsPrivateValue:] */

void FUN_10b6a5000(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b3960(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5044; end: 10b6a507f; -[_SCCDGalleryEntry primitiveIsPrivateValue] */

undefined8 FUN_10b6a5044(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5080; end: 10b6a50c3; -[_SCCDGalleryEntry setPrimitiveIsPrivateValue:] */

void FUN_10b6a5080(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2f60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a50c4; end: 10b6a50ff; -[_SCCDGalleryEntry isTemporaryValue] */

undefined8 FUN_10b6a50c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c080ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5100; end: 10b6a5143; -[_SCCDGalleryEntry setIsTemporaryValue:] */

void FUN_10b6a5100(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4ee0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5144; end: 10b6a517f; -[_SCCDGalleryEntry primitiveIsTemporaryValue] */

undefined8 FUN_10b6a5144(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5180; end: 10b6a51c3; -[_SCCDGalleryEntry setPrimitiveIsTemporaryValue:] */

void FUN_10b6a5180(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2fa0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a51c4; end: 10b6a51ff; -[_SCCDGalleryEntry pendingSyncsValue] */

undefined8 FUN_10b6a51c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f7a20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5200; end: 10b6a5243; -[_SCCDGalleryEntry setPendingSyncsValue:] */

void FUN_10b6a5200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da4e0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5244; end: 10b6a527f; -[_SCCDGalleryEntry primitivePendingSyncsValue] */

undefined8 FUN_10b6a5244(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5280; end: 10b6a52c3; -[_SCCDGalleryEntry setPrimitivePendingSyncsValue:] */

void FUN_10b6a5280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e30e0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a52c4; end: 10b6a52ff; -[_SCCDGalleryEntry priorityValue] */

undefined8 FUN_10b6a52c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5300; end: 10b6a5343; -[_SCCDGalleryEntry setPriorityValue:] */

void FUN_10b6a5300(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5344; end: 10b6a537f; -[_SCCDGalleryEntry primitivePriorityValue] */

undefined8 FUN_10b6a5344(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1137a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5380; end: 10b6a53c3; -[_SCCDGalleryEntry setPrimitivePriorityValue:] */

void FUN_10b6a5380(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3100(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a53c4; end: 10b6a53ff; -[_SCCDGalleryEntry seenInCarouselValue] */

undefined8 FUN_10b6a53c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1577e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5400; end: 10b6a5443; -[_SCCDGalleryEntry setSeenInCarouselValue:] */

void FUN_10b6a5400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9e80(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5444; end: 10b6a547f; -[_SCCDGalleryEntry primitiveSeenInCarouselValue] */

undefined8 FUN_10b6a5444(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1137c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5480; end: 10b6a54c3; -[_SCCDGalleryEntry setPrimitiveSeenInCarouselValue:] */

void FUN_10b6a5480(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3120(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a54c4; end: 10b6a54ff; -[_SCCDGalleryEntry seqNumValue] */

undefined8 FUN_10b6a54c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15e520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b4ca0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5500; end: 10b6a5543; -[_SCCDGalleryEntry setSeqNumValue:] */

void FUN_10b6a5500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5544; end: 10b6a557f; -[_SCCDGalleryEntry primitiveSeqNumValue] */

undefined8 FUN_10b6a5544(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1137e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b4ca0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5580; end: 10b6a55c3; -[_SCCDGalleryEntry setPrimitiveSeqNumValue:] */

void FUN_10b6a5580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3140(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a55c4; end: 10b6a55ff; -[_SCCDGalleryEntry snapsViewedValue] */

undefined8 FUN_10b6a55c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c245cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5600; end: 10b6a5643; -[_SCCDGalleryEntry setSnapsViewedValue:] */

void FUN_10b6a5600(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2063c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5644; end: 10b6a567f; -[_SCCDGalleryEntry primitiveSnapsViewedValue] */

undefined8 FUN_10b6a5644(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5680; end: 10b6a56c3; -[_SCCDGalleryEntry setPrimitiveSnapsViewedValue:] */

void FUN_10b6a5680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3180(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a56c4; end: 10b6a56ff; -[_SCCDGalleryEntry sourcesValue] */

undefined8 FUN_10b6a56c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c247f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5700; end: 10b6a5743; -[_SCCDGalleryEntry setSourcesValue:] */

void FUN_10b6a5700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207320(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5744; end: 10b6a577f; -[_SCCDGalleryEntry primitiveSourcesValue] */

undefined8 FUN_10b6a5744(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113860();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5780; end: 10b6a57c3; -[_SCCDGalleryEntry setPrimitiveSourcesValue:] */

void FUN_10b6a5780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e31c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a57c4; end: 10b6a57ff; -[_SCCDGalleryEntry syncedIsPrivateValue] */

undefined8 FUN_10b6a57c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c266aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5800; end: 10b6a5843; -[_SCCDGalleryEntry setSyncedIsPrivateValue:] */

void FUN_10b6a5800(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210ec0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5844; end: 10b6a587f; -[_SCCDGalleryEntry primitiveSyncedIsPrivateValue] */

undefined8 FUN_10b6a5844(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5880; end: 10b6a58c3; -[_SCCDGalleryEntry setPrimitiveSyncedIsPrivateValue:] */

void FUN_10b6a5880(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e31e0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a58c4; end: 10b6a58ff; -[_SCCDGalleryEntry thumbnailEncryptedValue] */

undefined8 FUN_10b6a58c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26daa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5900; end: 10b6a5943; -[_SCCDGalleryEntry setThumbnailEncryptedValue:] */

void FUN_10b6a5900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214000(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5944; end: 10b6a597f; -[_SCCDGalleryEntry primitiveThumbnailEncryptedValue] */

undefined8 FUN_10b6a5944(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1138a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5980; end: 10b6a59c3; -[_SCCDGalleryEntry setPrimitiveThumbnailEncryptedValue:] */

void FUN_10b6a5980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3200(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a59c4; end: 10b6a59ff; -[_SCCDGalleryEntry thumbnailUrlTypeValue] */

undefined8 FUN_10b6a59c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26e540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5a00; end: 10b6a5a43; -[_SCCDGalleryEntry setThumbnailUrlTypeValue:] */

void FUN_10b6a5a00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2144e0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5a44; end: 10b6a5a7f; -[_SCCDGalleryEntry primitiveThumbnailUrlTypeValue] */

undefined8 FUN_10b6a5a44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1138e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5a80; end: 10b6a5ac3; -[_SCCDGalleryEntry setPrimitiveThumbnailUrlTypeValue:] */

void FUN_10b6a5a80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3240(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5ac4; end: 10b6a5aff; -[_SCCDGalleryEntry titleOverlayUrlTypeValue] */

undefined8 FUN_10b6a5ac4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c271560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5b00; end: 10b6a5b43; -[_SCCDGalleryEntry setTitleOverlayUrlTypeValue:] */

void FUN_10b6a5b00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2164a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5b44; end: 10b6a5b7f; -[_SCCDGalleryEntry primitiveTitleOverlayUrlTypeValue] */

undefined8 FUN_10b6a5b44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113900();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5b80; end: 10b6a5bc3; -[_SCCDGalleryEntry setPrimitiveTitleOverlayUrlTypeValue:] */

void FUN_10b6a5b80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3260(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5bc4; end: 10b6a5bff; -[_SCCDGalleryEntry viewTypeValue] */

undefined8 FUN_10b6a5bc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c29e660();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5c00; end: 10b6a5c43; -[_SCCDGalleryEntry setViewTypeValue:] */

void FUN_10b6a5c00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222da0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5c44; end: 10b6a5c7f; -[_SCCDGalleryEntry primitiveViewTypeValue] */

undefined8 FUN_10b6a5c44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6a5c80; end: 10b6a5cc3; -[_SCCDGalleryEntry setPrimitiveViewTypeValue:] */

void FUN_10b6a5c80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e32c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6a5cc4; end: 10b6a5d1f; -[_SCCDGalleryEntry entryAssetsSet] */

void FUN_10b6a5cc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2a56e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f6e818);
  uVar1 = param_1;
  func_0x00010c0d3d40(param_1,param_2,&PTR____CFConstantStringClassReference_110f6e818);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72120(param_1,param_2,&PTR____CFConstantStringClassReference_110f6e818);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


