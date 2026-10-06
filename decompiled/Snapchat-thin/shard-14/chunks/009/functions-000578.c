/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6ac610; end: 10b6ac627; +[_SCCDGallerySnapMiniThumbnail entityInManagedObjectContext:] */

void FUN_10b6ac610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_entityForName_inManagedObjectCon_1125c3520,
             &PTR____CFConstantStringClassReference_110f6f7f8,param_3);
  return;
}



/* Entry: 10b6ac628; end: 10b6ac663; -[_SCCDGallerySnapMiniThumbnail objectID] */

void FUN_10b6ac628(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709ce0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_objectID_112615a70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6ac664; end: 10b6ac69f; +[_SCCDGallerySnapMiniThumbnail keyPathsForValuesAffectingValueForKey:] */

void FUN_10b6ac664(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709ce8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_keyPathsForValuesAffectingValueF_112543760);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6ac6a0; end: 10b6ac6ab; +[SCCDGallerySnapMiniThumbnailAttributes snapId] */

undefined ** FUN_10b6ac6a0(void)

{
  return &PTR____CFConstantStringClassReference_110dba818;
}



/* Entry: 10b6ac6ac; end: 10b6ac6b7; +[SCCDGallerySnapMiniThumbnailAttributes thumbnailData] */

undefined ** FUN_10b6ac6ac(void)

{
  return &PTR____CFConstantStringClassReference_110f6f818;
}



/* Entry: 10b6ac6b8; end: 10b6ac6c3; +[SCCDGallerySnapMiniThumbnailRelationships snap] */

undefined ** FUN_10b6ac6b8(void)

{
  return &PTR____CFConstantStringClassReference_110dbddd8;
}



/* Entry: 10b6ac6c4; end: 10b6ac6db; +[_SCCDGallerySnapTransientState insertInManagedObjectContext:] */

void FUN_10b6ac6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_insertNewObjectForEntityForName__1125f74c0,
             &PTR____CFConstantStringClassReference_110f6f838,param_3);
  return;
}



/* Entry: 10b6ac6dc; end: 10b6ac6e7; +[_SCCDGallerySnapTransientState entityName] */

undefined ** FUN_10b6ac6dc(void)

{
  return &PTR____CFConstantStringClassReference_110f6f838;
}



/* Entry: 10b6ac6e8; end: 10b6ac6ff; +[_SCCDGallerySnapTransientState entityInManagedObjectContext:] */

void FUN_10b6ac6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_entityForName_inManagedObjectCon_1125c3520,
             &PTR____CFConstantStringClassReference_110f6f838,param_3);
  return;
}



/* Entry: 10b6ac700; end: 10b6ac73b; -[_SCCDGallerySnapTransientState objectID] */

void FUN_10b6ac700(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709cf0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_objectID_112615a70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6ac73c; end: 10b6ac82b; +[_SCCDGallerySnapTransientState keyPathsForValuesAffectingValueForKey:] */

void FUN_10b6ac73c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = PTR_s_keyPathsForValuesAffectingValueF_112543760;
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112709cf8;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6ac82c; end: 10b6ac867; -[_SCCDGallerySnapTransientState bgMediaUploadStateValue] */

undefined8 FUN_10b6ac82c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf19ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6ac868; end: 10b6ac8ab; -[_SCCDGallerySnapTransientState setBgMediaUploadStateValue:] */

void FUN_10b6ac868(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16ffa0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6ac8ac; end: 10b6ac8e7; -[_SCCDGallerySnapTransientState primitiveBgMediaUploadStateValue] */

undefined8 FUN_10b6ac8ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6ac8e8; end: 10b6ac92b; -[_SCCDGallerySnapTransientState setPrimitiveBgMediaUploadStateValue:] */

void FUN_10b6ac8e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2ba0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6ac92c; end: 10b6ac937; +[SCCDGallerySnapTransientStateAttributes bgMediaUploadKey] */

undefined ** FUN_10b6ac92c(void)

{
  return &PTR____CFConstantStringClassReference_110f6f898;
}



/* Entry: 10b6ac938; end: 10b6ac943; +[SCCDGallerySnapTransientStateAttributes bgMediaUploadState] */

undefined ** FUN_10b6ac938(void)

{
  return &PTR____CFConstantStringClassReference_110f6f878;
}



/* Entry: 10b6ac944; end: 10b6ac94f; +[SCCDGallerySnapTransientStateAttributes snapId] */

undefined ** FUN_10b6ac944(void)

{
  return &PTR____CFConstantStringClassReference_110dba818;
}



/* Entry: 10b6ac950; end: 10b6ac967; +[_SCCDGalleryUserDefaults insertInManagedObjectContext:] */

void FUN_10b6ac950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_insertNewObjectForEntityForName__1125f74c0,
             &PTR____CFConstantStringClassReference_110f6f8b8,param_3);
  return;
}



/* Entry: 10b6ac968; end: 10b6ac973; +[_SCCDGalleryUserDefaults entityName] */

undefined ** FUN_10b6ac968(void)

{
  return &PTR____CFConstantStringClassReference_110f6f8b8;
}



