/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6abd40; end: 10b6abd7b; -[_SCCDGallerySnap thumbnailUploadStateValue] */

undefined8 FUN_10b6abd40(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26e480();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6abd7c; end: 10b6abdbf; -[_SCCDGallerySnap setThumbnailUploadStateValue:] */

void FUN_10b6abd7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214460(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6abdc0; end: 10b6abdfb; -[_SCCDGallerySnap primitiveThumbnailUploadStateValue] */

undefined8 FUN_10b6abdc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1138c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6abdfc; end: 10b6abe3f; -[_SCCDGallerySnap setPrimitiveThumbnailUploadStateValue:] */

void FUN_10b6abdfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3220(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6abe40; end: 10b6abe7b; -[_SCCDGallerySnap widthValue] */

undefined8 FUN_10b6abe40(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6abe7c; end: 10b6abebf; -[_SCCDGallerySnap setWidthValue:] */

void FUN_10b6abe7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2256c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6abec0; end: 10b6abefb; -[_SCCDGallerySnap primitiveWidthValue] */

undefined8 FUN_10b6abec0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113960();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c067ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6abefc; end: 10b6abf3f; -[_SCCDGallerySnap setPrimitiveWidthValue:] */

void FUN_10b6abefc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e32e0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6abf40; end: 10b6abf4b; +[SCCDGallerySnapAttributes attribution] */

undefined ** FUN_10b6abf40(void)

{
  return &PTR____CFConstantStringClassReference_110de1118;
}



/* Entry: 10b6abf4c; end: 10b6abf57; +[SCCDGallerySnapAttributes cameraFrontFacing] */

undefined ** FUN_10b6abf4c(void)

{
  return &PTR____CFConstantStringClassReference_110f6f0d8;
}



/* Entry: 10b6abf58; end: 10b6abf63; +[SCCDGallerySnapAttributes cameraRollId] */

undefined ** FUN_10b6abf58(void)

{
  return &PTR____CFConstantStringClassReference_110f6f458;
}



/* Entry: 10b6abf64; end: 10b6abf6f; +[SCCDGallerySnapAttributes captureMode] */

undefined ** FUN_10b6abf64(void)

{
  return &PTR____CFConstantStringClassReference_110f6f118;
}



/* Entry: 10b6abf70; end: 10b6abf7b; +[SCCDGallerySnapAttributes captureTimeUtc] */

undefined ** FUN_10b6abf70(void)

{
  return &PTR____CFConstantStringClassReference_110f6f478;
}



/* Entry: 10b6abf7c; end: 10b6abf87; +[SCCDGallerySnapAttributes chromeSubtitle] */

undefined ** FUN_10b6abf7c(void)

{
  return &PTR____CFConstantStringClassReference_110f6f498;
}



/* Entry: 10b6abf88; end: 10b6abf93; +[SCCDGallerySnapAttributes clientProcessingType] */

undefined ** FUN_10b6abf88(void)

{
  return &PTR____CFConstantStringClassReference_110f6e3d8;
}



/* Entry: 10b6abf94; end: 10b6abf9f; +[SCCDGallerySnapAttributes cloudMediaState] */

undefined ** FUN_10b6abf94(void)

{
  return &PTR____CFConstantStringClassReference_110f6f158;
}



/* Entry: 10b6abfa0; end: 10b6abfab; +[SCCDGallerySnapAttributes collageUCOLensId] */

undefined ** FUN_10b6abfa0(void)

{
  return &PTR____CFConstantStringClassReference_110f6e938;
}



/* Entry: 10b6abfac; end: 10b6abfb7; +[SCCDGallerySnapAttributes createTimeUtc] */

undefined ** FUN_10b6abfac(void)

{
  return &PTR____CFConstantStringClassReference_110f6e2d8;
}



/* Entry: 10b6abfb8; end: 10b6abfc3; +[SCCDGallerySnapAttributes createdFromCameraRollItemIds] */

undefined ** FUN_10b6abfb8(void)

{
  return &PTR____CFConstantStringClassReference_110f6f4b8;
}



/* Entry: 10b6abfc4; end: 10b6abfcf; +[SCCDGallerySnapAttributes createdFromSnapIds] */

undefined ** FUN_10b6abfc4(void)

{
  return &PTR____CFConstantStringClassReference_110f6f4d8;
}



/* Entry: 10b6abfd0; end: 10b6abfdb; +[SCCDGallerySnapAttributes deviceFirmwareInfo] */

undefined ** FUN_10b6abfd0(void)

{
  return &PTR____CFConstantStringClassReference_110f6f4f8;
}



/* Entry: 10b6abfdc; end: 10b6abfe7; +[SCCDGallerySnapAttributes deviceId] */

undefined ** FUN_10b6abfdc(void)

{
  return &PTR____CFConstantStringClassReference_110e0fa78;
}



/* Entry: 10b6abfe8; end: 10b6abff3; +[SCCDGallerySnapAttributes duplicatedFromSnapId] */

undefined ** FUN_10b6abfe8(void)

{
  return &PTR____CFConstantStringClassReference_110ec3a98;
}



/* Entry: 10b6abff4; end: 10b6abfff; +[SCCDGallerySnapAttributes duration] */

undefined ** FUN_10b6abff4(void)

{
  return &PTR____CFConstantStringClassReference_110dd00b8;
}



/* Entry: 10b6ac000; end: 10b6ac00b; +[SCCDGallerySnapAttributes encryption] */

undefined ** FUN_10b6ac000(void)

{
  return &PTR____CFConstantStringClassReference_110effff8;
}



/* Entry: 10b6ac00c; end: 10b6ac017; +[SCCDGallerySnapAttributes externalId] */

undefined ** FUN_10b6ac00c(void)

{
  return &PTR____CFConstantStringClassReference_110f6e9d8;
}



/* Entry: 10b6ac018; end: 10b6ac023; +[SCCDGallerySnapAttributes externalMetadata] */

undefined ** FUN_10b6ac018(void)

{
  return &PTR____CFConstantStringClassReference_110f6f518;
}



/* Entry: 10b6ac024; end: 10b6ac02f; +[SCCDGallerySnapAttributes framing] */

undefined ** FUN_10b6ac024(void)

{
  return &PTR____CFConstantStringClassReference_110ea2598;
}



/* Entry: 10b6ac030; end: 10b6ac03b; +[SCCDGallerySnapAttributes groupName] */

undefined ** FUN_10b6ac030(void)

{
  return &PTR____CFConstantStringClassReference_110ec9c18;
}



/* Entry: 10b6ac03c; end: 10b6ac047; +[SCCDGallerySnapAttributes hasInterestingnessScore] */

undefined ** FUN_10b6ac03c(void)

{
  return &PTR____CFConstantStringClassReference_110f6f1b8;
}



/* Entry: 10b6ac048; end: 10b6ac053; +[SCCDGallerySnapAttributes hasLocation] */

undefined ** FUN_10b6ac048(void)

{
  return &PTR____CFConstantStringClassReference_110f6f1f8;
}



/* Entry: 10b6ac054; end: 10b6ac05f; +[SCCDGallerySnapAttributes hasOverlayImage] */

undefined ** FUN_10b6ac054(void)

{
  return &PTR____CFConstantStringClassReference_110f6f238;
}



/* Entry: 10b6ac060; end: 10b6ac06b; +[SCCDGallerySnapAttributes hasSynced] */

undefined ** FUN_10b6ac060(void)

{
  return &PTR____CFConstantStringClassReference_110f6ec98;
}



/* Entry: 10b6ac06c; end: 10b6ac077; +[SCCDGallerySnapAttributes hasThumbnail] */

undefined ** FUN_10b6ac06c(void)

{
  return &PTR____CFConstantStringClassReference_110f6f278;
}



/* Entry: 10b6ac078; end: 10b6ac083; +[SCCDGallerySnapAttributes height] */

undefined ** FUN_10b6ac078(void)

{
  return &PTR____CFConstantStringClassReference_110db1258;
}



/* Entry: 10b6ac084; end: 10b6ac08f; +[SCCDGallerySnapAttributes infiniteDuration] */

undefined ** FUN_10b6ac084(void)

{
  return &PTR____CFConstantStringClassReference_110f6f2d8;
}



/* Entry: 10b6ac090; end: 10b6ac09b; +[SCCDGallerySnapAttributes interestingnessScore] */

undefined ** FUN_10b6ac090(void)

{
  return &PTR____CFConstantStringClassReference_110f6f318;
}



/* Entry: 10b6ac09c; end: 10b6ac0a7; +[SCCDGallerySnapAttributes isTemporary] */

undefined ** FUN_10b6ac09c(void)

{
  return &PTR____CFConstantStringClassReference_110e09cf8;
}



/* Entry: 10b6ac0a8; end: 10b6ac0b3; +[SCCDGallerySnapAttributes mediaAttributes] */

undefined ** FUN_10b6ac0a8(void)

{
  return &PTR____CFConstantStringClassReference_110f6f538;
}



/* Entry: 10b6ac0b4; end: 10b6ac0bf; +[SCCDGallerySnapAttributes mediaDownloadUrl] */

undefined ** FUN_10b6ac0b4(void)

{
  return &PTR____CFConstantStringClassReference_110f6f558;
}



/* Entry: 10b6ac0c0; end: 10b6ac0cb; +[SCCDGallerySnapAttributes mediaFormat] */

undefined ** FUN_10b6ac0c0(void)

{
  return &PTR____CFConstantStringClassReference_110e8a2f8;
}



/* Entry: 10b6ac0cc; end: 10b6ac0d7; +[SCCDGallerySnapAttributes mediaId] */

undefined ** FUN_10b6ac0cc(void)

{
  return &PTR____CFConstantStringClassReference_110dbb378;
}



/* Entry: 10b6ac0d8; end: 10b6ac0e3; +[SCCDGallerySnapAttributes mediaOrigin] */

undefined ** FUN_10b6ac0d8(void)

{
  return &PTR____CFConstantStringClassReference_110f6f378;
}



/* Entry: 10b6ac0e4; end: 10b6ac0ef; +[SCCDGallerySnapAttributes mediaRedirectURI] */

undefined ** FUN_10b6ac0e4(void)

{
  return &PTR____CFConstantStringClassReference_110f6f578;
}



/* Entry: 10b6ac0f0; end: 10b6ac0fb; +[SCCDGallerySnapAttributes mediaType] */

undefined ** FUN_10b6ac0f0(void)

{
  return &PTR____CFConstantStringClassReference_110e8a318;
}



/* Entry: 10b6ac0fc; end: 10b6ac107; +[SCCDGallerySnapAttributes memDataIds] */

undefined ** FUN_10b6ac0fc(void)

{
  return &PTR____CFConstantStringClassReference_110f6f598;
}



/* Entry: 10b6ac108; end: 10b6ac113; +[SCCDGallerySnapAttributes multiSnapGroupId] */

undefined ** FUN_10b6ac108(void)

{
  return &PTR____CFConstantStringClassReference_110f6f5b8;
}



/* Entry: 10b6ac114; end: 10b6ac11f; +[SCCDGallerySnapAttributes orientation] */

undefined ** FUN_10b6ac114(void)

{
  return &PTR____CFConstantStringClassReference_110e29738;
}



/* Entry: 10b6ac120; end: 10b6ac12b; +[SCCDGallerySnapAttributes overlayDownloadUrl] */

undefined ** FUN_10b6ac120(void)

{
  return &PTR____CFConstantStringClassReference_110f6f5d8;
}



/* Entry: 10b6ac12c; end: 10b6ac137; +[SCCDGallerySnapAttributes overlayRedirectURI] */

undefined ** FUN_10b6ac12c(void)

{
  return &PTR____CFConstantStringClassReference_110f6f5f8;
}



/* Entry: 10b6ac138; end: 10b6ac143; +[SCCDGallerySnapAttributes placeholderCreateTime] */

undefined ** FUN_10b6ac138(void)

{
  return &PTR____CFConstantStringClassReference_110f6f618;
}



/* Entry: 10b6ac144; end: 10b6ac14f; +[SCCDGallerySnapAttributes retryFromSnapId] */

undefined ** FUN_10b6ac144(void)

{
  return &PTR____CFConstantStringClassReference_110f6f638;
}



/* Entry: 10b6ac150; end: 10b6ac15b; +[SCCDGallerySnapAttributes saverUserId] */

undefined ** FUN_10b6ac150(void)

{
  return &PTR____CFConstantStringClassReference_110f6eaf8;
}



/* Entry: 10b6ac15c; end: 10b6ac167; +[SCCDGallerySnapAttributes sensorBlob] */

undefined ** FUN_10b6ac15c(void)

{
  return &PTR____CFConstantStringClassReference_110f6f658;
}



/* Entry: 10b6ac168; end: 10b6ac173; +[SCCDGallerySnapAttributes servletMediaFormat] */

undefined ** FUN_10b6ac168(void)

{
  return &PTR____CFConstantStringClassReference_110f6f678;
}



/* Entry: 10b6ac174; end: 10b6ac17f; +[SCCDGallerySnapAttributes snapAssets] */

undefined ** FUN_10b6ac174(void)

{
  return &PTR____CFConstantStringClassReference_110ea04d8;
}



/* Entry: 10b6ac180; end: 10b6ac18b; +[SCCDGallerySnapAttributes snapDocData] */

undefined ** FUN_10b6ac180(void)

{
  return &PTR____CFConstantStringClassReference_110f6f698;
}



/* Entry: 10b6ac18c; end: 10b6ac197; +[SCCDGallerySnapAttributes snapId] */

undefined ** FUN_10b6ac18c(void)

{
  return &PTR____CFConstantStringClassReference_110dba818;
}



/* Entry: 10b6ac198; end: 10b6ac1a3; +[SCCDGallerySnapAttributes sojuMediaType] */

undefined ** FUN_10b6ac198(void)

{
  return &PTR____CFConstantStringClassReference_110f6f6b8;
}



/* Entry: 10b6ac1a4; end: 10b6ac1af; +[SCCDGallerySnapAttributes source] */

undefined ** FUN_10b6ac1a4(void)

{
  return &PTR____CFConstantStringClassReference_110dae8d8;
}



/* Entry: 10b6ac1b0; end: 10b6ac1bb; +[SCCDGallerySnapAttributes templateId] */

undefined ** FUN_10b6ac1b0(void)

{
  return &PTR____CFConstantStringClassReference_110df7f58;
}



/* Entry: 10b6ac1bc; end: 10b6ac1c7; +[SCCDGallerySnapAttributes thumbnailDownloadUrl] */

undefined ** FUN_10b6ac1bc(void)

{
  return &PTR____CFConstantStringClassReference_110f6f6d8;
}



/* Entry: 10b6ac1c8; end: 10b6ac1d3; +[SCCDGallerySnapAttributes thumbnailRedirectURI] */

undefined ** FUN_10b6ac1c8(void)

{
  return &PTR____CFConstantStringClassReference_110f6f6f8;
}



/* Entry: 10b6ac1d4; end: 10b6ac1df; +[SCCDGallerySnapAttributes thumbnailUploadState] */

undefined ** FUN_10b6ac1d4(void)

{
  return &PTR____CFConstantStringClassReference_110f6f418;
}



/* Entry: 10b6ac1e0; end: 10b6ac1eb; +[SCCDGallerySnapAttributes timeZoneName] */

undefined ** FUN_10b6ac1e0(void)

{
  return &PTR____CFConstantStringClassReference_110f6f718;
}



/* Entry: 10b6ac1ec; end: 10b6ac1f7; +[SCCDGallerySnapAttributes toolVersions] */

undefined ** FUN_10b6ac1ec(void)

{
  return &PTR____CFConstantStringClassReference_110f6f738;
}



/* Entry: 10b6ac1f8; end: 10b6ac203; +[SCCDGallerySnapAttributes transferBatchId] */

undefined ** FUN_10b6ac1f8(void)

{
  return &PTR____CFConstantStringClassReference_110f6f758;
}



/* Entry: 10b6ac204; end: 10b6ac20f; +[SCCDGallerySnapAttributes width] */

undefined ** FUN_10b6ac204(void)

{
  return &PTR____CFConstantStringClassReference_110db1238;
}



/* Entry: 10b6ac210; end: 10b6ac21b; +[SCCDGallerySnapRelationships detail] */

undefined ** FUN_10b6ac210(void)

{
  return &PTR____CFConstantStringClassReference_110ec83d8;
}



/* Entry: 10b6ac21c; end: 10b6ac227; +[SCCDGallerySnapRelationships entry] */

undefined ** FUN_10b6ac21c(void)

{
  return &PTR____CFConstantStringClassReference_110df9af8;
}



/* Entry: 10b6ac228; end: 10b6ac233; +[SCCDGallerySnapRelationships entryHighlighted] */

undefined ** FUN_10b6ac228(void)

{
  return &PTR____CFConstantStringClassReference_110f6f778;
}



/* Entry: 10b6ac234; end: 10b6ac23f; +[SCCDGallerySnapRelationships miniThumbnail] */

undefined ** FUN_10b6ac234(void)

{
  return &PTR____CFConstantStringClassReference_110ec83f8;
}



/* Entry: 10b6ac240; end: 10b6ac24b; +[SCCDGallerySnapRelationships owner] */

undefined ** FUN_10b6ac240(void)

{
  return &PTR____CFConstantStringClassReference_110ea4598;
}



/* Entry: 10b6ac24c; end: 10b6ac257; +[SCCDGallerySnapRelationships ownerDeleted] */

undefined ** FUN_10b6ac24c(void)

{
  return &PTR____CFConstantStringClassReference_110f6ebd8;
}



/* Entry: 10b6ac258; end: 10b6ac263; +[SCCDGallerySnapRelationships syncedEntry] */

undefined ** FUN_10b6ac258(void)

{
  return &PTR____CFConstantStringClassReference_110f6ed38;
}



/* Entry: 10b6ac264; end: 10b6ac26f; +[SCCDGallerySnapRelationships syncedEntryHighlighted] */

undefined ** FUN_10b6ac264(void)

{
  return &PTR____CFConstantStringClassReference_110f6f798;
}



/* Entry: 10b6ac270; end: 10b6ac27b; +[SCCDGallerySnapUserInfo key] */

undefined ** FUN_10b6ac270(void)

{
  return &PTR____CFConstantStringClassReference_110ddd998;
}



/* Entry: 10b6ac27c; end: 10b6ac293; +[_SCCDGallerySnapDetail insertInManagedObjectContext:] */

void FUN_10b6ac27c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_insertNewObjectForEntityForName__1125f74c0,
             &PTR____CFConstantStringClassReference_110f6f7b8,param_3);
  return;
}



/* Entry: 10b6ac294; end: 10b6ac29f; +[_SCCDGallerySnapDetail entityName] */

undefined ** FUN_10b6ac294(void)

{
  return &PTR____CFConstantStringClassReference_110f6f7b8;
}



/* Entry: 10b6ac2a0; end: 10b6ac2b7; +[_SCCDGallerySnapDetail entityInManagedObjectContext:] */

void FUN_10b6ac2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_entityForName_inManagedObjectCon_1125c3520,
             &PTR____CFConstantStringClassReference_110f6f7b8,param_3);
  return;
}



