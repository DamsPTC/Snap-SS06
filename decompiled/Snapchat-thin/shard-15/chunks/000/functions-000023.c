/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b779144; end: 10b779163; -[SOJUGalleryRatingStickerStyle initWithRating:styleId:] */

void FUN_10b779144(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b779164; end: 10b77928f; +[SOJUGalleryRatingStickerStyle registerMessageFields:] */

void FUN_10b779164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_rating_1126259a0;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,1,0,0,0,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_styleId_112675248,0,1,6,0,0x10b7791f4,FUN_10b779290,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b779290; end: 10b7792ff;  */

undefined ** FUN_10b779290(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x5cfef33) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7e778;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef3198;
  if (param_1 != 0x5e8f046) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef5d78;
  if (param_1 != 0x360652) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7e798;
  if (param_1 != -0x577da45c) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b779300; end: 10b77931f; -[SOJUGalleryRequestStickerStyle initWithRequestText:requestId:stickerStyle:] */

void FUN_10b779300(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b779320; end: 10b7793b3; +[SOJUGalleryRequestStickerStyle registerMessageFields:] */

void FUN_10b779320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_requestText_11262b4a8;
  _objc_retain(param_3);
  FUN_10b7793b4(param_3,param_2,puVar1);
  func_0x00010bf06b60();
  FUN_10b7793b4(param_3,param_2,PTR_s_requestId_11262afe0);
  func_0x00010bf06b60();
  FUN_10b7793b4(param_3,param_2,PTR_s_stickerStyle_112545d60);
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7793b4; end: 10b7793c7;  */

void FUN_10b7793b4(void)

{
  return;
}



/* Entry: 10b7793c8; end: 10b7793d3; +[SOJUGalleryRequestStickerStyleBuilder messageClass] */

void FUN_10b7793c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0cd8);
  return;
}



/* Entry: 10b7793d4; end: 10b7793d7; +[SOJUGalleryRequestStickerStyleBuilder withJUGalleryRequestStickerStyle:] */

void FUN_10b7793d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7793d8; end: 10b779457;  */

undefined8 FUN_10b7793d8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dceb38;
  func_0x00010b7794a8();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x6233516;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dceb58;
    func_0x00010b7794a8();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x2eef76;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ef3978;
      func_0x00010b7794a8();
      uVar2 = 0x3a0799b6;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b779458; end: 10b7794af;  */

undefined ** FUN_10b779458(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x2eef76) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dceb58;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dceb38;
  if (param_1 != 0x6233516) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef3978;
  if (param_1 != 0x3a0799b6) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7794b0; end: 10b7794cf; -[SOJUGalleryServletAddSnapsRequest initWithSnaps:storageVersionDeprecated:storageType:] */

void FUN_10b7794b0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7794d0; end: 10b7795a7; +[SOJUGalleryServletAddSnapsRequest registerMessageFields:] */

void FUN_10b7794d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0d58;
  puVar1 = PTR_s_snaps_11266efc8;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
  func_0x00010bf06b60(param_3,param_2,PTR_s_storageVersionDeprecated_112545d78,
                      &PTR____CFConstantStringClassReference_110f7e7b8,2,1,0,0,0,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_storageType_112545d80,0,1,6,0,FUN_10b77dfc4,
                      FUN_10b77e060,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7795a8; end: 10b7795b3; +[SOJUGalleryServletAddSnapsRequestBuilder messageClass] */

void FUN_10b7795a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0d60);
  return;
}



/* Entry: 10b7795b4; end: 10b7795b7; +[SOJUGalleryServletAddSnapsRequestBuilder withJUGalleryServletAddSnapsRequest:] */

void FUN_10b7795b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7795b8; end: 10b7795ef; -[SOJUGalleryServletAddSnapsResponse initWithServiceStatusCode:userString:backoffTime:debugInfo:quota:totalEntryCount:snaps:lastSeqnum:storageType:] */

void FUN_10b7795b8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7795f0; end: 10b779727; +[SOJUGalleryServletAddSnapsResponse registerMessageFields:] */