/* Entry: 10b6ac974; end: 10b6ac98b; +[_SCCDGalleryUserDefaults entityInManagedObjectContext:] */

void FUN_10b6ac974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_entityForName_inManagedObjectCon_1125c3520,
             &PTR____CFConstantStringClassReference_110f6f8b8,param_3);
  return;
}



/* Entry: 10b6ac98c; end: 10b6ac9c7; -[_SCCDGalleryUserDefaults objectID] */

void FUN_10b6ac98c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709d00;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_objectID_112615a70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6ac9c8; end: 10b6acbcb; +[_SCCDGalleryUserDefaults keyPathsForValuesAffectingValueForKey:] */

void FUN_10b6ac9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112709d08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_keyPathsForValuesAffectingValueF_112543760,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((((((int)uVar2 == 0) && (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)) &&
       (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)) &&
      ((uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0 &&
       (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)))) &&
     ((uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0 &&
      ((uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0 &&
       (uVar2 = param_3, func_0x00010c0720c0(), (int)uVar2 == 0)))))) {
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



/* Entry: 10b6acbcc; end: 10b6acc07; -[_SCCDGalleryUserDefaults completedImportFromCameraRollValue] */

undefined8 FUN_10b6acbcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf43e80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6acc08; end: 10b6acc4b; -[_SCCDGalleryUserDefaults setCompletedImportFromCameraRollValue:] */

void FUN_10b6acc08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17fa80(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6acc4c; end: 10b6acc87; -[_SCCDGalleryUserDefaults primitiveCompletedImportFromCameraRollValue] */

undefined8 FUN_10b6acc4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6acc88; end: 10b6acccb; -[_SCCDGalleryUserDefaults setPrimitiveCompletedImportFromCameraRollValue:] */

void FUN_10b6acc88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2c60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6acccc; end: 10b6acd07; -[_SCCDGalleryUserDefaults didInitialCloudSyncValue] */

undefined8 FUN_10b6acccc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf77540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6acd08; end: 10b6acd4b; -[_SCCDGalleryUserDefaults setDidInitialCloudSyncValue:] */

void FUN_10b6acd08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d7a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6acd4c; end: 10b6acd87; -[_SCCDGalleryUserDefaults primitiveDidInitialCloudSyncValue] */

undefined8 FUN_10b6acd4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113320();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6acd88; end: 10b6acdcb; -[_SCCDGalleryUserDefaults setPrimitiveDidInitialCloudSyncValue:] */

void FUN_10b6acd88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2c80(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6acdcc; end: 10b6ace07; -[_SCCDGalleryUserDefaults dismissedImportButtonBelowSnapsValue] */

undefined8 FUN_10b6acdcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf84fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6ace08; end: 10b6ace4b; -[_SCCDGalleryUserDefaults setDismissedImportButtonBelowSnapsValue:] */

void FUN_10b6ace08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f900(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6ace4c; end: 10b6ace87; -[_SCCDGalleryUserDefaults primitiveDismissedImportButtonBelowSnapsValue] */

undefined8 FUN_10b6ace4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6ace88; end: 10b6acecb; -[_SCCDGalleryUserDefaults setPrimitiveDismissedImportButtonBelowSnapsValue:] */

void FUN_10b6ace88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2ca0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6acecc; end: 10b6acf07; -[_SCCDGalleryUserDefaults displayedCameraRollTabIntroPopupValue] */

undefined8 FUN_10b6acecc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf868e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6acf08; end: 10b6acf4b; -[_SCCDGalleryUserDefaults setDisplayedCameraRollTabIntroPopupValue:] */

void FUN_10b6acf08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1901e0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6acf4c; end: 10b6acf87; -[_SCCDGalleryUserDefaults primitiveDisplayedCameraRollTabIntroPopupValue] */

undefined8 FUN_10b6acf4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113360();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6acf88; end: 10b6acfcb; -[_SCCDGalleryUserDefaults setPrimitiveDisplayedCameraRollTabIntroPopupValue:] */

void FUN_10b6acf88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2cc0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6acfcc; end: 10b6ad007; -[_SCCDGalleryUserDefaults displayedInitialCreateStoryPopupValue] */

undefined8 FUN_10b6acfcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf869e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6ad008; end: 10b6ad04b; -[_SCCDGalleryUserDefaults setDisplayedInitialCreateStoryPopupValue:] */

void FUN_10b6ad008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190460(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6ad04c; end: 10b6ad087; -[_SCCDGalleryUserDefaults primitiveDisplayedInitialCreateStoryPopupValue] */

undefined8 FUN_10b6ad04c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113380();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6ad088; end: 10b6ad0cb; -[_SCCDGalleryUserDefaults setPrimitiveDisplayedInitialCreateStoryPopupValue:] */

void FUN_10b6ad088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2ce0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6ad0cc; end: 10b6ad107; -[_SCCDGalleryUserDefaults displayedInitialNeedsPhotoAccessPopupValue] */

undefined8 FUN_10b6ad0cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86a20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6ad108; end: 10b6ad14b; -[_SCCDGalleryUserDefaults setDisplayedInitialNeedsPhotoAccessPopupValue:] */

void FUN_10b6ad108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1904a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6ad14c; end: 10b6ad187; -[_SCCDGalleryUserDefaults primitiveDisplayedInitialNeedsPhotoAccessPopupValue] */

undefined8 FUN_10b6ad14c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1133a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6ad188; end: 10b6ad1cb; -[_SCCDGalleryUserDefaults setPrimitiveDisplayedInitialNeedsPhotoAccessPopupValue:] */

void FUN_10b6ad188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2d00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6ad1cc; end: 10b6ad207; -[_SCCDGalleryUserDefaults displayedPostLongVideoToStoryPopupValue] */

undefined8 FUN_10b6ad1cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6ad208; end: 10b6ad24b; -[_SCCDGalleryUserDefaults setDisplayedPostLongVideoToStoryPopupValue:] */

void FUN_10b6ad208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1905c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6ad24c; end: 10b6ad287; -[_SCCDGalleryUserDefaults primitiveDisplayedPostLongVideoToStoryPopupValue] */

undefined8 FUN_10b6ad24c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1133c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6ad288; end: 10b6ad2cb; -[_SCCDGalleryUserDefaults setPrimitiveDisplayedPostLongVideoToStoryPopupValue:] */

void FUN_10b6ad288(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2d20(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6ad2cc; end: 10b6ad307; -[_SCCDGalleryUserDefaults displayedSaveOptionPromptValue] */

undefined8 FUN_10b6ad2cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6ad308; end: 10b6ad34b; -[_SCCDGalleryUserDefaults setDisplayedSaveOptionPromptValue:] */

void FUN_10b6ad308(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1906a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6ad34c; end: 10b6ad387; -[_SCCDGalleryUserDefaults primitiveDisplayedSaveOptionPromptValue] */

undefined8 FUN_10b6ad34c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1133e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6ad388; end: 10b6ad3cb; -[_SCCDGalleryUserDefaults setPrimitiveDisplayedSaveOptionPromptValue:] */

void FUN_10b6ad388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2d40(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6ad3cc; end: 10b6ad3d7; +[SCCDGalleryUserDefaultsAttributes completedImportFromCameraRoll] */

undefined ** FUN_10b6ad3cc(void)

{
  return &PTR____CFConstantStringClassReference_110f6f8f8;
}



/* Entry: 10b6ad3d8; end: 10b6ad3e3; +[SCCDGalleryUserDefaultsAttributes didInitialCloudSync] */

undefined ** FUN_10b6ad3d8(void)

{
  return &PTR____CFConstantStringClassReference_110f6f938;
}



/* Entry: 10b6ad3e4; end: 10b6ad3ef; +[SCCDGalleryUserDefaultsAttributes dismissedImportButtonBelowSnaps] */

undefined ** FUN_10b6ad3e4(void)

{
  return &PTR____CFConstantStringClassReference_110f6f978;
}



/* Entry: 10b6ad3f0; end: 10b6ad3fb; +[SCCDGalleryUserDefaultsAttributes displayedCameraRollTabIntroPopup] */

undefined ** FUN_10b6ad3f0(void)

{
  return &PTR____CFConstantStringClassReference_110df3cb8;
}



/* Entry: 10b6ad3fc; end: 10b6ad407; +[SCCDGalleryUserDefaultsAttributes displayedInitialCreateStoryPopup] */

undefined ** FUN_10b6ad3fc(void)

{
  return &PTR____CFConstantStringClassReference_110f6f9d8;
}



/* Entry: 10b6ad408; end: 10b6ad413; +[SCCDGalleryUserDefaultsAttributes displayedInitialNeedsPhotoAccessPopup] */

undefined ** FUN_10b6ad408(void)

{
  return &PTR____CFConstantStringClassReference_110f6fa18;
}



/* Entry: 10b6ad414; end: 10b6ad41f; +[SCCDGalleryUserDefaultsAttributes displayedPostLongVideoToStoryPopup] */

undefined ** FUN_10b6ad414(void)

{
  return &PTR____CFConstantStringClassReference_110f6fa58;
}



/* Entry: 10b6ad420; end: 10b6ad42b; +[SCCDGalleryUserDefaultsAttributes displayedSaveOptionPrompt] */

undefined ** FUN_10b6ad420(void)

{
  return &PTR____CFConstantStringClassReference_110df3cd8;
}



/* Entry: 10b6ad42c; end: 10b6ad437; +[SCCDGalleryUserDefaultsAttributes latestAckedBackupErrorTime] */

undefined ** FUN_10b6ad42c(void)

{
  return &PTR____CFConstantStringClassReference_110f6fa98;
}



/* Entry: 10b6ad438; end: 10b6ad443; +[SCCDGalleryUserDefaultsAttributes readFeaturedStoryIds] */

undefined ** FUN_10b6ad438(void)

{
  return &PTR____CFConstantStringClassReference_110f6fab8;
}



/* Entry: 10b6ad444; end: 10b6ad44f; +[SCCDGalleryUserDefaultsAttributes viewedFeaturedStoryIds] */

undefined ** FUN_10b6ad444(void)

{
  return &PTR____CFConstantStringClassReference_110f6fad8;
}



/* Entry: 10b6ad450; end: 10b6ad45b; +[SCCDGalleryUserDefaultsRelationships profile] */

undefined ** FUN_10b6ad450(void)

{
  return &PTR____CFConstantStringClassReference_110db7358;
}



/* Entry: 10b6ad45c; end: 10b6ad5d3; +[SCCloudSyncOperationSnapshot parseManagedObject:] */

void FUN_10b6ad45c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126bc7e0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf59960(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0f6420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c1356e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c15e540(param_3);
  uVar9 = param_3;
  func_0x00010c2680a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c269ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c030860(puVar1,param_2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6ad5d4; end: 10b6adca7; +[SCGalleryEntry parseManagedObject:] */

void FUN_10b6ad5d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  
  puVar1 = PTR_PTR_1126af4c0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf12220();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf1b100();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf3cec0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf3cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf3d260();
  uVar10 = param_3;
  func_0x00010bf3d2c0();
  uVar11 = param_3;
  func_0x00010bf3f9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bf3fcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bf64980();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bf8b0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010bf8be20();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bf93d20();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf977e0();
  func_0x00010bf9c1e0();
  uVar20 = param_3;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa0440();
  uVar21 = param_3;
  func_0x00010bfa3220();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bfa32e0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_3;
  func_0x00010bfa3440();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010bfa34a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010bfb3860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbddc0();
  func_0x00010c06cc00();
  func_0x00010c074c40();
  func_0x00010c07b2e0();
  func_0x00010c080d20();
  uVar26 = param_3;
  func_0x00010c08b1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_3;
  func_0x00010c0c7500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7a40();
  func_0x00010c113e20();
  uVar28 = param_3;
  func_0x00010c13f6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010c14be80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157800();
  func_0x00010c15e540();
  uVar30 = param_3;
  func_0x00010c241100();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_3;
  func_0x00010c245780();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_3;
  func_0x00010c2457c0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_3;
  func_0x00010c245800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245d00();
  func_0x00010c247f20();
  uVar34 = param_3;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = param_3;
  func_0x00010c266980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266ac0();
  uVar36 = param_3;
  func_0x00010c266b20();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = param_3;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26dac0();
  uVar38 = param_3;
  func_0x00010c26e500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26e560();
  uVar39 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = param_3;
  func_0x00010c271540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c271580();
  func_0x00010c29e6a0();
  _objc_release(param_3);
  func_0x00010c030800(puVar1,param_2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9 & 0xffffffff,(int)uVar10);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6adca8; end: 10b6ade2f; +[SCGalleryEntryAsset parseManagedObject:] */

void FUN_10b6adca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
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
  
  puVar1 = PTR_PTR_1126bc808;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf0b260(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf0b7c0(param_3);
  uVar7 = param_3;
  func_0x00010bf0b8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf938c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf93900(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bfdd180();
  uVar11 = param_3;
  func_0x00010c09d860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0307c0(puVar1,param_2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,(char)uVar10);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6ade30; end: 10b6adfdf; +[SCGalleryProfile parseManagedObject:] */

void FUN_10b6ade30(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar1 = PTR_PTR_1126b2500;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfed6c0();
  uVar6 = param_3;
  func_0x00010c088400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c088b00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c088d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c2439c0(param_3);
  uVar10 = param_3;
  func_0x00010c266620();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c2667e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c298d20();
  _objc_release(param_3);
  func_0x00010c0308c0(puVar1,param_2,uVar4,uVar5 & 0xffffffff,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                      uVar12,uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6adfe0; end: 10b6ae0df; +[SCGalleryQuotaStatus parseManagedObject:] */

void FUN_10b6adfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126d7f90;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c08ab60(param_3);
  uVar6 = param_3;
  func_0x00010c0de1a0(param_3);
  uVar7 = param_3;
  func_0x00010c0de3e0(param_3);
  uVar8 = param_3;
  func_0x00010c0de4a0(param_3);
  _objc_release(param_3);
  func_0x00010c0308e0(puVar1,param_2,uVar4,uVar5,uVar6,uVar7,uVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6ae0e0; end: 10b6ae86f; +[SCGallerySnap parseManagedObject:] */

void FUN_10b6ae0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  undefined8 uVar53;
  
  puVar1 = PTR_PTR_1126af4d0;
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010bf298c0();
  uVar7 = param_4;
  func_0x00010bf2a8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bf30ea0();
  uVar9 = param_4;
  func_0x00010bf313a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010bf393a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010bf3d2c0();
  uVar12 = param_4;
  func_0x00010bf3e300();
  uVar13 = param_4;
  func_0x00010bf3f9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_4;
  func_0x00010bf5a580();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_4;
  func_0x00010bf5a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_4;
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_4;
  func_0x00010bf704c0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_4;
  func_0x00010bf70720();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_4;
  func_0x00010bf8b0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b480(param_4);
  uVar20 = param_4;
  uVar53 = param_1;
  func_0x00010bf93d20();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_4;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_4;
  func_0x00010bf9e420();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_4;
  func_0x00010bfb73c0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_4;
  func_0x00010bfd8020();
  func_0x00010bfd8a60();
  func_0x00010bfd9de0();
  func_0x00010bfdd180();
  uVar26 = param_4;
  func_0x00010bfdd4e0();
  uVar27 = param_4;
  func_0x00010bfe09c0();
  uVar28 = param_4;
  func_0x00010bfed780();
  func_0x00010c069080(param_4);
  func_0x00010c080d20();
  uVar29 = param_4;
  func_0x00010c0c41a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_4;
  func_0x00010c0c4ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_4;
  func_0x00010c0c5080();
  uVar32 = param_4;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c5c20();
  uVar33 = param_4;
  func_0x00010c0c6140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6da0();
  uVar34 = param_4;
  func_0x00010c0c7520();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = param_4;
  func_0x00010c0d21e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ed140();
  uVar36 = param_4;
  func_0x00010c0ef7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = param_4;
  func_0x00010c0efd00();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = param_4;
  func_0x00010c0fd820();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = param_4;
  func_0x00010c13f700();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = param_4;
  func_0x00010c14be80();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = param_4;
  func_0x00010c15e1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = param_4;
  func_0x00010c15fa20();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = param_4;
  func_0x00010c23f420();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = param_4;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = param_4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = param_4;
  func_0x00010c246620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247e00();
  uVar47 = param_4;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = param_4;
  func_0x00010c26da80();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = param_4;
  func_0x00010c26e220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26e4a0();
  uVar50 = param_4;
  func_0x00010c26fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = param_4;
  func_0x00010c273740();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = param_4;
  func_0x00010c27a1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a51c0();
  _objc_release(param_4);
  func_0x00010c0307e0(param_1,uVar53,puVar1,param_3,uVar4,uVar5,uVar6 & 0xffffffff,uVar7,
                      uVar8 & 0xffffffff,uVar9,uVar10,(int)uVar11,(int)uVar12,uVar13,uVar14,uVar15,
                      uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,(char)uVar25,
                      (char)uVar26,(int)uVar27,(char)uVar28,uVar29,uVar30,(int)uVar31);
  _objc_release(uVar52);
  _objc_release(uVar51);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6ae870; end: 10b6ae93f; +[SCGallerySnapDetail parseManagedObject:] */

void FUN_10b6ae870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bc7b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0ef4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c030920(puVar1,param_2,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6ae940; end: 10b6aea47; +[SCGallerySnapDoc parseManagedObject:] */

void FUN_10b6ae940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126bc800;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfdd180(param_3);
  uVar6 = param_3;
  func_0x00010c09d860(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c23ff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0308a0(puVar1,param_2,uVar4,uVar5,uVar6,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6aea48; end: 10b6aeb3f; +[SCGallerySnapMiniThumbnail parseManagedObject:] */

void FUN_10b6aea48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bc7c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c26da00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c030940(puVar1,param_2,uVar4,uVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6aeb40; end: 10b6aec47; +[SCGallerySnapTransientState parseManagedObject:] */

void FUN_10b6aeb40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126bc810;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf19aa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf19ae0(param_3);
  uVar7 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c030820(puVar1,param_2,uVar4,uVar5,uVar6,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6aec48; end: 10b6aede7; +[SCGalleryUserDefaults parseManagedObject:] */

void FUN_10b6aec48(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar1 = PTR_PTR_1126e0530;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf43ea0();
  uVar6 = param_3;
  func_0x00010bf77560();
  uVar7 = param_3;
  func_0x00010bf85000();
  uVar8 = param_3;
  func_0x00010bf86900(param_3);
  uVar9 = param_3;
  func_0x00010bf86a00(param_3);
  uVar10 = param_3;
  func_0x00010bf86a40();
  func_0x00010bf86b00();
  func_0x00010bf86b80();
  uVar11 = param_3;
  func_0x00010c08af60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c121520();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c29ec40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c030840(puVar1,param_2,uVar4,uVar5 & 0xffffffff,uVar6 & 0xffffffff,uVar7 & 0xffffffff,
                      uVar8,uVar9,(char)uVar10);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6aede8; end: 10b6aef47; +[SCCloudSyncOperationSnapshot fetchFirstCloudSyncOperationSnapshotForOwner:dataObjectContext:] */

void FUN_10b6aede8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c246960(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6e2b8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038000(puVar2,param_2,0,puVar3,0,1,0);
  _objc_release(puVar3);
  uVar8 = param_3;
  puVar10 = puVar2;
  func_0x00010bfa5aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar6 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    pcStack_58 = FUN_10b6aef48;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_90 = puVar3;
    puStack_88 = puVar2;
    puStack_80 = param_1;
    puStack_78 = puVar1;
    uStack_70 = param_4;
    puStack_68 = puVar4;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(puVar10);
    _objc_retain(uVar8);
    func_0x00010c246960(puVar6,param_2,&PTR____CFConstantStringClassReference_110f6e2b8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c45e8;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038000(puVar1,param_2,0,puVar2,0,1,0);
    _objc_release(puVar2);
    uVar9 = uVar8;
    puVar11 = puVar1;
    func_0x00010bfa5aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(uVar8);
    puVar4 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar1);
    puVar3 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      puVar7 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      pcStack_a8 = FUN_10b6af0a8;
      lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_e0 = puVar2;
      puStack_d8 = puVar1;
      puStack_d0 = puVar5;
      puStack_c8 = puVar6;
      puStack_c0 = puVar10;
      puStack_b8 = puVar4;
      ppuStack_b0 = &puStack_60;
      _objc_retain(puVar11);
      _objc_retain(uVar9);
      func_0x00010c246960(puVar7,param_2,&PTR____CFConstantStringClassReference_110f6e2b8,1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126c45e8;
      _objc_alloc(PTR_PTR_1126c45e8);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_f0 = puVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038000(puVar1,param_2,0,puVar2,0,0,0);
      _objc_release(puVar2);
      puVar2 = puVar1;
      func_0x00010bfa5aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(uVar9);
      _objc_release(puVar1);
      _objc_release(puVar7);
      puVar4 = puVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
        ___stack_chk_fail();
        puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        _objc_retain(puVar2);
        func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6faf8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126c45e8;
        _objc_alloc(PTR_PTR_1126c45e8);
        func_0x00010c038000();
        func_0x00010bfa5b20(puVar7,param_2,puVar3,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar3);
        _objc_release(puVar1);
        puVar4 = puVar7;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6aef48; end: 10b6af0a7; +[SCCloudSyncOperationSnapshot fetchLatestCloudSyncOperationSnapshotForOwner:dataObjectContext:] */

void FUN_10b6aef48(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c246960(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6e2b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038000(puVar2,param_2,0,puVar3,0,1,0);
  _objc_release(puVar3);
  uVar7 = param_3;
  puVar8 = puVar2;
  func_0x00010bfa5aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar6 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    pcStack_58 = FUN_10b6af0a8;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_90 = puVar3;
    puStack_88 = puVar2;
    puStack_80 = param_1;
    puStack_78 = puVar1;
    uStack_70 = param_4;
    puStack_68 = puVar4;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    _objc_retain(uVar7);
    func_0x00010c246960(puVar6,param_2,&PTR____CFConstantStringClassReference_110f6e2b8,1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c45e8;
    _objc_alloc(PTR_PTR_1126c45e8);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038000(puVar1,param_2,0,puVar2,0,0,0);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bfa5aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(puVar1);
    _objc_release(puVar6);
    puVar4 = puVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      _objc_retain(puVar2);
      func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6faf8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c45e8;
      _objc_alloc(PTR_PTR_1126c45e8);
      func_0x00010c038000();
      func_0x00010bfa5b20(puVar6,param_2,puVar3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar1);
      puVar4 = puVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6af0a8; end: 10b6af1eb; +[SCCloudSyncOperationSnapshot fetchCloudSyncOperationSnapshotsForOwner:dataObjectContext:] */

void FUN_10b6af0a8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c246960(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6e2b8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038000(puVar2,param_2,0,puVar3,0,0,0);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bfa5aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    _objc_retain(puVar3);
    func_0x00010c1063c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f6faf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c45e8;
    _objc_alloc(PTR_PTR_1126c45e8);
    func_0x00010c038000();
    func_0x00010bfa5b20(puVar1,param_2,puVar4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    param_1 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6af1ec; end: 10b6af2af; +[SCCloudSyncOperationSnapshot fetchCloudSyncOperationSnapshotsForTargetEntryId:dataObjectContext:] */

void FUN_10b6af1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6faf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa5b20(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6af2b0; end: 10b6af397; +[SCCloudSyncOperationSnapshot fetchCloudSyncOperationSnapshotsForReqeustId:dataObjectContext:] */

void FUN_10b6af2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fb18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa5b20(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf529e0(param_1);
  uVar3 = param_1;
  func_0x00010bfb1920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b6af398; end: 10b6af45b; +[SCCloudSyncOperationSnapshot fetchCloudSyncOperationSnapshotsForReqeustIds:dataObjectContext:] */

void FUN_10b6af398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fb38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa5b20(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6af45c; end: 10b6af51f; +[SCCloudSyncOperationSnapshot fetchCloudSyncOperationSnapshotsWithTacomaOperationId:dataObjectContext:] */

void FUN_10b6af45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fb58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa5b20(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6af520; end: 10b6af6ef; +[SCGalleryBatchFetching batchFetchForEntryId:dataObjectContext:queue:completion:] */

void FUN_10b6af520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10b6af6f0;
  uStack_70 = 0x10b6af700;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_10b6af6f0;
  uStack_a0 = 0x10b6af700;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_98 = puVar1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c0f8520(param_4);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(puStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6af6f0; end: 10b6af707;  */

void FUN_10b6af6f0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b6af708; end: 10b6af8bb;  */

void FUN_10b6af708(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  puVar6 = *(undefined **)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar1;
  _objc_release();
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
    puVar6 = PTR_PTR_1126af4d0;
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(puVar6);
        }
        puVar2 = PTR_PTR_1126bc7b8;
        func_0x00010bfa7160(PTR_PTR_1126bc7b8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b60f8;
        func_0x00010c0f2b40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar9 = puVar9 + 1;
      } while (puVar1 != puVar9);
      puVar1 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(puVar6 + 0x20);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)(puVar6 + 0x28) + 8) + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(puVar6 + 0x30) + 8) + 0x28);
  func_0x00010bf51e00(uVar4);
  (**(code **)(lVar5 + 0x10))(lVar5,uVar8,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10b6af8bc; end: 10b6af913;  */

void FUN_10b6af8bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b6af914; end: 10b6afa97; +[SCGalleryBatchFetching fetchSnapsAndSnapDetailsBySnapIds:dataObjectContext:queue:completion:] */

void FUN_10b6af914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10b6af6f0;
  uStack_60 = 0x10b6af700;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_58 = puVar1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0f8520(param_4);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6afa98; end: 10b6afc0f;  */

void FUN_10b6afa98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126af4d0;
  func_0x00010bfa7580(PTR_PTR_1126af4d0,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      puVar4 = PTR_PTR_1126bc7b8;
      func_0x00010bfa7160(PTR_PTR_1126bc7b8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
      puVar5 = PTR_PTR_1126b60f8;
      func_0x00010c0f2b40(PTR_PTR_1126b60f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar7);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar8 = puVar8 + 1;
    } while (puVar3 != puVar8);
    puVar3 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *(long *)(puVar2 + 0x20);
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(puVar2 + 0x28) + 8) + 0x28);
  func_0x00010bf51e00(uVar7);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10b6afc10; end: 10b6afc4f;  */

void FUN_10b6afc10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b6afc50; end: 10b6afdeb; +[SCGalleryEntry fetchIsFailedWithEntryId:dataObjectContext:] */

undefined * FUN_10b6afc50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar3 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fb78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_58 = puVar1;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6fb98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar3,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  uVar5 = param_4;
  func_0x00010bfa6f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar4 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined *)(ulong)(lVar4 != 0);
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(uVar5);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fb98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa6f60(puVar3,param_2,puVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar6 = puVar3;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar3;
    func_0x00010bfb1920(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 10b6afdec; end: 10b6afedf; +[SCGalleryEntry fetchGalleryEntryWithEntryId:dataObjectContext:] */

void FUN_10b6afdec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fb98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa6f60(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010bfb1920(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b6afee0; end: 10b6b013f; +[SCGalleryEntry fetchManualSaveGalleryEntryWithExternalId:isPrivate:owner:dataObjectContext:] */

void FUN_10b6afee0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fbb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6fbd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_90 = (undefined *)param_3;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6fbf8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puVar4;
  func_0x00010c1063c0(puVar5,param_2,&PTR____CFConstantStringClassReference_110f6fc18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar6 = PTR_PTR_1126c45e8;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar1;
  puStack_80 = puVar2;
  puStack_78 = puVar3;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar4,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038000(puVar6,param_2,puVar4,0,0,0,0);
  _objc_release(puVar4);
  _objc_release(puVar7);
  uVar13 = 0;
  uVar14 = param_5;
  puVar11 = puVar6;
  func_0x00010bfa6e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  puVar15 = param_1;
  func_0x00010bf529e0();
  if (puVar15 == (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar8 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar9 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    pcStack_98 = FUN_10b6b0140;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_e0 = puVar6;
    puStack_d8 = puVar5;
    puStack_d0 = param_1;
    puStack_c8 = puVar3;
    uStack_c0 = param_6;
    puStack_b8 = puVar15;
    puStack_b0 = puVar2;
    puStack_a8 = puVar1;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_retain(uVar13);
    _objc_retain(puVar11);
    puStack_100 = (undefined *)uVar14;
    func_0x00010c1063c0(puVar9,param_2,&PTR____CFConstantStringClassReference_110f6fbf8);
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = PTR____kCFBooleanFalse_11034ab60;
    puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110f6fc18);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c45e8;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f8 = puVar9;
    puStack_f0 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f8,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038000(puVar2,param_2,puVar1,0,0,0,0);
    _objc_release(puVar1);
    _objc_release(puVar3);
    uVar14 = 0;
    puVar12 = puVar2;
    func_0x00010bfa6e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(puVar11);
    _objc_release(puVar2);
    _objc_release(puVar5);
    puVar6 = puVar9;
    _objc_release();
    puVar15 = puVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      puVar10 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      pcStack_108 = FUN_10b6b02e8;
      lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_160 = puVar7;
      puStack_158 = puVar4;
      puStack_150 = puVar3;
      puStack_148 = puVar1;
      puStack_140 = puVar2;
      puStack_138 = puVar5;
      puStack_130 = puVar8;
      puStack_128 = puVar9;
      uStack_120 = uVar13;
      puStack_118 = puVar11;
      ppuStack_110 = &puStack_a0;
      _objc_retain(uVar14);
      _objc_retain(puVar12);
      func_0x00010c1063c0(puVar10,param_2,&PTR____CFConstantStringClassReference_110f6fc38);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                          &PTR____CFConstantStringClassReference_110f6fc18);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                          &PTR____CFConstantStringClassReference_110f6fc58);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c45e8;
      _objc_alloc(PTR_PTR_1126c45e8);
      puVar1 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_180 = puVar10;
      puStack_178 = puVar5;
      puStack_170 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_180,3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf02a20(puVar1,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038000(puVar2,param_2,puVar1,0,0,0,0);
      _objc_release(puVar1);
      _objc_release(puVar3);
      puVar1 = puVar2;
      func_0x00010bfa6e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      _objc_release(puVar12);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar10);
      puVar15 = puVar6;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
        ___stack_chk_fail();
        puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        _objc_retain(puVar1);
        func_0x00010c1063c0(puVar5,param_2,&PTR____CFConstantStringClassReference_110f6fc78);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126c45e8;
        _objc_alloc(PTR_PTR_1126c45e8);
        func_0x00010c038000();
        func_0x00010bfa6f60(puVar10,param_2,puVar4,puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(puVar4);
        _objc_release(puVar5);
        puVar15 = puVar10;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10b6b0140; end: 10b6b02e7; +[SCGalleryEntry fetchGalleryEntriesWithExternalId:owner:dataObjectContext:] */

void FUN_10b6b0140(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fbf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6fc18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c45e8;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar1;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038000(puVar3,param_2,puVar5,0,0,0,0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar9 = 0;
  puVar5 = puVar3;
  func_0x00010bfa6e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(uVar9);
    _objc_retain(puVar5);
    func_0x00010c1063c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f6fc38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110f6fc18);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110f6fc58);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c45e8;
    _objc_alloc(PTR_PTR_1126c45e8);
    puVar3 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f0 = puVar2;
    puStack_e8 = puVar4;
    puStack_e0 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f0,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar3,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038000(puVar7,param_2,puVar3,0,0,0,0);
    _objc_release(puVar3);
    _objc_release(puVar8);
    puVar3 = puVar7;
    func_0x00010bfa6e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar2);
    param_1 = puVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      _objc_retain(puVar3);
      func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fc78);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c45e8;
      _objc_alloc(PTR_PTR_1126c45e8);
      func_0x00010c038000();
      func_0x00010bfa6f60(puVar2,param_2,puVar5,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar1);
      param_1 = puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b02e8; end: 10b6b04cb; +[SCGalleryEntry fetchTemporaryFeaturedStoriesWithExternalIds:owner:dataObjectContext:] */

void FUN_10b6b02e8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fc38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6fc18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6fc58);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  puVar6 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar1;
  puStack_78 = puVar2;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038000(puVar4,param_2,puVar6,0,0,0,0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar6 = puVar4;
  func_0x00010bfa6e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    _objc_retain(puVar6);
    func_0x00010c1063c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f6fc78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c45e8;
    _objc_alloc(PTR_PTR_1126c45e8);
    func_0x00010c038000();
    func_0x00010bfa6f60(puVar1,param_2,puVar3,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    param_1 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b04cc; end: 10b6b058f; +[SCGalleryEntry fetchGalleryEntriesWithEntryIds:dataObjectContext:] */

void FUN_10b6b04cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_4);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6fc78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  func_0x00010c038000();
  func_0x00010bfa6f60(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6b0590; end: 10b6b059b; +[SCGalleryEntry fetchGalleryEntriesForSnaps:dataObjectContext:] */

void FUN_10b6b0590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa6eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchGalleryEntriesForSnaps_opti_1125c7550,param_3,0,param_4);
  return;
}



/* Entry: 10b6b059c; end: 10b6b081f; +[SCGalleryEntry fetchGalleryEntriesForSnaps:options:dataObjectContext:] */

void FUN_10b6b059c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bf529e0();
  puVar5 = PTR____NSDictionary0__struct_11034ab58;
  if (lVar2 != 0) {
    uVar3 = param_4;
    func_0x00010c106300();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(param_3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126e0498;
    _objc_retain(param_5);
    _objc_opt_class(puVar5);
    uVar6 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar5);
    uVar1 = param_5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x3032000000;
    pcStack_b0 = FUN_10b6b0820;
    uStack_a8 = 0x10b6b0830;
    uStack_a0 = 0;
    do {
      *(undefined1 *)(puStack_90 + 3) = 0;
      uVar7 = puStack_c0[5];
      puStack_c0[5] = 0;
      _objc_release(uVar7);
      _objc_retain(param_3);
      _objc_retain(uVar3);
      _objc_retain(uVar1);
      _objc_retain(puVar4);
      func_0x00010c0f8240(uVar1);
      _objc_release(puVar4);
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(param_3);
    } while ((*(byte *)(puStack_90 + 3) & 1) != 0);
    puVar5 = puVar4;
    func_0x00010bf51e00(puVar4);
    __Block_object_dispose(&uStack_c8,8);
    _objc_release(uStack_a0);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uVar1);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}