/* Entry: 10b6ac2b8; end: 10b6ac2f3; -[_SCCDGallerySnapDetail objectID] */

void FUN_10b6ac2b8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709cc0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_objectID_112615a70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6ac2f4; end: 10b6ac32f; +[_SCCDGallerySnapDetail keyPathsForValuesAffectingValueForKey:] */

void FUN_10b6ac2f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709cc8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_keyPathsForValuesAffectingValueF_112543760);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6ac330; end: 10b6ac33b; +[SCCDGallerySnapDetailAttributes overlay] */

undefined ** FUN_10b6ac330(void)

{
  return &PTR____CFConstantStringClassReference_110de71b8;
}



/* Entry: 10b6ac33c; end: 10b6ac347; +[SCCDGallerySnapDetailRelationships snap] */

undefined ** FUN_10b6ac33c(void)

{
  return &PTR____CFConstantStringClassReference_110dbddd8;
}



/* Entry: 10b6ac348; end: 10b6ac35f; +[_SCCDGallerySnapDoc insertInManagedObjectContext:] */

void FUN_10b6ac348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_insertNewObjectForEntityForName__1125f74c0,
             &PTR____CFConstantStringClassReference_110f6f7d8,param_3);
  return;
}



/* Entry: 10b6ac360; end: 10b6ac36b; +[_SCCDGallerySnapDoc entityName] */