void FUN_10b7795f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_serviceStatusCode_112635848;
  _objc_retain(param_3);
  FUN_10b779728(param_3,param_2,puVar1,0,1,5);
  func_0x00010b779734();
  FUN_10b779728();
  func_0x00010b779734();
  FUN_10b779728();
  func_0x00010b779734();
  FUN_10b779728();
  _objc_opt_class(PTR_PTR_1126e0d68);
  func_0x00010b779748();
  func_0x00010b779734();
  FUN_10b779728();
  _objc_opt_class(PTR_PTR_1126e0d70);
  func_0x00010b779748();
  func_0x00010b779734();
  FUN_10b779728();
  func_0x00010bf06b60(param_3,param_2,PTR_s_storageType_112545d80,0,1,6,0,FUN_10b77dfc4,
                      FUN_10b77e060,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b779728; end: 10b779763;  */

void FUN_10b779728(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b779764; end: 10b77978b; -[SOJUGalleryServletBaseResponse initWithServiceStatusCode:userString:backoffTime:debugInfo:quota:totalEntryCount:] */

void FUN_10b779764(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77978c; end: 10b77984f; +[SOJUGalleryServletBaseResponse registerMessageFields:] */

void FUN_10b77978c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b779870();
  func_0x00010b779850();
  func_0x00010b77985c();
  func_0x00010b779850();
  func_0x00010b77985c();
  func_0x00010b779850();
  func_0x00010b77985c();
  func_0x00010b779850();
  _objc_opt_class(PTR_PTR_1126e0d68);
  func_0x00010b779870();
  func_0x00010bf06b60();
  func_0x00010b77985c();
  func_0x00010b779850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b779850; end: 10b779883;  */

void FUN_10b779850(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b779884; end: 10b7798b3; -[SOJUGalleryServletClientConfigResponse initWithServiceStatusCode:userString:backoffTime:debugInfo:quota:totalEntryCount:defaultQueries:blockedTags:] */

void FUN_10b779884(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7798b4; end: 10b779a0b; +[SOJUGalleryServletClientConfigResponse registerMessageFields:] */

void FUN_10b7798b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_serviceStatusCode_112635848;
  _objc_retain(param_3);
  FUN_10b779a0c(param_3,param_2,puVar1,0,1,5);
  func_0x00010b779a18();
  FUN_10b779a0c();
  func_0x00010b779a18();
  FUN_10b779a0c();
  func_0x00010b779a18();
  FUN_10b779a0c();
  puVar1 = PTR_s_quota_1126254c8;
  puVar2 = PTR_PTR_1126e0d68;
  _objc_opt_class(PTR_PTR_1126e0d68);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
  func_0x00010b779a18();
  FUN_10b779a0c();
  func_0x00010b779a18();
  FUN_10b779a0c();
  func_0x00010c19a460(param_3,param_2,0xd0dc2c88b979f);
  func_0x00010b779a18();
  FUN_10b779a0c();
  func_0x00010c19a460(param_3,param_2,0x78945b4fa43d10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b779a0c; end: 10b779a27;  */

void FUN_10b779a0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b779a28; end: 10b779a47; -[SOJUGalleryServletCollectionsFaceTagInfo initWithTopFriendNames:containsSelf:hasUnlabeledClusters:] */

void FUN_10b779a28(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b779a48; end: 10b779ad7; +[SOJUGalleryServletCollectionsFaceTagInfo registerMessageFields:] */

void FUN_10b779a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_topFriendNames_112545db8;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,0,0,0,1);
  func_0x00010c19a460(param_3,param_2,0xaf4eaf6b925d93);
  FUN_10b779ad8();
  FUN_10b779ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b779ad8; end: 10b779af7;  */

void FUN_10b779ad8(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b779af8; end: 10b779b03; +[SOJUGalleryServletCollectionsFaceTagInfoBuilder messageClass] */

void FUN_10b779af8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0d78);
  return;
}



/* Entry: 10b779b04; end: 10b779b07; +[SOJUGalleryServletCollectionsFaceTagInfoBuilder withJUGalleryServletCollectionsFaceTagInfo:] */

void FUN_10b779b04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b779b08; end: 10b779b87; -[SOJUGalleryServletCollectionsGalleryCollection initWithCollectionId:title:createTime:lastUpdatedTime:expirationTime:collectionType:category:groups:thumbnailUrl:thumbnailFormat:encryption:minimumGroupsCountRequirement:bitmojiComicId:subtitle:thumbnailUrlType:isThumbnailEncrypted:titleOverlayUrl:titleOverlayUrlType:personalizedThumbnailUrl:personalizedThumbnailUrlType:isPersonalizedThumbnailEncrypted:personalizedThumbnailSnapIds:priority:additionalAttributes:recommendedThumbnailSnapIds:supercuts:templateName:activationTime:failureHandlingConfig:featuredStoryMetadata:faceTagInfo:featuredStoryLoggingInfo:] */

void FUN_10b779b08(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b779b88; end: 10b779ea3; +[SOJUGalleryServletCollectionsGalleryCollection registerMessageFields:] */

void FUN_10b779b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b779f2c();
  func_0x00010b779ed8();
  func_0x00010b779ef4();
  func_0x00010b779ed8();
  func_0x00010b779ec4();
  func_0x00010b779ee8();
  func_0x00010b779ec4();
  func_0x00010b779ee8();
  func_0x00010b779ec4();
  func_0x00010b779ee8();
  func_0x00010b779ec4();
  func_0x00010b779ee8();
  func_0x00010b779ef4();
  func_0x00010b779ee8();
  _objc_opt_class(PTR_PTR_1126e0d80);
  func_0x00010b779f04();
  func_0x00010b779ea4();
  func_0x00010b779ec4();
  func_0x00010b779ee8();
  _objc_opt_class(PTR_PTR_1126dbf78);
  func_0x00010b779f04();
  func_0x00010b779ec4();
  func_0x00010b779ee8();
  func_0x00010b779ea4();
  func_0x00010b779ef4();
  func_0x00010b779ed8();
  func_0x00010b779ec4();
  func_0x00010b779ee8();
  func_0x00010b779ec4();
  func_0x00010b779ee8();
  func_0x00010b779ea4();
  func_0x00010b779ec4();
  func_0x00010b779ee8();
  func_0x00010b779ea4();
  func_0x00010b779ec4();
  func_0x00010b779ee8();
  func_0x00010b779ec4();
  func_0x00010b779ee8();
  func_0x00010b779ee8(param_3,param_2,PTR_s_personalizedThumbnailSnapIds_11261c3e8,0,1,7);
  func_0x00010c19a460(param_3,param_2,0x1fe956883ce529);
  func_0x00010b779ef4();
  func_0x00010b779ee8();
  _objc_opt_class(PTR_PTR_1126e0d88);
  func_0x00010b779f2c();
  func_0x00010b779f20();
  func_0x00010b779ee8(param_3,param_2,PTR_s_recommendedThumbnailSnapIds_112545e10,0,1,7);
  func_0x00010c19a460(param_3,param_2,0xa9e7064f6046db);
  _objc_opt_class(PTR_PTR_1126e0d90);
  func_0x00010b779f04();
  func_0x00010b779ea4();
  func_0x00010b779ec4();
  func_0x00010b779ee8();
  func_0x00010b779ea4();
  func_0x00010b779ea4();
  _objc_opt_class(PTR_PTR_1126e0d78);
  func_0x00010b779f2c();
  func_0x00010b779f20();
  func_0x00010b779ea4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b779ea4; end: 10b779f3b;  */

void FUN_10b779ea4(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b779f3c; end: 10b779f5f; -[SOJUGalleryServletCollectionsGalleryCollectionAttributes initWithFriendUserId:playbackChromeTitle:playbackChromeSubtitle:prefillChatMessage:compositions:] */

void FUN_10b779f3c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b779f60; end: 10b77a027; +[SOJUGalleryServletCollectionsGalleryCollectionAttributes registerMessageFields:] */

void FUN_10b779f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_friendUserId_1125cbdf0;
  _objc_retain(param_3);
  FUN_10b77a028(param_3,param_2,puVar1);
  FUN_10b77a028(param_3,param_2,PTR_s_playbackChromeTitle_11261d610);
  FUN_10b77a028(param_3,param_2,PTR_s_playbackChromeSubtitle_11261d608);
  FUN_10b77a028(param_3,param_2,PTR_s_prefillChatMessage_11261fb18);
  puVar1 = PTR_s_compositions_1125aef40;
  puVar2 = PTR_PTR_1126e0d98;
  _objc_opt_class(PTR_PTR_1126e0d98);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77a028; end: 10b77a03f;  */

void FUN_10b77a028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b77a040; end: 10b77a04b; +[SOJUGalleryServletCollectionsGalleryCollectionBuilder messageClass] */

void FUN_10b77a040(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126bf9a8);
  return;
}



/* Entry: 10b77a04c; end: 10b77a04f; +[SOJUGalleryServletCollectionsGalleryCollectionBuilder withJUGalleryServletCollectionsGalleryCollection:] */

void FUN_10b77a04c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77a050; end: 10b77a087; -[SOJUGalleryServletCollectionsGalleryCollectionGroup initWithName:minimumSnapsCountRequirement:snaps:titleSnapIds:mashups:serverGeneratedSnaps:cameraRollItems:itemOrder:chromeSubtitle:] */

void FUN_10b77a050(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77a088; end: 10b77a1fb; +[SOJUGalleryServletCollectionsGalleryCollectionGroup registerMessageFields:] */

void FUN_10b77a088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b77a230();
  func_0x00010b77a21c();
  func_0x00010b77a21c(param_3,param_2,PTR_s_minimumSnapsCountRequirement_112545e50,0,1,1);
  _objc_opt_class(PTR_PTR_1126e0da0);
  func_0x00010b77a230();
  func_0x00010bf06b60();
  func_0x00010b77a1fc();
  func_0x00010b77a228();
  func_0x00010b77a21c(param_3,param_2,PTR_s_mashups_11260ca58,0,0,7);
  func_0x00010b77a228();
  func_0x00010b77a1fc();
  func_0x00010b77a228();
  func_0x00010b77a1fc();
  func_0x00010b77a228();
  func_0x00010b77a1fc();
  func_0x00010b77a228();
  func_0x00010b77a21c(param_3,param_2,PTR_s_chromeSubtitle_1125abe90,0,1,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77a1fc; end: 10b77a243;  */

void FUN_10b77a1fc(void)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b77a244; end: 10b77a263; -[SOJUGalleryServletCollectionsGalleryCollectionSnapComposition initWithServerSnapId:originalSnapIds:] */

void FUN_10b77a244(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77a264; end: 10b77a2fb; +[SOJUGalleryServletCollectionsGalleryCollectionSnapComposition registerMessageFields:] */

void FUN_10b77a264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_serverSnapId_112635788;
  _objc_retain(param_3);
  FUN_10b77a2fc(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  FUN_10b77a2fc(param_3,param_2,PTR_s_originalSnapIds_112619070,0,1,7,in_x6,in_x7,0,1);
  func_0x00010c19a460(param_3,param_2,0x603eed6b314477);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77a2fc; end: 10b77a307;  */

void FUN_10b77a2fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77a308; end: 10b77a327; -[SOJUGalleryServletDefunctMedia initWithMediaId:defunctReason:] */

void FUN_10b77a308(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77a328; end: 10b77a39b; +[SOJUGalleryServletDefunctMedia registerMessageFields:] */

void FUN_10b77a328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_mediaId_11260ee78;
  _objc_retain(param_3);
  FUN_10b77a39c(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  FUN_10b77a39c(param_3,param_2,PTR_s_defunctReason_112545e70,0,1,5,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77a39c; end: 10b77a3a7;  */

void FUN_10b77a39c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77a3a8; end: 10b77a3ab; -[SOJUGalleryServletDeleteEntriesRequest initWithEntries:] */

void FUN_10b77a3a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b77a3ac; end: 10b77a423; +[SOJUGalleryServletDeleteEntriesRequest registerMessageFields:] */

void FUN_10b77a3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0da8;
  puVar1 = PTR_s_entries_1125c3598;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77a424; end: 10b77a42f; +[SOJUGalleryServletDeleteEntriesRequestBuilder messageClass] */

void FUN_10b77a424(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0db0);
  return;
}



/* Entry: 10b77a430; end: 10b77a433; +[SOJUGalleryServletDeleteEntriesRequestBuilder withJUGalleryServletDeleteEntriesRequest:] */

void FUN_10b77a430(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77a434; end: 10b77a463; -[SOJUGalleryServletDeleteEntriesResponse initWithEntries:lastSeqnum:serviceStatusCode:userString:backoffTime:debugInfo:quota:totalEntryCount:] */

void FUN_10b77a434(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77a464; end: 10b77a55b; +[SOJUGalleryServletDeleteEntriesResponse registerMessageFields:] */

void FUN_10b77a464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0db8;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  func_0x00010b77a57c();
  func_0x00010b77a55c();
  func_0x00010b77a570();
  func_0x00010b77a55c();
  func_0x00010b77a570();
  func_0x00010b77a55c();
  func_0x00010b77a570();
  func_0x00010b77a55c();
  func_0x00010b77a570();
  func_0x00010b77a55c();
  func_0x00010b77a570();
  _objc_opt_class(PTR_PTR_1126e0d68);
  func_0x00010b77a57c();
  func_0x00010b77a55c();
  func_0x00010b77a570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77a55c; end: 10b77a597;  */

void FUN_10b77a55c(void)

{
  return;
}



/* Entry: 10b77a598; end: 10b77a5f3; -[SOJUGalleryServletEntryParams initWithEntryId:entryType:snapIds:snapsUploadInfo:highlightedSnapIds:seqNum:createTime:title:isPrivate:lastAutosaveTime:externalId:snapOperations:entrySource:deleteAllShared:snapDoc:assetsDeprecated:entryAssets:folderType:memDataId:] */

void FUN_10b77a598(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77a5f4; end: 10b77a84f; +[SOJUGalleryServletEntryParams registerMessageFields:] */

void FUN_10b77a5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_entryId_1125c3628;
  _objc_retain(param_3);
  func_0x00010b77a864(param_3,param_2,puVar1,0,1,6);
  func_0x00010b77a850();
  func_0x00010b77a864();
  func_0x00010b77a864(param_3,param_2,PTR_s_snapIds_11266df30,0,1,7);
  func_0x00010b77a88c();
  _objc_opt_class(PTR_PTR_1126e0dc0);
  func_0x00010b77a870();
  func_0x00010b77a864(param_3,param_2,PTR_s_highlightedSnapIds_1125d6720,0,1,7);
  func_0x00010b77a88c();
  func_0x00010b77a850();
  func_0x00010b77a864();
  func_0x00010b77a850();
  func_0x00010b77a864();
  func_0x00010b77a864(param_3,param_2,PTR_s_title_112679e90,0,0,6);
  func_0x00010b77a850();
  func_0x00010b77a864();
  func_0x00010b77a850();
  func_0x00010b77a864();
  func_0x00010b77a850();
  func_0x00010b77a864();
  _objc_opt_class(PTR_PTR_1126e0dc8);
  func_0x00010b77a870();
  func_0x00010b77a850();
  func_0x00010b77a864();
  func_0x00010b77a850();
  func_0x00010b77a864();
  func_0x00010b77a850();
  func_0x00010b77a864();
  func_0x00010b77a864(param_3,param_2,PTR_s_assetsDeprecated_112545eb0,
                      &PTR____CFConstantStringClassReference_110f7e7d8,2,7);
  func_0x00010b77a88c();
  func_0x00010b77a850();
  func_0x00010b77a864();
  func_0x00010b77a850();
  func_0x00010b77a864();
  _objc_opt_class(PTR_PTR_1126e0dd0);
  func_0x00010b77a870();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77a850; end: 10b77a893;  */

void FUN_10b77a850(void)

{
  return;
}



/* Entry: 10b77a894; end: 10b77a89f; +[SOJUGalleryServletEntryParamsBuilder messageClass] */

void FUN_10b77a894(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0da8);
  return;
}



/* Entry: 10b77a8a0; end: 10b77a8a3; +[SOJUGalleryServletEntryParamsBuilder withJUGalleryServletEntryParams:] */

void FUN_10b77a8a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77a8a4; end: 10b77a8cf; -[SOJUGalleryServletEntryResult initWithEntryId:seqNum:statusCode:debugInfo:snapMediaReferences:snapMemDataIds:memDataId:] */

void FUN_10b77a8a4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77a8d0; end: 10b77a9eb; +[SOJUGalleryServletEntryResult registerMessageFields:] */

void FUN_10b77a8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_entryId_1125c3628;
  _objc_retain(param_3);
  FUN_10b77a9ec(param_3,param_2,puVar1,0,1,6);
  func_0x00010b77aa14();
  FUN_10b77a9ec();
  func_0x00010b77aa14();
  FUN_10b77a9ec();
  func_0x00010b77aa14();
  FUN_10b77a9ec();
  func_0x00010b77aa14();
  FUN_10b77a9ec();
  func_0x00010c19a460(param_3,param_2,0x41e6ada58091c1);
  _objc_opt_class(PTR_PTR_1126d2c48);
  func_0x00010b77a9f8();
  _objc_opt_class(PTR_PTR_1126e0dd0);
  func_0x00010b77a9f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77a9ec; end: 10b77aa23;  */

void FUN_10b77a9ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77aa24; end: 10b77aa5f; -[SOJUGalleryServletFaceParams initWithFaceId:mediaId:boundingBox:relativeBoundingBox:mediaBytes:faceVersion:gender:genderScore:smileScore:hatScore:mediaTimestampMs:] */

void FUN_10b77aa24(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77aa60; end: 10b77abb3; +[SOJUGalleryServletFaceParams registerMessageFields:] */

void FUN_10b77aa60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b77abd4();
  func_0x00010b77abc8();
  func_0x00010b77abb4();
  func_0x00010b77abc8();
  _objc_opt_class(PTR_PTR_1126e0dd8);
  func_0x00010b77abd4();
  func_0x00010b77abec();
  _objc_opt_class(PTR_PTR_1126e0dd8);
  func_0x00010b77abd4();
  func_0x00010b77abec();
  func_0x00010b77abb4();
  func_0x00010b77abc8();
  func_0x00010bf06b60(param_3,param_2,PTR_s_faceVersion_112545ef0,0,1,6,0,FUN_10b77abf8,
                      FUN_10b77ac78,0);
  func_0x00010b77abc8(param_3,param_2,PTR_s_gender_1125cd488,0,0,5);
  func_0x00010b77abb4();
  func_0x00010b77abc8();
  func_0x00010b77abb4();
  func_0x00010b77abc8();
  func_0x00010b77abb4();
  func_0x00010b77abc8();
  func_0x00010b77abb4();
  func_0x00010b77abc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77abb4; end: 10b77abf7;  */

void FUN_10b77abb4(void)

{
  return;
}



/* Entry: 10b77abf8; end: 10b77ac77;  */

undefined8 FUN_10b77abf8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e7f8;
  func_0x00010b77accc();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x67b66502;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7e818;
    func_0x00010b77accc();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xfffffffffdfbc661;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7e838;
      func_0x00010b77accc();
      uVar2 = 0x667e0880;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b77ac78; end: 10b77acd3;  */

undefined ** FUN_10b77ac78(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x204399f) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7e818;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e838;
  if (param_1 != 0x667e0880) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7e7f8;
  if (param_1 != 0x67b66502) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b77acd4; end: 10b77ad2f; -[SOJUGalleryServletGalleryEntry initWithEntryId:seqNum:entryType:snaps:highlightedSnapIds:createTime:status:title:isPrivate:lastAutosaveTime:externalId:entrySource:snapOrder:snapOrderV2:shareLinkInfo:snapDoc:assets:folderType:memDataId:] */

void FUN_10b77acd4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77ad30; end: 10b77af87; +[SOJUGalleryServletGalleryEntry registerMessageFields:] */

void FUN_10b77ad30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b77afd0();
  func_0x00010b77af9c();
  func_0x00010b77afa8();
  func_0x00010b77af9c();
  func_0x00010b77af88();
  func_0x00010b77af9c();
  _objc_opt_class(PTR_PTR_1126e0da0);
  func_0x00010b77afd0();
  func_0x00010b77afe0();
  func_0x00010b77afa8();
  func_0x00010b77af9c();
  func_0x00010b77afb8();
  func_0x00010b77af88();
  func_0x00010b77af9c();
  func_0x00010b77afc0();
  func_0x00010b77af9c();
  func_0x00010b77afc0();
  func_0x00010b77af9c();
  func_0x00010b77af88();
  func_0x00010b77af9c();
  func_0x00010b77af88();
  func_0x00010b77af9c();
  func_0x00010b77af88();
  func_0x00010b77af9c();
  func_0x00010b77af88();
  func_0x00010b77af9c();
  func_0x00010b77afa8();
  func_0x00010b77af9c();
  func_0x00010b77afb8();
  func_0x00010b77afa8();
  func_0x00010b77af9c();
  func_0x00010b77afb8();
  func_0x00010b77af88();
  func_0x00010b77af9c();
  func_0x00010b77af88();
  func_0x00010b77af9c();
  func_0x00010b77afc0();
  func_0x00010b77af9c();
  func_0x00010b77afb8();
  func_0x00010b77af88();
  func_0x00010b77af9c();
  _objc_opt_class(PTR_PTR_1126e0dd0);
  func_0x00010b77afd0();
  func_0x00010b77afe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77af88; end: 10b77afeb;  */

void FUN_10b77af88(void)

{
  return;
}



/* Entry: 10b77afec; end: 10b77b143; -[SOJUGalleryServletGallerySnap initWithSnapId:defunct:mediaId:encryption:mediaType:overlay:createTime:orientation:overlayOrientation:location:timeZone:temperature:speed:battery:width:height:duration:size:mediaDownloadUrl:hdMediaDownloadUrl:hdMediaStatus:overlayDownloadUrl:hasOverlayImage:thumbnailDownloadUrl:hasThumbnail:tags:tagsVersion:cameraHardwareMountingDegrees:cameraFrontFacing:source:framing:statusCode:contentScore:deviceId:isInfiniteDurationDeprecated:miniThumbnailBytes:thumbnailRedirectUrlDeprecated:infiniteDuration:thumbnailRedirectUri:overlayRedirectUri:mediaRedirectUri:hdMediaRedirectUri:gzippedOverlay:thumbnailSize:overlayImageSize:hdMediaSize:captureTime:mediaFormat:multiSnapSegment:multiSnapGroupId:sensorBlob:toolVersions:spectaclesMetadataUrl:hasSpectaclesMetadata:spectaclesMetadataRedirectUri:hasDepthEffectDeprecated:mediaAttributes:spectaclesSecondaryMetadataUrl:hasSpectaclesSecondaryMetadata:spectaclesSecondaryMetadataRedirectUri:snapAssets:assets:thumbnailDirectDownloadUrl:overlayDirectDownloadUrl:mediaDirectDownloadUrl:snapDocDeprecated:snapDocString:externalMetadata:memDataIds:] */

void FUN_10b77afec(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77b144; end: 10b77b6eb; +[SOJUGalleryServletGallerySnap registerMessageFields:] */

void FUN_10b77b144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_snapId_11266deb0;
  _objc_retain(param_3);
  func_0x00010b77b740(param_3,param_2,puVar1,0,1);
  func_0x00010b77b788();
  func_0x00010b77b76c();
  func_0x00010b77b6ec();
  func_0x00010b77b788();
  func_0x00010b77b740();
  func_0x00010b77b72c();
  func_0x00010b77b77c();
  func_0x00010b77b788();
  func_0x00010b77b740();
  func_0x00010b77b72c();
  func_0x00010b77b77c();
  func_0x00010b77b788();
  func_0x00010b77b77c();
  func_0x00010b77b72c();
  func_0x00010b77b77c();
  _objc_opt_class(PTR_PTR_1126d8400);
  func_0x00010b77b79c();
  func_0x00010b77b7b4();
  func_0x00010b77b6ec();
  func_0x00010b77b788();
  func_0x00010b77b77c();
  func_0x00010b77b788();
  func_0x00010b77b77c();
  func_0x00010b77b788();
  func_0x00010b77b77c();
  func_0x00010b77b788();
  func_0x00010b77b77c();
  func_0x00010b77b788();
  func_0x00010b77b77c();
  func_0x00010b77b788();
  func_0x00010b77b77c();
  func_0x00010b77b788();
  func_0x00010b77b77c();
  func_0x00010b77b6ec();
  func_0x00010b77b6ec();
  func_0x00010b77b72c();
  func_0x00010b77b77c();
  func_0x00010b77b6ec();
  func_0x00010b77b70c();
  func_0x00010b77b6ec();
  func_0x00010b77b70c();
  func_0x00010b77b788();
  func_0x00010b77b740();
  func_0x00010b77b72c();
  func_0x00010b77b77c();
  func_0x00010b77b72c();
  func_0x00010b77b77c();
  func_0x00010b77b70c();
  _objc_opt_class(PTR_PTR_1126e0de0);
  func_0x00010b77b79c();
  func_0x00010b77b7b4();
  _objc_opt_class(PTR_PTR_1126cf0d8);
  func_0x00010b77b79c();
  func_0x00010b77b7b4();
  func_0x00010b77b72c();
  func_0x00010b77b77c();
  func_0x00010b77b72c();
  func_0x00010b77b77c();
  func_0x00010b77b6ec();
  func_0x00010b77b7c0();
  func_0x00010b77b76c();
  func_0x00010b77b6ec();
  func_0x00010b77b7c0();
  func_0x00010b77b740();
  func_0x00010b77b70c();
  func_0x00010b77b6ec();
  func_0x00010b77b6ec();
  func_0x00010b77b6ec();
  func_0x00010b77b6ec();
  func_0x00010b77b70c();
  func_0x00010b77b72c();
  func_0x00010b77b77c();
  func_0x00010b77b72c();
  func_0x00010b77b77c();
  func_0x00010b77b72c();
  func_0x00010b77b77c();
  func_0x00010b77b72c();
  func_0x00010b77b77c();
  func_0x00010bf06b60(param_3,param_2,PTR_s_mediaFormat_11260ee28,0,1,6,0,FUN_10b77c58c,
                      FUN_10b77c6b4,0);
  _objc_opt_class(PTR_PTR_1126e0de8);
  func_0x00010b77b750();
  func_0x00010b77b6ec();
  _objc_opt_class(PTR_PTR_1126e0df0);
  func_0x00010b77b750();
  _objc_opt_class(PTR_PTR_1126e0400);
  func_0x00010b77b750();
  func_0x00010b77b6ec();
  func_0x00010b77b70c();
  func_0x00010b77b6ec();
  func_0x00010b77b7c0();
  func_0x00010b77b76c();
  _objc_opt_class();
  func_0x00010b77b750();
  func_0x00010b77b6ec();
  func_0x00010b77b70c();
  func_0x00010b77b6ec();
  _objc_opt_class();
  func_0x00010b77b750();
  func_0x00010b77b77c(param_3,param_2,PTR_s_assets_1125a0860,0,0,7);
  func_0x00010c19a460(param_3,param_2,0xadcbb093e0888f);
  func_0x00010b77b6ec();
  func_0x00010b77b6ec();
  func_0x00010b77b6ec();
  func_0x00010b77b7c0();
  func_0x00010b77b77c();
  func_0x00010c18ec00(param_3);
  func_0x00010c19a460(param_3,param_2,0xd0aa9ffabca85f);
  func_0x00010b77b6ec();
  func_0x00010b77b6ec();
  _objc_opt_class();
  func_0x00010b77b750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77b6ec; end: 10b77b7cb;  */

void FUN_10b77b6ec(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b77b7cc; end: 10b77b7d7; +[SOJUGalleryServletGallerySnapBuilder messageClass] */

void FUN_10b77b7cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0da0);
  return;
}



/* Entry: 10b77b7d8; end: 10b77b7db; +[SOJUGalleryServletGallerySnapBuilder withJUGalleryServletGallerySnap:] */

void FUN_10b77b7d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77b7dc; end: 10b77b81f; -[SOJUGalleryServletGallerySyncRequest initWithClientCompatVersion:lastSeqnum:mediaUrl:thumbnailUrl:overlayImageUrl:pageSize:sojuInitSync:lowSeqnum:highSeqnum:syncToken:miniThumbnailBytes:snapTags:mediaFormat:] */

void FUN_10b77b7dc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77b820; end: 10b77b943; +[SOJUGalleryServletGallerySyncRequest registerMessageFields:] */

void FUN_10b77b820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_clientCompatVersion_112545fd0;
  _objc_retain(param_3);
  func_0x00010b77b978(param_3,param_2,puVar1,0,1,5,in_x6,in_x7,0,0);
  func_0x00010b77b964();
  func_0x00010b77b978();
  func_0x00010b77b944();
  func_0x00010b77b944();
  func_0x00010b77b944();
  func_0x00010b77b964();
  func_0x00010b77b978();
  func_0x00010b77b978(param_3,param_2,PTR_s_sojuInitSync_112545fe0,
                      &PTR____CFConstantStringClassReference_110f7e8b8,2,0,in_x6,in_x7,0,0);
  func_0x00010b77b964();
  func_0x00010b77b978();
  func_0x00010b77b964();
  func_0x00010b77b978();
  func_0x00010b77b964();
  func_0x00010b77b978();
  func_0x00010b77b944();
  func_0x00010b77b944();
  func_0x00010b77b944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77b944; end: 10b77b983;  */

void FUN_10b77b944(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b77b984; end: 10b77b98f; +[SOJUGalleryServletGallerySyncRequestBuilder messageClass] */

void FUN_10b77b984(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0e00);
  return;
}



/* Entry: 10b77b990; end: 10b77b993; +[SOJUGalleryServletGallerySyncRequestBuilder withJUGalleryServletGallerySyncRequest:] */

void FUN_10b77b990(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77b994; end: 10b77b9ef; -[SOJUGalleryServletGallerySyncResponse initWithServiceStatusCode:userString:backoffTime:debugInfo:quota:totalEntryCount:lastSeqnum:highestSeqnum:entries:hasMore:userSettings:defunctMedias:batchLowSeqnum:batchHighSeqnum:lowestSeqnum:syncToken:minTimestamp:syncState:lastFullSyncStartAtEpochSec:isMemDs:] */

void FUN_10b77b994(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77b9f0; end: 10b77bbdb; +[SOJUGalleryServletGallerySyncResponse registerMessageFields:] */

void FUN_10b77b9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b77bc24();
  func_0x00010b77bc10();
  func_0x00010b77bbfc();
  func_0x00010b77bc10();
  func_0x00010b77bbdc();
  func_0x00010b77bbfc();
  func_0x00010b77bc10();
  _objc_opt_class(PTR_PTR_1126e0d68);
  func_0x00010b77bc24();
  func_0x00010b77bc1c();
  func_0x00010b77bbfc();
  func_0x00010b77bc10();
  func_0x00010b77bbdc();
  func_0x00010b77bbdc();
  _objc_opt_class(PTR_PTR_1126e0e08);
  func_0x00010b77bc24();
  func_0x00010b77bc1c();
  func_0x00010b77bbfc();
  func_0x00010b77bc10();
  _objc_opt_class(PTR_PTR_1126e0e10);
  func_0x00010b77bc24();
  func_0x00010b77bc1c();
  _objc_opt_class(PTR_PTR_1126e0e18);
  func_0x00010b77bc24();
  func_0x00010b77bc1c();
  func_0x00010b77bbdc();
  func_0x00010b77bbdc();
  func_0x00010b77bbdc();
  func_0x00010b77bbfc();
  func_0x00010b77bc10();
  func_0x00010b77bbdc();
  func_0x00010b77bbdc();
  func_0x00010b77bbdc();
  func_0x00010b77bbfc();
  func_0x00010b77bc10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77bbdc; end: 10b77bc33;  */

void FUN_10b77bbdc(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b77bc34; end: 10b77bc6b; -[SOJUGalleryServletGalleryUrls initWithIdValue:type:mediaUrl:hdMediaUrl:thumbnailUrl:overlayImageUrl:mediaUploadHeaders:overlayUploadHeaders:thumbnailUploadHeaders:] */

void FUN_10b77bc34(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77bc6c; end: 10b77bda3; +[SOJUGalleryServletGalleryUrls registerMessageFields:] */

void FUN_10b77bc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  func_0x00010b77bdc4(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2,6,
                      in_x6,in_x7,0,0);
  func_0x00010b77bdc4(param_3,param_2,PTR_s_type_11267d188,0,0,5,in_x6,in_x7,0,0);
  func_0x00010b77bda4();
  func_0x00010b77bda4();
  func_0x00010b77bda4();
  func_0x00010b77bda4();
  func_0x00010b77bdd0();
  func_0x00010b77bdc4();
  func_0x00010b77bde0();
  func_0x00010b77bdd0();
  func_0x00010b77bdc4();
  func_0x00010b77bde0();
  func_0x00010b77bdd0();
  func_0x00010b77bdc4();
  func_0x00010b77bde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77bda4; end: 10b77bde7;  */

void FUN_10b77bda4(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b77bde8; end: 10b77be2b; -[SOJUGalleryServletGalleryUserSetting initWithStoryAutoSaving:autoSaveToCameraRoll:backupOnCellular:privateGalleryEnabled:topSecretPrivateGalleryEnabled:saveToPrivateGalleryByDefault:snapSaveOption:entriesToPrefetchGrid:entriesToPrefetchBrowse:minMediaCacheSize:mediaCachePercentage:swipedIntoMemoriesPage:forceSyncRequired:] */

void FUN_10b77bde8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77be2c; end: 10b77bf57; +[SOJUGalleryServletGalleryUserSetting registerMessageFields:] */

void FUN_10b77be2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_storyAutoSaving_112546050;
  _objc_retain(param_3);
  func_0x00010b77bf8c(param_3,param_2,puVar1,0,1,0);
  func_0x00010b77bf58();
  func_0x00010b77bf58();
  func_0x00010b77bf58();
  func_0x00010b77bf58();
  func_0x00010b77bf58();
  func_0x00010bf06b60(param_3,param_2,PTR_s_snapSaveOption_112546080,0,1,6,0,FUN_10b77dc68,
                      FUN_10b77dce8,0);
  func_0x00010b77bf78();
  func_0x00010b77bf8c();
  func_0x00010b77bf78();
  func_0x00010b77bf8c();
  func_0x00010b77bf78();
  func_0x00010b77bf8c();
  func_0x00010b77bf78();
  func_0x00010b77bf8c();
  func_0x00010b77bf58();
  func_0x00010b77bf58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77bf58; end: 10b77bf97;  */

void FUN_10b77bf58(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b77bf98; end: 10b77bfc3; -[SOJUGalleryServletGetCollectionsResponse initWithServiceStatusCode:userString:backoffTime:debugInfo:quota:totalEntryCount:collections:] */

void FUN_10b77bf98(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77bfc4; end: 10b77c0b3; +[SOJUGalleryServletGetCollectionsResponse registerMessageFields:] */

void FUN_10b77bfc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_serviceStatusCode_112635848;
  _objc_retain(param_3);
  FUN_10b77c0b4(param_3,param_2,puVar1,0,1,5);
  func_0x00010b77c0c0();
  FUN_10b77c0b4();
  func_0x00010b77c0c0();
  FUN_10b77c0b4();
  func_0x00010b77c0c0();
  FUN_10b77c0b4();
  _objc_opt_class(PTR_PTR_1126e0d68);
  func_0x00010b77c0d4();
  func_0x00010b77c0c0();
  FUN_10b77c0b4();
  _objc_opt_class(PTR_PTR_1126bf9a8);
  func_0x00010b77c0d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77c0b4; end: 10b77c0ef;  */

void FUN_10b77c0b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77c0f0; end: 10b77c0f3; -[SOJUGalleryServletGetRedirectUrlRequest initWithRedirectUri:] */

void FUN_10b77c0f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b77c0f4; end: 10b77c133; +[SOJUGalleryServletGetRedirectUrlRequest registerMessageFields:] */

void FUN_10b77c0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_redirectUri_112626d00,0,1,6,0,0,0,0);
  return;
}



/* Entry: 10b77c134; end: 10b77c13f; +[SOJUGalleryServletGetRedirectUrlRequestBuilder messageClass] */

void FUN_10b77c134(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0e20);
  return;
}



/* Entry: 10b77c140; end: 10b77c143; +[SOJUGalleryServletGetRedirectUrlRequestBuilder withJUGalleryServletGetRedirectUrlRequest:] */

void FUN_10b77c140(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77c144; end: 10b77c18b; -[SOJUGalleryServletGetSnapsRequest initWithSnapIds:memDataIds:overlayData:mediaUrl:thumbnailUrl:overlayImageUrl:snapTags:snapLocation:encryption:miniThumbnailBytes:gzippedOverlayData:mediaFormat:sensorBlob:spectaclesMetadataUrl:spectaclesSecondaryMetadataUrl:] */

void FUN_10b77c144(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77c18c; end: 10b77c2c3; +[SOJUGalleryServletGetSnapsRequest registerMessageFields:] */

void FUN_10b77c18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b77c2f0();
  func_0x00010b77c2e4();
  func_0x00010c19a460(param_3,param_2,0x9d14c8c73bfd91);
  _objc_opt_class(PTR_PTR_1126d2c48);
  func_0x00010b77c2f0();
  func_0x00010bf06b60();
  func_0x00010b77c2c4();
  func_0x00010b77c2c4();
  func_0x00010b77c2c4();
  func_0x00010b77c2c4();
  func_0x00010b77c2c4();
  func_0x00010b77c2c4();
  func_0x00010b77c2e4(param_3,param_2,PTR_s_encryption_1125c28f0,0,0,0);
  func_0x00010b77c2c4();
  func_0x00010b77c2c4();
  func_0x00010b77c2c4();
  func_0x00010b77c2c4();
  func_0x00010b77c2c4();
  func_0x00010b77c2c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77c2c4; end: 10b77c30b;  */

void FUN_10b77c2c4(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b77c30c; end: 10b77c317; +[SOJUGalleryServletGetSnapsRequestBuilder messageClass] */

void FUN_10b77c30c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0e28);
  return;
}



/* Entry: 10b77c318; end: 10b77c31b; +[SOJUGalleryServletGetSnapsRequestBuilder withJUGalleryServletGetSnapsRequest:] */

void FUN_10b77c318(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77c31c; end: 10b77c347; -[SOJUGalleryServletGetSnapsResponse initWithServiceStatusCode:userString:backoffTime:debugInfo:quota:totalEntryCount:snaps:] */

void FUN_10b77c31c(void)

{
  func_0x00010c012ba0();
  return;
}