undefined ** FUN_10b6ac360(void)

{
  return &PTR____CFConstantStringClassReference_110f6f7d8;
}



/* Entry: 10b6ac36c; end: 10b6ac383; +[_SCCDGallerySnapDoc entityInManagedObjectContext:] */

void FUN_10b6ac36c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_entityForName_inManagedObjectCon_1125c3520,
             &PTR____CFConstantStringClassReference_110f6f7d8,param_3);
  return;
}



/* Entry: 10b6ac384; end: 10b6ac3bf; -[_SCCDGallerySnapDoc objectID] */

void FUN_10b6ac384(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709cd0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_objectID_112615a70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6ac3c0; end: 10b6ac4af; +[_SCCDGallerySnapDoc keyPathsForValuesAffectingValueForKey:] */

void FUN_10b6ac3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = PTR_s_keyPathsForValuesAffectingValueF_112543760;
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112709cd8;
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



/* Entry: 10b6ac4b0; end: 10b6ac4eb; -[_SCCDGallerySnapDoc hasSyncedValue] */

undefined8 FUN_10b6ac4b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfdd120();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6ac4ec; end: 10b6ac52f; -[_SCCDGallerySnapDoc setHasSyncedValue:] */

void FUN_10b6ac4ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7000(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6ac530; end: 10b6ac56b; -[_SCCDGallerySnapDoc primitiveHasSyncedValue] */

undefined8 FUN_10b6ac530(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b6ac56c; end: 10b6ac5af; -[_SCCDGallerySnapDoc setPrimitiveHasSyncedValue:] */

void FUN_10b6ac56c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2e60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6ac5b0; end: 10b6ac5bb; +[SCCDGallerySnapDocAttributes hasSynced] */

undefined ** FUN_10b6ac5b0(void)

{
  return &PTR____CFConstantStringClassReference_110f6ec98;
}



/* Entry: 10b6ac5bc; end: 10b6ac5c7; +[SCCDGallerySnapDocAttributes localCreationId] */

undefined ** FUN_10b6ac5bc(void)

{
  return &PTR____CFConstantStringClassReference_110f6ed18;
}



/* Entry: 10b6ac5c8; end: 10b6ac5d3; +[SCCDGallerySnapDocAttributes snapDocData] */

undefined ** FUN_10b6ac5c8(void)

{
  return &PTR____CFConstantStringClassReference_110f6f698;
}



/* Entry: 10b6ac5d4; end: 10b6ac5df; +[SCCDGallerySnapDocRelationships entry] */

undefined ** FUN_10b6ac5d4(void)

{
  return &PTR____CFConstantStringClassReference_110df9af8;
}



/* Entry: 10b6ac5e0; end: 10b6ac5eb; +[SCCDGallerySnapDocRelationships syncedEntry] */

undefined ** FUN_10b6ac5e0(void)

{
  return &PTR____CFConstantStringClassReference_110f6ed38;
}



/* Entry: 10b6ac5ec; end: 10b6ac603; +[_SCCDGallerySnapMiniThumbnail insertInManagedObjectContext:] */

void FUN_10b6ac5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_insertNewObjectForEntityForName__1125f74c0,
             &PTR____CFConstantStringClassReference_110f6f7f8,param_3);
  return;
}



/* Entry: 10b6ac604; end: 10b6ac60f; +[_SCCDGallerySnapMiniThumbnail entityName] */

undefined ** FUN_10b6ac604(void)

{
  return &PTR____CFConstantStringClassReference_110f6f7f8;
}


